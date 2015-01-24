/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_CREATURE_GRAPHICS_ROLE_H
#define DF_CREATURE_GRAPHICS_ROLE_H
namespace df {
  namespace enums {
    namespace creature_graphics_role {
      enum creature_graphics_role : int32_t {
        DEFAULT,
        ADVENTURER,
        GUARD,
        ROYALGUARD,
        ANIMATED,
        GHOST
      };
    }
  }
  using enums::creature_graphics_role::creature_graphics_role;
  template<> struct DFHACK_EXPORT identity_traits<creature_graphics_role> {
    static enum_identity identity;
    static enum_identity *get() { return &identity; }
  };
  template<> struct DFHACK_EXPORT enum_traits<creature_graphics_role> {
    typedef int32_t base_type;
    typedef creature_graphics_role enum_type;
    static const base_type first_item_value = 0;
    static const base_type last_item_value = 5;
    static inline bool is_valid(enum_type value) {
      return (base_type(value) >= first_item_value && base_type(value) <= last_item_value);
    }
    static const enum_type first_item = (enum_type)first_item_value;
    static const enum_type last_item = (enum_type)last_item_value;
    static const char *const key_table[6];
  };
}
#endif
