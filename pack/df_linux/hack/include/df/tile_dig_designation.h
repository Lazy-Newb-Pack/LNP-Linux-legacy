/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_TILE_DIG_DESIGNATION_H
#define DF_TILE_DIG_DESIGNATION_H
namespace df {
  namespace enums {
    namespace tile_dig_designation {
      enum tile_dig_designation : uint32_t {
        /**
         * no designation
         */
        No,
        /**
         * dig walls, remove stairs and ramps, gather plants, fell trees
         */
        Default,
        UpDownStair,
        Channel,
        Ramp,
        DownStair,
        UpStair
      };
    }
  }
  using enums::tile_dig_designation::tile_dig_designation;
  template<> struct DFHACK_EXPORT identity_traits<tile_dig_designation> {
    static enum_identity identity;
    static enum_identity *get() { return &identity; }
  };
  template<> struct DFHACK_EXPORT enum_traits<tile_dig_designation> {
    typedef uint32_t base_type;
    typedef tile_dig_designation enum_type;
    static const base_type first_item_value = 0;
    static const base_type last_item_value = 6;
    static inline bool is_valid(enum_type value) {
      return (base_type(value) >= first_item_value && base_type(value) <= last_item_value);
    }
    static const enum_type first_item = (enum_type)first_item_value;
    static const enum_type last_item = (enum_type)last_item_value;
    static const char *const key_table[7];
  };
}
#endif
