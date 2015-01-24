/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_ART_FACET_TYPE_H
#define DF_ART_FACET_TYPE_H
namespace df {
  namespace enums {
    namespace art_facet_type {
      enum art_facet_type : int32_t {
        OWN_RACE,
        FANCIFUL,
        GOOD,
        EVIL
      };
    }
  }
  using enums::art_facet_type::art_facet_type;
  template<> struct DFHACK_EXPORT identity_traits<art_facet_type> {
    static enum_identity identity;
    static enum_identity *get() { return &identity; }
  };
  template<> struct DFHACK_EXPORT enum_traits<art_facet_type> {
    typedef int32_t base_type;
    typedef art_facet_type enum_type;
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
