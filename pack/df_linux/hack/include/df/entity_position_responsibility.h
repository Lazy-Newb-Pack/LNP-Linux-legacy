/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_ENTITY_POSITION_RESPONSIBILITY_H
#define DF_ENTITY_POSITION_RESPONSIBILITY_H
namespace df {
  namespace enums {
    namespace entity_position_responsibility {
      enum entity_position_responsibility : int32_t {
        LAW_MAKING,
        LAW_ENFORCEMENT,
        RECEIVE_DIPLOMATS,
        MEET_WORKERS,
        MANAGE_PRODUCTION,
        TRADE,
        ACCOUNTING,
        ESTABLISH_COLONY_TRADE_AGREEMENTS,
        MAKE_INTRODUCTIONS,
        MAKE_PEACE_AGREEMENTS,
        MAKE_TOPIC_AGREEMENTS,
        COLLECT_TAXES,
        ESCORT_TAX_COLLECTOR,
        EXECUTIONS,
        TAME_EXOTICS,
        RELIGION,
        ATTACK_ENEMIES,
        PATROL_TERRITORY,
        MILITARY_GOALS,
        MILITARY_STRATEGY,
        UPGRADE_SQUAD_EQUIPMENT,
        EQUIPMENT_MANIFESTS,
        SORT_AMMUNITION,
        BUILD_MORALE,
        HEALTH_MANAGEMENT
      };
    }
  }
  using enums::entity_position_responsibility::entity_position_responsibility;
  template<> struct DFHACK_EXPORT identity_traits<entity_position_responsibility> {
    static enum_identity identity;
    static enum_identity *get() { return &identity; }
  };
  template<> struct DFHACK_EXPORT enum_traits<entity_position_responsibility> {
    typedef int32_t base_type;
    typedef entity_position_responsibility enum_type;
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
