/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_ENTITY_POSITION_RAW_FLAGS_H
#define DF_ENTITY_POSITION_RAW_FLAGS_H
namespace df {
  namespace enums {
    namespace entity_position_raw_flags {
      enum entity_position_raw_flags : int32_t {
        SITE,
        ELECTED,
        CONQUERED_SITE,
        MILITARY_SCREEN_ONLY,
        GENDER_MALE,
        GENDER_FEMALE,
        SUCCESSION_BY_HEIR,
        EXPORTED_IN_LEGENDS,
        FLASHES,
        BRAG_ON_KILL,
        CHAT_WORTHY,
        DO_NOT_CULL,
        KILL_QUEST,
        DETERMINES_COIN_DESIGN,
        ACCOUNT_EXEMPT,
        DUTY_BOUND,
        COLOR,
        RULES_FROM_LOCATION,
        MENIAL_WORK_EXEMPTION,
        MENIAL_WORK_EXEMPTION_SPOUSE,
        SLEEP_PRETENSION,
        PUNISHMENT_EXEMPTION,
        QUEST_GIVER,
        SPECIAL_BURIAL,
        REQUIRES_MARKET
      };
    }
  }
  using enums::entity_position_raw_flags::entity_position_raw_flags;
  template<> struct DFHACK_EXPORT identity_traits<entity_position_raw_flags> {
    static enum_identity identity;
    static enum_identity *get() { return &identity; }
  };
  template<> struct DFHACK_EXPORT enum_traits<entity_position_raw_flags> {
    typedef int32_t base_type;
    typedef entity_position_raw_flags enum_type;
    static const base_type first_item_value = 0;
    static const base_type last_item_value = 24;
    static inline bool is_valid(enum_type value) {
      return (base_type(value) >= first_item_value && base_type(value) <= last_item_value);
    }
    static const enum_type first_item = (enum_type)first_item_value;
    static const enum_type last_item = (enum_type)last_item_value;
    static const char *const key_table[25];
  };
}
#endif
