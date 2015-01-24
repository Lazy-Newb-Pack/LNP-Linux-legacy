/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_REACTION_REAGENT_TYPE_H
#define DF_REACTION_REAGENT_TYPE_H
namespace df {
  namespace enums {
    namespace reaction_reagent_type {
      enum reaction_reagent_type : int32_t {
        item
      };
    }
  }
  using enums::reaction_reagent_type::reaction_reagent_type;
  template<> struct DFHACK_EXPORT identity_traits<reaction_reagent_type> {
    static enum_identity identity;
    static enum_identity *get() { return &identity; }
  };
  template<> struct DFHACK_EXPORT enum_traits<reaction_reagent_type> {
    typedef int32_t base_type;
    typedef reaction_reagent_type enum_type;
    static const base_type first_item_value = 0;
    static const base_type last_item_value = 0;
    static inline bool is_valid(enum_type value) {
      return (base_type(value) >= first_item_value && base_type(value) <= last_item_value);
    }
    static const enum_type first_item = (enum_type)first_item_value;
    static const enum_type last_item = (enum_type)last_item_value;
    static const char *const key_table[1];
  };
}
#endif
