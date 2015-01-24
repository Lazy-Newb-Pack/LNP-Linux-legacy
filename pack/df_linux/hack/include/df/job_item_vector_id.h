/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_JOB_ITEM_VECTOR_ID_H
#define DF_JOB_ITEM_VECTOR_ID_H
#ifndef DF_ITEMS_OTHER_ID_H
#include "items_other_id.h"
#endif
namespace df {
  namespace enums {
    namespace job_item_vector_id {
      enum job_item_vector_id : int16_t {
        ANY,
        IN_PLAY,
        ANY_ARTIFACT,
        WEAPON,
        ANY_WEAPON,
        ANY_SPIKE,
        ANY_TRUE_ARMOR,
        ANY_ARMOR_HELM,
        ANY_ARMOR_SHOES,
        SHIELD,
        ANY_ARMOR_GLOVES,
        ANY_ARMOR_PANTS,
        QUIVER,
        SPLINT,
        /**
         * supposed to be ORTHOPEDIC_CAST
         */
        ANY_14,
        CRUTCH,
        BACKPACK,
        AMMO,
        WOOD,
        BOULDER,
        ROCK,
        ANY_REFUSE,
        ANY_GOOD_FOOD,
        ANY_AUTO_CLEAN,
        ANY_GENERIC23,
        ANY_GENERIC24,
        ANY_FURNITURE,
        ANY_CAGE_OR_TRAP,
        ANY_EDIBLE_RAW,
        ANY_EDIBLE_CARNIVORE,
        ANY_EDIBLE_BONECARN,
        ANY_EDIBLE_VERMIN,
        ANY_EDIBLE_VERMIN_BOX,
        ANY_CAN_ROT,
        ANY_MURDERED,
        ANY_DEAD_DWARF,
        ANY_GENERIC35,
        ANY_GENERIC36,
        ANY_GENERIC37,
        ANY_GENERIC38,
        DOOR,
        FLOODGATE,
        HATCH_COVER,
        GRATE,
        CAGE,
        FLASK,
        WINDOW,
        GOBLET,
        INSTRUMENT,
        TOY,
        BUCKET,
        BARREL,
        CHAIN,
        ANIMALTRAP,
        BED,
        TRACTION_BENCH,
        CHAIR,
        COFFIN,
        TABLE,
        STATUE,
        QUERN,
        MILLSTONE,
        BOX,
        BIN,
        ARMORSTAND,
        WEAPONRACK,
        CABINET,
        ANVIL,
        CATAPULTPARTS,
        BALLISTAPARTS,
        SIEGEAMMO,
        TRAPPARTS,
        ANY_WEBS,
        PIPE_SECTION,
        ANY_ENCASED,
        ANY_IN_CONSTRUCTION,
        DRINK,
        ANY_DRINK,
        LIQUID_MISC,
        POWDER_MISC,
        ANY_COOKABLE,
        ANY_GENERIC82,
        VERMIN,
        PET,
        ANY_CRITTER,
        COIN,
        GLOB,
        ANY_RECENTLY_DROPPED,
        ANY_MELT_DESIGNATED,
        BAD,
        TRAPCOMP,
        BAR,
        SMALLGEM,
        BLOCKS,
        ROUGH,
        CORPSE,
        FIGURINE,
        AMULET,
        SCEPTER,
        CROWN,
        RING,
        EARRING,
        BRACELET,
        GEM,
        CORPSEPIECE,
        REMAINS,
        MEAT,
        FISH,
        FISH_RAW,
        SEEDS,
        PLANT,
        SKIN_TANNED,
        PLANT_GROWTH,
        THREAD,
        CLOTH,
        TOTEM,
        PANTS,
        CHEESE,
        FOOD,
        BALLISTAARROWHEAD,
        ARMOR,
        SHOES,
        HELM,
        GLOVES,
        /**
         * supposed to be TOOL
         */
        ANY_124,
        /**
         * supposed to be SLAB
         */
        ANY_125,
        EGG,
        /**
         * supposed to be FOOD_STORAGE
         */
        ANY_127,
        ANY_CORPSE,
        BOOK
      };
    }
  }
  using enums::job_item_vector_id::job_item_vector_id;
  template<> struct DFHACK_EXPORT identity_traits<job_item_vector_id> {
    static enum_identity identity;
    static enum_identity *get() { return &identity; }
  };
  template<> struct DFHACK_EXPORT enum_traits<job_item_vector_id> {
    typedef int16_t base_type;
    typedef job_item_vector_id enum_type;
    static const base_type first_item_value = 0;
    static const base_type last_item_value = 129;
    static inline bool is_valid(enum_type value) {
      return (base_type(value) >= first_item_value && base_type(value) <= last_item_value);
    }
    static const enum_type first_item = (enum_type)first_item_value;
    static const enum_type last_item = (enum_type)last_item_value;
    static const char *const key_table[130];
    struct attr_entry_type {
      df::items_other_id other;
      static struct_identity _identity;
    };
    static const attr_entry_type attr_table[130+1];
    static const attr_entry_type &attrs(enum_type value);
  };
}
#endif
