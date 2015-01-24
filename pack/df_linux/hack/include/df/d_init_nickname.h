/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_D_INIT_NICKNAME_H
#define DF_D_INIT_NICKNAME_H
namespace df {
  namespace enums {
    namespace d_init_nickname {
      enum d_init_nickname : int32_t {
        REPLACE_FIRST,
        CENTRALIZE,
        REPLACE_ALL
      };
    }
  }
  using enums::d_init_nickname::d_init_nickname;
  template<> struct DFHACK_EXPORT identity_traits<d_init_nickname> {
    static enum_identity identity;
    static enum_identity *get() { return &identity; }
  };
  template<> struct DFHACK_EXPORT enum_traits<d_init_nickname> {
    typedef int32_t base_type;
    typedef d_init_nickname enum_type;
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
