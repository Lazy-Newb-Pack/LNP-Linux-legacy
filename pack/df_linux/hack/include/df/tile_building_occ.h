/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_TILE_BUILDING_OCC_H
#define DF_TILE_BUILDING_OCC_H
namespace df {
  namespace enums {
    namespace tile_building_occ {
      enum tile_building_occ : uint32_t {
        /**
         * no building
         */
        None,
        /**
         * nothing built yet
         */
        Planned,
        Passable,
        /**
         * workshop tile; ~fortification
         */
        Obstacle,
        Well,
        /**
         * depot; lowered bridge
         */
        Floored,
        Impassable,
        /**
         * doors, grates, etc
         */
        Dynamic
      };
    }
  }
  using enums::tile_building_occ::tile_building_occ;
  template<> struct DFHACK_EXPORT identity_traits<tile_building_occ> {
    static enum_identity identity;
    static enum_identity *get() { return &identity; }
  };
  template<> struct DFHACK_EXPORT enum_traits<tile_building_occ> {
    typedef uint32_t base_type;
    typedef tile_building_occ enum_type;
    static const base_type first_item_value = 0;
    static const base_type last_item_value = 7;
    static inline bool is_valid(enum_type value) {
      return (base_type(value) >= first_item_value && base_type(value) <= last_item_value);
    }
    static const enum_type first_item = (enum_type)first_item_value;
    static const enum_type last_item = (enum_type)last_item_value;
    static const char *const key_table[8];
  };
}
#endif
