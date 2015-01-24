/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_SITE_DISPUTE_TYPE_H
#define DF_SITE_DISPUTE_TYPE_H
namespace df {
  namespace enums {
    namespace site_dispute_type {
      enum site_dispute_type : int32_t {
        Territory,
        WaterRights,
        GrazingRights,
        FishingRights,
        RightsOfWay,
        LivestockOwnership
      };
    }
  }
  using enums::site_dispute_type::site_dispute_type;
  template<> struct DFHACK_EXPORT identity_traits<site_dispute_type> {
    static enum_identity identity;
    static enum_identity *get() { return &identity; }
  };
  template<> struct DFHACK_EXPORT enum_traits<site_dispute_type> {
    typedef int32_t base_type;
    typedef site_dispute_type enum_type;
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
