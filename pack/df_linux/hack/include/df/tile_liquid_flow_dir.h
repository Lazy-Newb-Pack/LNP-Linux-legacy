/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_TILE_LIQUID_FLOW_DIR_H
#define DF_TILE_LIQUID_FLOW_DIR_H
namespace df {
  namespace enums {
    namespace tile_liquid_flow_dir {
      enum tile_liquid_flow_dir : uint16_t {
        none,
        south,
        east,
        northeast,
        west,
        northwest,
        southeast,
        southwest,
        inv_8,
        inv_9,
        north,
        inv_b,
        inv_c,
        inv_d,
        inv_e,
        inv_f
      };
    }
  }
  using enums::tile_liquid_flow_dir::tile_liquid_flow_dir;
  template<> struct DFHACK_EXPORT identity_traits<tile_liquid_flow_dir> {
    static enum_identity identity;
    static enum_identity *get() { return &identity; }
  };
  template<> struct DFHACK_EXPORT enum_traits<tile_liquid_flow_dir> {
    typedef uint16_t base_type;
    typedef tile_liquid_flow_dir enum_type;
    static const base_type first_item_value = 0;
    static const base_type last_item_value = 15;
    static inline bool is_valid(enum_type value) {
      return (base_type(value) >= first_item_value && base_type(value) <= last_item_value);
    }
    static const enum_type first_item = (enum_type)first_item_value;
    static const enum_type last_item = (enum_type)last_item_value;
    static const char *const key_table[16];
  };
}
#endif
