/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_INTERACTION_INSTANCE_H
#define DF_INTERACTION_INSTANCE_H
namespace df {
  struct DFHACK_EXPORT interaction_instance {
    int32_t id;
    int32_t anon_1;
    int32_t anon_2;
    int32_t anon_3;
    std::vector<int32_t > anon_4;
    static struct_identity _identity;
    typedef interaction_instance* key_pointer_type;
    typedef int32_t key_field_type;
    static int binsearch_index(const std::vector<interaction_instance*> &vec, key_field_type key, bool exact = true);
    static int binsearch_index(const std::vector<interaction_instance*> &vec, key_pointer_type key, bool exact = true);
    static std::vector<interaction_instance*> &get_vector();
    static interaction_instance *find(key_field_type id);
  public:
    interaction_instance();
  };
}
#endif
