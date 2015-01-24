/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_ETHIC_RESPONSE_H
#define DF_ETHIC_RESPONSE_H
namespace df {
  namespace enums {
    namespace ethic_response {
      enum ethic_response : int16_t {
        NOT_APPLICABLE,
        ACCEPTABLE,
        PERSONAL_MATTER,
        JUSTIFIED_IF_NO_REPERCUSSIONS,
        JUSTIFIED_IF_GOOD_REASON,
        JUSTIFIED_IF_EXTREME_REASON,
        JUSTIFIED_IF_SELF_DEFENSE,
        ONLY_IF_SANCTIONED,
        MISGUIDED,
        SHUN,
        APPALLING,
        PUNISH_REPRIMAND,
        PUNISH_SERIOUS,
        PUNISH_EXILE,
        PUNISH_CAPITAL,
        UNTHINKABLE,
        REQUIRED
      };
    }
  }
  using enums::ethic_response::ethic_response;
  template<> struct DFHACK_EXPORT identity_traits<ethic_response> {
    static enum_identity identity;
    static enum_identity *get() { return &identity; }
  };
  template<> struct DFHACK_EXPORT enum_traits<ethic_response> {
    typedef int16_t base_type;
    typedef ethic_response enum_type;
    static const base_type first_item_value = 0;
    static const base_type last_item_value = 16;
    static inline bool is_valid(enum_type value) {
      return (base_type(value) >= first_item_value && base_type(value) <= last_item_value);
    }
    static const enum_type first_item = (enum_type)first_item_value;
    static const enum_type last_item = (enum_type)last_item_value;
    static const char *const key_table[17];
  };
}
#endif
