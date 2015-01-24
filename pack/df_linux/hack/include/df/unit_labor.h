/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_UNIT_LABOR_H
#define DF_UNIT_LABOR_H
namespace df {
  namespace enums {
    namespace unit_labor {
      enum unit_labor : int32_t {
        NONE = -1,
        MINE,
        HAUL_STONE,
        HAUL_WOOD,
        HAUL_BODY,
        HAUL_FOOD,
        HAUL_REFUSE,
        HAUL_ITEM,
        HAUL_FURNITURE,
        HAUL_ANIMALS,
        CLEAN,
        CUTWOOD,
        CARPENTER,
        DETAIL,
        MASON,
        ARCHITECT,
        ANIMALTRAIN,
        ANIMALCARE,
        DIAGNOSE,
        SURGERY,
        BONE_SETTING,
        SUTURING,
        DRESSING_WOUNDS,
        FEED_WATER_CIVILIANS,
        RECOVER_WOUNDED,
        BUTCHER,
        TRAPPER,
        DISSECT_VERMIN,
        LEATHER,
        TANNER,
        BREWER,
        ALCHEMIST,
        SOAP_MAKER,
        WEAVER,
        CLOTHESMAKER,
        MILLER,
        PROCESS_PLANT,
        MAKE_CHEESE,
        MILK,
        COOK,
        PLANT,
        HERBALIST,
        FISH,
        CLEAN_FISH,
        DISSECT_FISH,
        HUNT,
        SMELT,
        FORGE_WEAPON,
        FORGE_ARMOR,
        FORGE_FURNITURE,
        METAL_CRAFT,
        CUT_GEM,
        ENCRUST_GEM,
        WOOD_CRAFT,
        STONE_CRAFT,
        BONE_CARVE,
        GLASSMAKER,
        EXTRACT_STRAND,
        SIEGECRAFT,
        SIEGEOPERATE,
        BOWYER,
        MECHANIC,
        POTASH_MAKING,
        LYE_MAKING,
        DYER,
        BURN_WOOD,
        OPERATE_PUMP,
        SHEARER,
        SPINNER,
        POTTERY,
        GLAZING,
        PRESSING,
        BEEKEEPING,
        WAX_WORKING,
        HANDLE_VEHICLES,
        HAUL_TRADE,
        PULL_LEVER,
        REMOVE_CONSTRUCTION,
        HAUL_WATER,
        GELD,
        BUILD_ROAD,
        BUILD_CONSTRUCTION
      };
    }
  }
  using enums::unit_labor::unit_labor;
  template<> struct DFHACK_EXPORT identity_traits<unit_labor> {
    static enum_identity identity;
    static enum_identity *get() { return &identity; }
  };
  template<> struct DFHACK_EXPORT enum_traits<unit_labor> {
    typedef int32_t base_type;
    typedef unit_labor enum_type;
    static const base_type first_item_value = -1;
    static const base_type last_item_value = 80;
    static inline bool is_valid(enum_type value) {
      return (base_type(value) >= first_item_value && base_type(value) <= last_item_value);
    }
    static const enum_type first_item = (enum_type)first_item_value;
    static const enum_type last_item = (enum_type)last_item_value;
    static const char *const key_table[82];
    struct attr_entry_type {
      const char* caption;
      static struct_identity _identity;
    };
    static const attr_entry_type attr_table[82+1];
    static const attr_entry_type &attrs(enum_type value);
  };
}
#endif
