/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_D_INIT_Z_VIEW_H
#define DF_D_INIT_Z_VIEW_H
namespace df {
  namespace enums {
    namespace d_init_z_view {
      enum d_init_z_view : int32_t {
        OFF,
        UNHIDDEN,
        CREATURE,
        ON
      };
    }
  }
  using enums::d_init_z_view::d_init_z_view;
  template<> struct DFHACK_EXPORT identity_traits<d_init_z_view> {
    static enum_identity identity;
    static enum_identity *get() { return &identity; }
  };
  template<> struct DFHACK_EXPORT enum_traits<d_init_z_view> {
    typedef int32_t base_type;
    typedef d_init_z_view enum_type;
    static const base_type first_item_value = 0;
    static const base_type last_item_value = 3;
    static inline bool is_valid(enum_type value) {
      return (base_type(value) >= first_item_value && base_type(value) <= last_item_value);
    }
    static const enum_type first_item = (enum_type)first_item_value;
    static const enum_type last_item = (enum_type)last_item_value;
    static const char *const key_table[4];
  };
}
#endif
