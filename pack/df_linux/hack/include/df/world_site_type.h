/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_WORLD_SITE_TYPE_H
#define DF_WORLD_SITE_TYPE_H
namespace df {
  namespace enums {
    namespace world_site_type {
      enum world_site_type : int16_t {
        PlayerFortress,
        DarkFortress,
        Cave,
        MountainHalls,
        ForestRetreat,
        Town,
        ImportantLocation,
        LairShrine,
        Fortress,
        Camp,
        Monument
      };
    }
  }
  using enums::world_site_type::world_site_type;
  template<> struct DFHACK_EXPORT identity_traits<world_site_type> {
    static enum_identity identity;
    static enum_identity *get() { return &identity; }
  };
  template<> struct DFHACK_EXPORT enum_traits<world_site_type> {
    typedef int16_t base_type;
    typedef world_site_type enum_type;
    static const base_type first_item_value = 0;
    static const base_type last_item_value = 10;
    static inline bool is_valid(enum_type value) {
      return (base_type(value) >= first_item_value && base_type(value) <= last_item_value);
    }
    static const enum_type first_item = (enum_type)first_item_value;
    static const enum_type last_item = (enum_type)last_item_value;
    static const char *const key_table[11];
  };
}
#endif
