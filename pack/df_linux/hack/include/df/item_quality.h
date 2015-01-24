/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_ITEM_QUALITY_H
#define DF_ITEM_QUALITY_H
namespace df {
  namespace enums {
    namespace item_quality {
      enum item_quality : int16_t {
        Ordinary,
        WellCrafted,
        FinelyCrafted,
        Superior,
        Exceptional,
        Masterful,
        Artifact
      };
    }
  }
  using enums::item_quality::item_quality;
  template<> struct DFHACK_EXPORT identity_traits<item_quality> {
    static enum_identity identity;
    static enum_identity *get() { return &identity; }
  };
  template<> struct DFHACK_EXPORT enum_traits<item_quality> {
    typedef int16_t base_type;
    typedef item_quality enum_type;
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
