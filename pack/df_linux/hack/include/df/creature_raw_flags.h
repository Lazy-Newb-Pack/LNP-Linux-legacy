/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_CREATURE_RAW_FLAGS_H
#define DF_CREATURE_RAW_FLAGS_H
namespace df {
  namespace enums {
    namespace creature_raw_flags {
      enum creature_raw_flags : int32_t {
        unk_wagon,
        EQUIPMENT_WAGON,
        MUNDANE,
        VERMIN_EATER,
        VERMIN_GROUNDER,
        VERMIN_ROTTER,
        VERMIN_SOIL,
        VERMIN_SOIL_COLONY,
        LARGE_ROAMING,
        VERMIN_FISH,
        LOOSE_CLUSTERS,
        FANCIFUL,
        BIOME_MOUNTAIN,
        BIOME_GLACIER,
        BIOME_TUNDRA,
        BIOME_SWAMP_TEMPERATE_FRESHWATER,
        BIOME_SWAMP_TEMPERATE_SALTWATER,
        BIOME_MARSH_TEMPERATE_FRESHWATER,
        BIOME_MARSH_TEMPERATE_SALTWATER,
        BIOME_SWAMP_TROPICAL_FRESHWATER,
        BIOME_SWAMP_TROPICAL_SALTWATER,
        BIOME_SWAMP_MANGROVE,
        BIOME_MARSH_TROPICAL_FRESHWATER,
        BIOME_MARSH_TROPICAL_SALTWATER,
        BIOME_FOREST_TAIGA,
        BIOME_FOREST_TEMPERATE_CONIFER,
        BIOME_FOREST_TEMPERATE_BROADLEAF,
        BIOME_FOREST_TROPICAL_CONIFER,
        BIOME_FOREST_TROPICAL_DRY_BROADLEAF,
        BIOME_FOREST_TROPICAL_MOIST_BROADLEAF,
        BIOME_GRASSLAND_TEMPERATE,
        BIOME_SAVANNA_TEMPERATE,
        BIOME_SHRUBLAND_TEMPERATE,
        BIOME_GRASSLAND_TROPICAL,
        BIOME_SAVANNA_TROPICAL,
        BIOME_SHRUBLAND_TROPICAL,
        BIOME_DESERT_BADLAND,
        BIOME_DESERT_ROCK,
        BIOME_DESERT_SAND,
        BIOME_OCEAN_TROPICAL,
        BIOME_OCEAN_TEMPERATE,
        BIOME_OCEAN_ARCTIC,
        BIOME_SUBTERRANEAN_WATER,
        BIOME_SUBTERRANEAN_CHASM,
        BIOME_SUBTERRANEAN_LAVA,
        BIOME_POOL_TEMPERATE_FRESHWATER,
        BIOME_POOL_TEMPERATE_BRACKISHWATER,
        BIOME_POOL_TEMPERATE_SALTWATER,
        BIOME_POOL_TROPICAL_FRESHWATER,
        BIOME_POOL_TROPICAL_BRACKISHWATER,
        BIOME_POOL_TROPICAL_SALTWATER,
        BIOME_LAKE_TEMPERATE_FRESHWATER,
        BIOME_LAKE_TEMPERATE_BRACKISHWATER,
        BIOME_LAKE_TEMPERATE_SALTWATER,
        BIOME_LAKE_TROPICAL_FRESHWATER,
        BIOME_LAKE_TROPICAL_BRACKISHWATER,
        BIOME_LAKE_TROPICAL_SALTWATER,
        BIOME_RIVER_TEMPERATE_FRESHWATER,
        BIOME_RIVER_TEMPERATE_BRACKISHWATER,
        BIOME_RIVER_TEMPERATE_SALTWATER,
        BIOME_RIVER_TROPICAL_FRESHWATER,
        BIOME_RIVER_TROPICAL_BRACKISHWATER,
        BIOME_RIVER_TROPICAL_SALTWATER,
        GOOD,
        EVIL,
        SAVAGE,
        NOT_ASEXUAL,
        /**
         * capable of breeding
         */
        unk_43,
        unk_44,
        unk_45,
        any_vermin,
        CASTE_CAN_LEARN,
        CASTE_VERMIN_HATEABLE,
        unk_49,
        CASTE_LARGE_PREDATOR,
        CASTE_CURIOUSBEAST,
        CASTE_BENIGN,
        CASTE_NATURAL,
        CASTE_MEGABEAST,
        CASTE_SEMIMEGABEAST,
        CASTE_POWER,
        CASTE_VERMIN_MICRO,
        CASTE_NOT_FIREIMMUNE,
        CASTE_MUST_BREATHE_AIR,
        CASTE_MUST_BREATHE_WATER,
        unk_55,
        CASTE_SWIMS_LEARNED,
        CASTE_COMMON_DOMESTIC,
        CASTE_UTTERANCES,
        CASTE_CAN_SPEAK,
        CASTE_FEATURE_BEAST,
        GENERATED,
        CASTE_TITAN,
        CASTE_UNIQUE_DEMON,
        DOES_NOT_EXIST,
        CASTE_unk_9e,
        CASTE_MISCHIEVOUS,
        CASTE_FLIER,
        CASTE_DEMON,
        CASTE_NIGHT_CREATURE_ANY,
        CASTE_NIGHT_CREATURE_HUNTER,
        CASTE_NIGHT_CREATURE_BOGEYMAN,
        CASTE_CARNIVORE,
        ARTIFICIAL_HIVEABLE,
        UBIQUITOUS,
        unk_69,
        CASTE_unk_2b,
        CASTE_BLOOD,
        CASTE_GRAZER,
        CASTE_unk_31,
        unk_6e,
        unk_6f
      };
    }
  }
  using enums::creature_raw_flags::creature_raw_flags;
  template<> struct DFHACK_EXPORT identity_traits<creature_raw_flags> {
    static enum_identity identity;
    static enum_identity *get() { return &identity; }
  };
  template<> struct DFHACK_EXPORT enum_traits<creature_raw_flags> {
    typedef int32_t base_type;
    typedef creature_raw_flags enum_type;
    static const base_type first_item_value = 0;
    static const base_type last_item_value = 111;
    static inline bool is_valid(enum_type value) {
      return (base_type(value) >= first_item_value && base_type(value) <= last_item_value);
    }
    static const enum_type first_item = (enum_type)first_item_value;
    static const enum_type last_item = (enum_type)last_item_value;
    static const char *const key_table[112];
  };
}
#endif
