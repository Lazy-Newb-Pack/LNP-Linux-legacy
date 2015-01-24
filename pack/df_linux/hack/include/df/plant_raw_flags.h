/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_PLANT_RAW_FLAGS_H
#define DF_PLANT_RAW_FLAGS_H
namespace df {
  namespace enums {
    namespace plant_raw_flags {
      enum plant_raw_flags : int32_t {
        SPRING,
        SUMMER,
        AUTUMN,
        WINTER,
        anon_1,
        SEED,
        TREE_HAS_MUSHROOM_CAP,
        DRINK,
        EXTRACT_BARREL,
        EXTRACT_VIAL,
        EXTRACT_STILL_VIAL,
        GENERATED,
        THREAD,
        MILL,
        anon_2,
        anon_3,
        anon_4,
        anon_5,
        anon_6,
        anon_7,
        WET,
        DRY,
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
        BIOME_POOL_TEMPERATE_FRESHWATER,
        BIOME_SUBTERRANEAN_WATER,
        BIOME_SUBTERRANEAN_CHASM,
        BIOME_SUBTERRANEAN_LAVA,
        GOOD,
        EVIL,
        SAVAGE,
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
        TWIGS_SIDE_BRANCHES,
        SAPLING,
        TREE,
        GRASS,
        TWIGS_ABOVE_BRANCHES,
        TWIGS_BELOW_BRANCHES,
        TWIGS_SIDE_HEAVY_BRANCHES,
        TWIGS_ABOVE_HEAVY_BRANCHES,
        TWIGS_BELOW_HEAVY_BRANCHES,
        TWIGS_SIDE_TRUNK,
        TWIGS_ABOVE_TRUNK,
        TWIGS_BELOW_TRUNK
      };
    }
  }
  using enums::plant_raw_flags::plant_raw_flags;
  template<> struct DFHACK_EXPORT identity_traits<plant_raw_flags> {
    static enum_identity identity;
    static enum_identity *get() { return &identity; }
  };
  template<> struct DFHACK_EXPORT enum_traits<plant_raw_flags> {
    typedef int32_t base_type;
    typedef plant_raw_flags enum_type;
    static const base_type first_item_value = 0;
    static const base_type last_item_value = 87;
    static inline bool is_valid(enum_type value) {
      return (base_type(value) >= first_item_value && base_type(value) <= last_item_value);
    }
    static const enum_type first_item = (enum_type)first_item_value;
    static const enum_type last_item = (enum_type)last_item_value;
    static const char *const key_table[88];
  };
}
#endif
