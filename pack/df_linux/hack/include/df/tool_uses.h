/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_TOOL_USES_H
#define DF_TOOL_USES_H
namespace df {
  namespace enums {
    namespace tool_uses {
      enum tool_uses : int16_t {
        NONE = -1,
        LIQUID_COOKING,
        LIQUID_SCOOP,
        GRIND_POWDER_RECEPTACLE,
        GRIND_POWDER_GRINDER,
        MEAT_CARVING,
        MEAT_BONING,
        MEAT_SLICING,
        MEAT_CLEAVING,
        HOLD_MEAT_FOR_CARVING,
        MEAL_CONTAINER,
        LIQUID_CONTAINER,
        FOOD_STORAGE,
        HIVE,
        NEST_BOX,
        SMALL_OBJECT_STORAGE,
        TRACK_CART,
        HEAVY_OBJECT_HAULING,
        STAND_AND_WORK_ABOVE
      };
    }
  }
  using enums::tool_uses::tool_uses;
  template<> struct DFHACK_EXPORT identity_traits<tool_uses> {
    static enum_identity identity;
    static enum_identity *get() { return &identity; }
  };
  template<> struct DFHACK_EXPORT enum_traits<tool_uses> {
    typedef int16_t base_type;
    typedef tool_uses enum_type;
    static const base_type first_item_value = -1;
    static const base_type last_item_value = 17;
    static inline bool is_valid(enum_type value) {
      return (base_type(value) >= first_item_value && base_type(value) <= last_item_value);
    }
    static const enum_type first_item = (enum_type)first_item_value;
    static const enum_type last_item = (enum_type)last_item_value;
    static const char *const key_table[19];
  };
}
#endif
