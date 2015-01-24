/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_TOOL_FLAGS_H
#define DF_TOOL_FLAGS_H
namespace df {
  namespace enums {
    namespace tool_flags {
      enum tool_flags : int32_t {
        HARD_MAT,
        METAL_MAT,
        HAS_EDGE_ATTACK,
        METAL_WEAPON_MAT,
        UNIMPROVABLE,
        SOFT_MAT,
        WOOD_MAT,
        INVERTED_TILE,
        FURNITURE
      };
    }
  }
  using enums::tool_flags::tool_flags;
  template<> struct DFHACK_EXPORT identity_traits<tool_flags> {
    static enum_identity identity;
    static enum_identity *get() { return &identity; }
  };
  template<> struct DFHACK_EXPORT enum_traits<tool_flags> {
    typedef int32_t base_type;
    typedef tool_flags enum_type;
    static const base_type first_item_value = 0;
    static const base_type last_item_value = 8;
    static inline bool is_valid(enum_type value) {
      return (base_type(value) >= first_item_value && base_type(value) <= last_item_value);
    }
    static const enum_type first_item = (enum_type)first_item_value;
    static const enum_type last_item = (enum_type)last_item_value;
    static const char *const key_table[9];
  };
}
#endif
