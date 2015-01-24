/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_TILETYPE_MATERIAL_H
#define DF_TILETYPE_MATERIAL_H
namespace df {
  namespace enums {
    namespace tiletype_material {
      /**
       * Tile material (not in DF)
       */
      enum tiletype_material : int32_t {
        NONE = -1,
        AIR,
        SOIL,
        STONE,
        FEATURE,
        LAVA_STONE,
        MINERAL,
        FROZEN_LIQUID,
        CONSTRUCTION,
        GRASS_LIGHT,
        GRASS_DARK,
        GRASS_DRY,
        GRASS_DEAD,
        PLANT,
        HFS,
        CAMPFIRE,
        FIRE,
        ASHES,
        MAGMA,
        DRIFTWOOD,
        POOL,
        BROOK,
        RIVER,
        ROOT,
        TREE,
        MUSHROOM,
        UNDERWORLD_GATE
      };
    }
  }
  using enums::tiletype_material::tiletype_material;
  template<> struct DFHACK_EXPORT identity_traits<tiletype_material> {
    static enum_identity identity;
    static enum_identity *get() { return &identity; }
  };
  template<> struct DFHACK_EXPORT enum_traits<tiletype_material> {
    typedef int32_t base_type;
    typedef tiletype_material enum_type;
    static const base_type first_item_value = -1;
    static const base_type last_item_value = 25;
    static inline bool is_valid(enum_type value) {
      return (base_type(value) >= first_item_value && base_type(value) <= last_item_value);
    }
    static const enum_type first_item = (enum_type)first_item_value;
    static const enum_type last_item = (enum_type)last_item_value;
    static const char *const key_table[27];
    struct attr_entry_type {
      const char* caption;
      static struct_identity _identity;
    };
    static const attr_entry_type attr_table[27+1];
    static const attr_entry_type &attrs(enum_type value);
  };
}
#endif
