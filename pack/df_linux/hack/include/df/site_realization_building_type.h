/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_SITE_REALIZATION_BUILDING_TYPE_H
#define DF_SITE_REALIZATION_BUILDING_TYPE_H
namespace df {
  namespace enums {
    namespace site_realization_building_type {
      enum site_realization_building_type : int32_t {
        cottage_plot,
        castle_wall,
        castle_tower,
        castle_courtyard,
        house,
        temple,
        tomb,
        shop_house,
        warehouse,
        market_square,
        pasture,
        waste,
        courtyard,
        well,
        vault,
        great_tower,
        trenches,
        tree_house,
        hillock_house,
        mead_hall,
        fortress_entrance
      };
    }
  }
  using enums::site_realization_building_type::site_realization_building_type;
  template<> struct DFHACK_EXPORT identity_traits<site_realization_building_type> {
    static enum_identity identity;
    static enum_identity *get() { return &identity; }
  };
  template<> struct DFHACK_EXPORT enum_traits<site_realization_building_type> {
    typedef int32_t base_type;
    typedef site_realization_building_type enum_type;
    static const base_type first_item_value = 0;
    static const base_type last_item_value = 20;
    static inline bool is_valid(enum_type value) {
      return (base_type(value) >= first_item_value && base_type(value) <= last_item_value);
    }
    static const enum_type first_item = (enum_type)first_item_value;
    static const enum_type last_item = (enum_type)last_item_value;
    static const char *const key_table[21];
  };
}
#endif
