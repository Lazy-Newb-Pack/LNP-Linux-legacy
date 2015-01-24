/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_HISTORICAL_ENTITY_TYPE_H
#define DF_HISTORICAL_ENTITY_TYPE_H
namespace df {
  namespace enums {
    namespace historical_entity_type {
      enum historical_entity_type : int32_t {
        Civilization,
        SiteGovernment,
        VesselCrew,
        MigratingGroup,
        NomadicGroup,
        Religion,
        MilitaryUnit,
        Outcast
      };
    }
  }
  using enums::historical_entity_type::historical_entity_type;
  template<> struct DFHACK_EXPORT identity_traits<historical_entity_type> {
    static enum_identity identity;
    static enum_identity *get() { return &identity; }
  };
  template<> struct DFHACK_EXPORT enum_traits<historical_entity_type> {
    typedef int32_t base_type;
    typedef historical_entity_type enum_type;
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
