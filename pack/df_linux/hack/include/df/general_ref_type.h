/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_GENERAL_REF_TYPE_H
#define DF_GENERAL_REF_TYPE_H
namespace df {
  namespace enums {
    namespace general_ref_type {
      enum general_ref_type : int32_t {
        ARTIFACT,
        IS_ARTIFACT,
        NEMESIS,
        IS_NEMESIS,
        ITEM,
        ITEM_TYPE,
        COINBATCH,
        MAPSQUARE,
        ENTITY_ART_IMAGE,
        CONTAINS_UNIT,
        CONTAINS_ITEM,
        CONTAINED_IN_ITEM,
        PROJECTILE,
        UNIT,
        UNIT_MILKEE,
        UNIT_TRAINEE,
        UNIT_ITEMOWNER,
        UNIT_TRADEBRINGER,
        UNIT_HOLDER,
        UNIT_WORKER,
        UNIT_CAGEE,
        UNIT_BEATEE,
        UNIT_FOODRECEIVER,
        UNIT_KIDNAPEE,
        UNIT_PATIENT,
        UNIT_INFANT,
        UNIT_SLAUGHTEREE,
        UNIT_SHEAREE,
        UNIT_SUCKEE,
        UNIT_REPORTEE,
        BUILDING,
        BUILDING_CIVZONE_ASSIGNED,
        BUILDING_TRIGGER,
        BUILDING_TRIGGERTARGET,
        BUILDING_CHAIN,
        BUILDING_CAGED,
        BUILDING_HOLDER,
        BUILDING_WELL_TAG,
        BUILDING_USE_TARGET_1,
        BUILDING_USE_TARGET_2,
        BUILDING_DESTINATION,
        BUILDING_NEST_BOX,
        ENTITY,
        ENTITY_STOLEN,
        ENTITY_OFFERED,
        ENTITY_ITEMOWNER,
        LOCATION,
        INTERACTION,
        ABSTRACT_BUILDING,
        HISTORICAL_EVENT,
        SPHERE,
        SITE,
        SUBREGION,
        FEATURE_LAYER,
        HISTORICAL_FIGURE,
        ENTITY_POP,
        CREATURE,
        UNIT_RIDER
      };
    }
  }
  using enums::general_ref_type::general_ref_type;
  template<> struct DFHACK_EXPORT identity_traits<general_ref_type> {
    static enum_identity identity;
    static enum_identity *get() { return &identity; }
  };
  template<> struct DFHACK_EXPORT enum_traits<general_ref_type> {
    typedef int32_t base_type;
    typedef general_ref_type enum_type;
    static const base_type first_item_value = 0;
    static const base_type last_item_value = 57;
    static inline bool is_valid(enum_type value) {
      return (base_type(value) >= first_item_value && base_type(value) <= last_item_value);
    }
    static const enum_type first_item = (enum_type)first_item_value;
    static const enum_type last_item = (enum_type)last_item_value;
    static const char *const key_table[58];
  };
}
#endif
