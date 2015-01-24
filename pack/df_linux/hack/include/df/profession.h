/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_PROFESSION_H
#define DF_PROFESSION_H
namespace df {
  namespace enums {
    namespace profession {
      enum profession : int16_t {
        NONE = -1,
        MINER,
        WOODWORKER,
        CARPENTER,
        BOWYER,
        WOODCUTTER,
        STONEWORKER,
        ENGRAVER,
        MASON,
        RANGER,
        ANIMAL_CARETAKER,
        ANIMAL_TRAINER,
        HUNTER,
        TRAPPER,
        ANIMAL_DISSECTOR,
        METALSMITH,
        FURNACE_OPERATOR,
        WEAPONSMITH,
        ARMORER,
        BLACKSMITH,
        METALCRAFTER,
        JEWELER,
        GEM_CUTTER,
        GEM_SETTER,
        CRAFTSMAN,
        WOODCRAFTER,
        STONECRAFTER,
        LEATHERWORKER,
        BONE_CARVER,
        WEAVER,
        CLOTHIER,
        GLASSMAKER,
        POTTER,
        GLAZER,
        WAX_WORKER,
        STRAND_EXTRACTOR,
        FISHERY_WORKER,
        FISHERMAN,
        FISH_DISSECTOR,
        FISH_CLEANER,
        FARMER,
        CHEESE_MAKER,
        MILKER,
        COOK,
        THRESHER,
        MILLER,
        BUTCHER,
        TANNER,
        DYER,
        PLANTER,
        HERBALIST,
        BREWER,
        SOAP_MAKER,
        POTASH_MAKER,
        LYE_MAKER,
        WOOD_BURNER,
        SHEARER,
        SPINNER,
        PRESSER,
        BEEKEEPER,
        ENGINEER,
        MECHANIC,
        SIEGE_ENGINEER,
        SIEGE_OPERATOR,
        PUMP_OPERATOR,
        CLERK,
        ADMINISTRATOR,
        TRADER,
        ARCHITECT,
        ALCHEMIST,
        DOCTOR,
        DIAGNOSER,
        BONE_SETTER,
        SUTURER,
        SURGEON,
        MERCHANT,
        HAMMERMAN,
        MASTER_HAMMERMAN,
        SPEARMAN,
        MASTER_SPEARMAN,
        CROSSBOWMAN,
        MASTER_CROSSBOWMAN,
        WRESTLER,
        MASTER_WRESTLER,
        AXEMAN,
        MASTER_AXEMAN,
        SWORDSMAN,
        MASTER_SWORDSMAN,
        MACEMAN,
        MASTER_MACEMAN,
        PIKEMAN,
        MASTER_PIKEMAN,
        BOWMAN,
        MASTER_BOWMAN,
        BLOWGUNMAN,
        MASTER_BLOWGUNMAN,
        LASHER,
        MASTER_LASHER,
        RECRUIT,
        TRAINED_HUNTER,
        TRAINED_WAR,
        MASTER_THIEF,
        THIEF,
        STANDARD,
        CHILD,
        BABY,
        DRUNK,
        MONSTER_SLAYER,
        SCOUT,
        BEAST_HUNTER,
        SNATCHER,
        MERCENARY,
        GELDER
      };
    }
  }
  using enums::profession::profession;
  template<> struct DFHACK_EXPORT identity_traits<profession> {
    static enum_identity identity;
    static enum_identity *get() { return &identity; }
  };
  template<> struct DFHACK_EXPORT enum_traits<profession> {
    typedef int16_t base_type;
    typedef profession enum_type;
    static const base_type first_item_value = -1;
    static const base_type last_item_value = 111;
    static inline bool is_valid(enum_type value) {
      return (base_type(value) >= first_item_value && base_type(value) <= last_item_value);
    }
    static const enum_type first_item = (enum_type)first_item_value;
    static const enum_type last_item = (enum_type)last_item_value;
    static const char *const key_table[113];
    struct attr_entry_type {
      const char* caption;
      bool military;
      df::profession parent;
      bool can_assign_labor;
      int8_t color;
      bool moodable;
      static struct_identity _identity;
    };
    static const attr_entry_type attr_table[113+1];
    static const attr_entry_type &attrs(enum_type value);
  };
}
#endif
