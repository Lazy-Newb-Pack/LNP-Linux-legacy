/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_D_INIT_IDLERS_H
#define DF_D_INIT_IDLERS_H
namespace df {
  namespace enums {
    namespace d_init_idlers {
      enum d_init_idlers : int16_t {
        OFF = -1,
        TOP,
        BOTTOM
      };
    }
  }
  using enums::d_init_idlers::d_init_idlers;
  template<> struct DFHACK_EXPORT identity_traits<d_init_idlers> {
    static enum_identity identity;
    static enum_identity *get() { return &identity; }
  };
  template<> struct DFHACK_EXPORT enum_traits<d_init_idlers> {
    typedef int16_t base_type;
    typedef d_init_idlers enum_type;
    static const base_type first_item_value = -1;
    static const base_type last_item_value = 1;
    static inline bool is_valid(enum_type value) {
      return (base_type(value) >= first_item_value && base_type(value) <= last_item_value);
    }
    static const enum_type first_item = (enum_type)first_item_value;
    static const enum_type last_item = (enum_type)last_item_value;
    static const char *const key_table[3];
  };
}
#endif
