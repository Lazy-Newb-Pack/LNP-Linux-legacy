/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_ENTITY_POSITION_FLAGS_H
#define DF_ENTITY_POSITION_FLAGS_H
namespace df {
  namespace enums {
    namespace entity_position_flags {
      enum entity_position_flags : int32_t {
        IS_LAW_MAKER,
        ELECTED,
        DUTY_BOUND,
        MILITARY_SCREEN_ONLY,
        GENDER_MALE,
        GENDER_FEMALE,
        SUCCESSION_BY_HEIR,
        HAS_RESPONSIBILITIES,
        FLASHES,
        BRAG_ON_KILL,
        CHAT_WORTHY,
        DO_NOT_CULL,
        KILL_QUEST,
        IS_LEADER,
        IS_DIPLOMAT,
        EXPORTED_IN_LEGENDS,
        DETERMINES_COIN_DESIGN,
        ACCOUNT_EXEMPT,
        unk_12,
        unk_13,
        COLOR,
        RULES_FROM_LOCATION,
        MENIAL_WORK_EXEMPTION,
        MENIAL_WORK_EXEMPTION_SPOUSE,
        SLEEP_PRETENSION,
        PUNISHMENT_EXEMPTION,
        unk_1a,
        unk_1b,
        QUEST_GIVER
      };
    }
  }
  using enums::entity_position_flags::entity_position_flags;
  template<> struct DFHACK_EXPORT identity_traits<entity_position_flags> {
    static enum_identity identity;
    static enum_identity *get() { return &identity; }
  };
  template<> struct DFHACK_EXPORT enum_traits<entity_position_flags> {
    typedef int32_t base_type;
    typedef entity_position_flags enum_type;
    static const base_type first_item_value = 0;
    static const base_type last_item_value = 28;
    static inline bool is_valid(enum_type value) {
      return (base_type(value) >= first_item_value && base_type(value) <= last_item_value);
    }
    static const enum_type first_item = (enum_type)first_item_value;
    static const enum_type last_item = (enum_type)last_item_value;
    static const char *const key_table[29];
  };
}
#endif
