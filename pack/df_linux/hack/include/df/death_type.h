/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_DEATH_TYPE_H
#define DF_DEATH_TYPE_H
namespace df {
  namespace enums {
    namespace death_type {
      enum death_type : int32_t {
        OLD_AGE,
        HUNGER,
        THIRST,
        SHOT,
        BLEED,
        DROWN,
        SUFFOCATE,
        STRUCK_DOWN,
        /**
         * stuck wagons
         */
        SCUTTLE,
        COLLISION,
        /**
         * does not happen anymore?
         */
        MAGMA,
        /**
         * does not happen anymore?
         */
        MAGMA_MIST,
        DRAGONFIRE,
        FIRE,
        /**
         * does not happen anymore?
         */
        SCALD,
        CAVEIN,
        DRAWBRIDGE,
        /**
         * does not happen anymore?
         */
        FALLING_ROCKS,
        CHASM,
        CAGE,
        MURDER,
        TRAP,
        /**
         * bogeyman
         */
        VANISH,
        /**
         * Give in to starvation as adventurer
         */
        QUIT,
        ABANDON,
        HEAT,
        COLD,
        SPIKE,
        ENCASE_LAVA,
        ENCASE_MAGMA,
        ENCASE_ICE,
        /**
         * execution during worldgen
         */
        BEHEAD,
        /**
         * execution during worldgen
         */
        CRUCIFY,
        /**
         * execution during worldgen
         */
        BURY_ALIVE,
        /**
         * execution during worldgen
         */
        DROWN_ALT,
        /**
         * execution during worldgen
         */
        BURN_ALIVE,
        /**
         * execution during worldgen
         */
        FEED_TO_BEASTS,
        /**
         * execution during worldgen
         */
        HACK_TO_PIECES,
        /**
         * execution during worldgen
         */
        LEAVE_OUT_IN_AIR,
        /**
         * material state change
         */
        BOIL,
        /**
         * material state change
         */
        MELT,
        /**
         * material state change
         */
        CONDENSE,
        /**
         * material state change
         */
        SOLIDIFY,
        INFECTION,
        /**
         * put to rest
         */
        MEMORIALIZE,
        SCARE,
        /**
         * died in the dark
         */
        DARKNESS,
        /**
         * used in 0.31 for undead
         */
        COLLAPSE,
        DRAIN_BLOOD,
        SLAUGHTER,
        VEHICLE,
        FALLING_OBJECT
      };
    }
  }
  using enums::death_type::death_type;
  template<> struct DFHACK_EXPORT identity_traits<death_type> {
    static enum_identity identity;
    static enum_identity *get() { return &identity; }
  };
  template<> struct DFHACK_EXPORT enum_traits<death_type> {
    typedef int32_t base_type;
    typedef death_type enum_type;
    static const base_type first_item_value = 0;
    static const base_type last_item_value = 51;
    static inline bool is_valid(enum_type value) {
      return (base_type(value) >= first_item_value && base_type(value) <= last_item_value);
    }
    static const enum_type first_item = (enum_type)first_item_value;
    static const enum_type last_item = (enum_type)last_item_value;
    static const char *const key_table[52];
  };
}
#endif
