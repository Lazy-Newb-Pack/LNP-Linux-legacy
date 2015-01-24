/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_MEETING_TOPIC_H
#define DF_MEETING_TOPIC_H
namespace df {
  namespace enums {
    namespace meeting_topic {
      enum meeting_topic : int16_t {
        DiscussCurrent,
        RequestPeace,
        TreeQuota,
        BecomeLandHolder,
        PromoteLandHolder,
        ExportAgreement,
        ImportAgreement,
        PleasantPlace,
        WorldStatus
      };
    }
  }
  using enums::meeting_topic::meeting_topic;
  template<> struct DFHACK_EXPORT identity_traits<meeting_topic> {
    static enum_identity identity;
    static enum_identity *get() { return &identity; }
  };
  template<> struct DFHACK_EXPORT enum_traits<meeting_topic> {
    typedef int16_t base_type;
    typedef meeting_topic enum_type;
    static const base_type first_item_value = 0;
    static const base_type last_item_value = 8;
    static inline bool is_valid(enum_type value) {
      return (base_type(value) >= first_item_value && base_type(value) <= last_item_value);
    }
    static const enum_type first_item = (enum_type)first_item_value;
    static const enum_type last_item = (enum_type)last_item_value;
    static const char *const key_table[9];
  };
}
#endif
