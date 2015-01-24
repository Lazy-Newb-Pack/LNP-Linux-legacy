/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_TILE_TRAFFIC_H
#define DF_TILE_TRAFFIC_H
namespace df {
  namespace enums {
    namespace tile_traffic {
      enum tile_traffic : uint32_t {
        Normal,
        Low,
        High,
        Restricted
      };
    }
  }
  using enums::tile_traffic::tile_traffic;
  template<> struct DFHACK_EXPORT identity_traits<tile_traffic> {
    static enum_identity identity;
    static enum_identity *get() { return &identity; }
  };
  template<> struct DFHACK_EXPORT enum_traits<tile_traffic> {
    typedef uint32_t base_type;
    typedef tile_traffic enum_type;
    static const base_type first_item_value = 0;
    static const base_type last_item_value = 3;
    static inline bool is_valid(enum_type value) {
      return (base_type(value) >= first_item_value && base_type(value) <= last_item_value);
    }
    static const enum_type first_item = (enum_type)first_item_value;
    static const enum_type last_item = (enum_type)last_item_value;
    static const char *const key_table[4];
  };
}
#endif
