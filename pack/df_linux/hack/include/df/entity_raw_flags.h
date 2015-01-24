/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_ENTITY_RAW_FLAGS_H
#define DF_ENTITY_RAW_FLAGS_H
namespace df {
  namespace enums {
    namespace entity_raw_flags {
      enum entity_raw_flags : int32_t {
        CIV_CONTROLLABLE,
        INDIV_CONTROLLABLE,
        LAYER_LINKED,
        INDOOR_WOOD,
        WOOD_ARMOR,
        SIEGER,
        AMBUSHER,
        BABYSNATCHER,
        ITEM_THIEF,
        CLOTHING,
        CURRENCY_BY_YEAR,
        METAL_PREF,
        GEM_PREF,
        STONE_PREF,
        WOOD_WEAPONS,
        BUILDS_OUTDOOR_FORTIFICATIONS,
        RIVER_PRODUCTS,
        OCEAN_PRODUCTS,
        INDOOR_FARMING,
        OUTDOOR_FARMING,
        USE_CAVE_ANIMALS,
        USE_EVIL_ANIMALS,
        USE_ANIMAL_PRODUCTS,
        COMMON_DOMESTIC_PACK,
        COMMON_DOMESTIC_PULL,
        COMMON_DOMESTIC_MOUNT,
        COMMON_DOMESTIC_PET,
        SUBTERRANEAN_CLOTHING,
        USE_EVIL_WOOD,
        USE_GOOD_WOOD,
        USE_EVIL_PLANTS,
        USE_GOOD_PLANTS,
        USE_GOOD_ANIMALS,
        USE_ANY_PET_RACE,
        USE_MISC_PROCESSED_WOOD_PRODUCTS,
        IMPROVED_BOWS,
        OUTDOOR_WOOD,
        LOCAL_BANDITRY,
        BUILDS_OUTDOOR_TOMBS,
        INVADERS_IGNORE_NEUTRALS,
        AT_PEACE_WITH_WILDLIFE,
        EQUIPMENT_IMPROVEMENTS,
        ABUSE_BODIES,
        UNDEAD_CANDIDATE,
        GENERATED,
        SKULKING,
        anon_1,
        MERCHANT_NOBILITY,
        TREE_CAP_DIPLOMACY,
        DIPLOMAT_BODYGUARDS,
        MERCHANT_BODYGUARDS,
        INDOOR_ORCHARDS,
        OUTDOOR_ORCHARDS,
        WANDERER,
        BEAST_HUNTER,
        SCOUT,
        WILL_ACCEPT_TRIBUTE,
        INDOOR_GARDENS,
        OUTDOOR_GARDENS,
        MERCENARY,
        SITE_GUARDIAN,
        DIVINE_MAT_WEAPONS,
        DIVINE_MAT_ARMOR,
        DIVINE_MAT_CRAFTS,
        DIVINE_MAT_CLOTHING
      };
    }
  }
  using enums::entity_raw_flags::entity_raw_flags;
  template<> struct DFHACK_EXPORT identity_traits<entity_raw_flags> {
    static enum_identity identity;
    static enum_identity *get() { return &identity; }
  };
  template<> struct DFHACK_EXPORT enum_traits<entity_raw_flags> {
    typedef int32_t base_type;
    typedef entity_raw_flags enum_type;
    static const base_type first_item_value = 0;
    static const base_type last_item_value = 64;
    static inline bool is_valid(enum_type value) {
      return (base_type(value) >= first_item_value && base_type(value) <= last_item_value);
    }
    static const enum_type first_item = (enum_type)first_item_value;
    static const enum_type last_item = (enum_type)last_item_value;
    static const char *const key_table[65];
  };
}
#endif
