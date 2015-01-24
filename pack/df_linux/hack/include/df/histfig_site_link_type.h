/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_HISTFIG_SITE_LINK_TYPE_H
#define DF_HISTFIG_SITE_LINK_TYPE_H
namespace df {
  namespace enums {
    namespace histfig_site_link_type {
      enum histfig_site_link_type : int32_t {
        SEAT_OF_POWER,
        HANGOUT,
        HOME_SITE_ABSTRACT_BUILDING,
        HOME_SITE_REALIZATION_BUILDING,
        LAIR,
        HOME_SITE_REALIZATION_SUL
      };
    }
  }
  using enums::histfig_site_link_type::histfig_site_link_type;
  template<> struct DFHACK_EXPORT identity_traits<histfig_site_link_type> {
    static enum_identity identity;
    static enum_identity *get() { return &identity; }
  };
  template<> struct DFHACK_EXPORT enum_traits<histfig_site_link_type> {
    typedef int32_t base_type;
    typedef histfig_site_link_type enum_type;
    static const base_type first_item_value = 0;
    static const base_type last_item_value = 5;
    static inline bool is_valid(enum_type value) {
      return (base_type(value) >= first_item_value && base_type(value) <= last_item_value);
    }
    static const enum_type first_item = (enum_type)first_item_value;
    static const enum_type last_item = (enum_type)last_item_value;
    static const char *const key_table[6];
  };
}
#endif
