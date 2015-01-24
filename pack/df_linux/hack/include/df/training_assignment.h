/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_TRAINING_ASSIGNMENT_H
#define DF_TRAINING_ASSIGNMENT_H
namespace df {
  struct DFHACK_EXPORT training_assignment {
    int32_t animal_id;
    int32_t trainer_id;
    enum T_auto_mode : int32_t {
      None,
      Any,
      AnyUnassigned
    };
    T_auto_mode auto_mode;
    static struct_identity _identity;
    typedef training_assignment* key_pointer_type;
    typedef int32_t key_field_type;
    static int binsearch_index(const std::vector<training_assignment*> &vec, key_field_type key, bool exact = true);
    static int binsearch_index(const std::vector<training_assignment*> &vec, key_pointer_type key, bool exact = true);
    static std::vector<training_assignment*> &get_vector();
    static training_assignment *find(key_field_type id);
  public:
    training_assignment();
  };
  template<> struct DFHACK_EXPORT identity_traits<training_assignment::T_auto_mode> {
    static enum_identity identity;
    static enum_identity *get() { return &identity; }
  };
  template<> struct DFHACK_EXPORT enum_traits<training_assignment::T_auto_mode> {
    typedef int32_t base_type;
    typedef training_assignment::T_auto_mode enum_type;
    static const base_type first_item_value = 0;
    static const base_type last_item_value = 2;
    static inline bool is_valid(enum_type value) {
      return (base_type(value) >= first_item_value && base_type(value) <= last_item_value);
    }
    static const enum_type first_item = (enum_type)first_item_value;
    static const enum_type last_item = (enum_type)last_item_value;
    static const char *const key_table[3];
  };
}
#endif
