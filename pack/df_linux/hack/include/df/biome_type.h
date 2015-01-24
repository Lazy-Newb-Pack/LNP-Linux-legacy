/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_BIOME_TYPE_H
#define DF_BIOME_TYPE_H
namespace df {
  namespace enums {
    namespace biome_type {
      enum biome_type : int32_t {
        MOUNTAIN,
        GLACIER,
        TUNDRA,
        SWAMP_TEMPERATE_FRESHWATER,
        SWAMP_TEMPERATE_SALTWATER,
        MARSH_TEMPERATE_FRESHWATER,
        MARSH_TEMPERATE_SALTWATER,
        SWAMP_TROPICAL_FRESHWATER,
        SWAMP_TROPICAL_SALTWATER,
        SWAMP_MANGROVE,
        MARSH_TROPICAL_FRESHWATER,
        MARSH_TROPICAL_SALTWATER,
        FOREST_TAIGA,
        FOREST_TEMPERATE_CONIFER,
        FOREST_TEMPERATE_BROADLEAF,
        FOREST_TROPICAL_CONIFER,
        FOREST_TROPICAL_DRY_BROADLEAF,
        FOREST_TROPICAL_MOIST_BROADLEAF,
        GRASSLAND_TEMPERATE,
        SAVANNA_TEMPERATE,
        SHRUBLAND_TEMPERATE,
        GRASSLAND_TROPICAL,
        SAVANNA_TROPICAL,
        SHRUBLAND_TROPICAL,
        DESERT_BADLAND,
        DESERT_ROCK,
        DESERT_SAND,
        OCEAN_TROPICAL,
        OCEAN_TEMPERATE,
        OCEAN_ARCTIC,
        POOL_TEMPERATE_FRESHWATER,
        POOL_TEMPERATE_BRACKISHWATER,
        POOL_TEMPERATE_SALTWATER,
        POOL_TROPICAL_FRESHWATER,
        POOL_TROPICAL_BRACKISHWATER,
        POOL_TROPICAL_SALTWATER,
        LAKE_TEMPERATE_FRESHWATER,
        LAKE_TEMPERATE_BRACKISHWATER,
        LAKE_TEMPERATE_SALTWATER,
        LAKE_TROPICAL_FRESHWATER,
        LAKE_TROPICAL_BRACKISHWATER,
        LAKE_TROPICAL_SALTWATER,
        RIVER_TEMPERATE_FRESHWATER,
        RIVER_TEMPERATE_BRACKISHWATER,
        RIVER_TEMPERATE_SALTWATER,
        RIVER_TROPICAL_FRESHWATER,
        RIVER_TROPICAL_BRACKISHWATER,
        RIVER_TROPICAL_SALTWATER,
        SUBTERRANEAN_WATER,
        SUBTERRANEAN_CHASM,
        SUBTERRANEAN_LAVA
      };
    }
  }
  using enums::biome_type::biome_type;
  template<> struct DFHACK_EXPORT identity_traits<biome_type> {
    static enum_identity identity;
    static enum_identity *get() { return &identity; }
  };
  template<> struct DFHACK_EXPORT enum_traits<biome_type> {
    typedef int32_t base_type;
    typedef biome_type enum_type;
    static const base_type first_item_value = 0;
    static const base_type last_item_value = 50;
    static inline bool is_valid(enum_type value) {
      return (base_type(value) >= first_item_value && base_type(value) <= last_item_value);
    }
    static const enum_type first_item = (enum_type)first_item_value;
    static const enum_type last_item = (enum_type)last_item_value;
    static const char *const key_table[51];
  };
}
#endif
