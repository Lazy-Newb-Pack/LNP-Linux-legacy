/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_FURNITURE_TYPE_H
#define DF_FURNITURE_TYPE_H
namespace df {
  namespace enums {
    namespace furniture_type {
      enum furniture_type : int32_t {
        FLOODGATE,
        HATCH_COVER,
        GRATE,
        DOOR,
        CATAPULTPARTS,
        BALLISTAPARTS,
        TRAPPARTS,
        BED,
        TRACTION_BENCH,
        WINDOW,
        CHAIR,
        TABLE,
        COFFIN,
        STATUE,
        SLAB,
        QUERN,
        MILLSTONE,
        ARMORSTAND,
        WEAPONRACK,
        CABINET,
        ANVIL,
        BUCKET,
        BIN,
        BOX,
        SIEGEAMMO,
        BARREL,
        BALLISTAARROWHEAD,
        PIPE_SECTION,
        FOOD_STORAGE,
        MINECART,
        WHEELBARROW,
        OTHER_LARGE_TOOLS,
        SAND_BAG
      };
    }
  }
  using enums::furniture_type::furniture_type;
  template<> struct DFHACK_EXPORT identity_traits<furniture_type> {
    static enum_identity identity;
    static enum_identity *get() { return &identity; }
  };
  template<> struct DFHACK_EXPORT enum_traits<furniture_type> {
    typedef int32_t base_type;
    typedef furniture_type enum_type;
    static const base_type first_item_value = 0;
    static const base_type last_item_value = 32;
    static inline bool is_valid(enum_type value) {
      return (base_type(value) >= first_item_value && base_type(value) <= last_item_value);
    }
    static const enum_type first_item = (enum_type)first_item_value;
    static const enum_type last_item = (enum_type)last_item_value;
    static const char *const key_table[33];
  };
}
#endif
