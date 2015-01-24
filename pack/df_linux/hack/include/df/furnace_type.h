/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_FURNACE_TYPE_H
#define DF_FURNACE_TYPE_H
namespace df {
  namespace enums {
    namespace furnace_type {
      enum furnace_type : int16_t {
        WoodFurnace,
        Smelter,
        GlassFurnace,
        Kiln,
        MagmaSmelter,
        MagmaGlassFurnace,
        MagmaKiln,
        Custom
      };
    }
  }
  using enums::furnace_type::furnace_type;
  template<> struct DFHACK_EXPORT identity_traits<furnace_type> {
    static enum_identity identity;
    static enum_identity *get() { return &identity; }
  };
  template<> struct DFHACK_EXPORT enum_traits<furnace_type> {
    typedef int16_t base_type;
    typedef furnace_type enum_type;
    static const base_type first_item_value = 0;
    static const base_type last_item_value = 7;
    static inline bool is_valid(enum_type value) {
      return (base_type(value) >= first_item_value && base_type(value) <= last_item_value);
    }
    static const enum_type first_item = (enum_type)first_item_value;
    static const enum_type last_item = (enum_type)last_item_value;
    static const char *const key_table[8];
  };
}
#endif
