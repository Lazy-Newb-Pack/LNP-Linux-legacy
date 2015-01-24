/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_HISTORY_EVENT_SIMPLE_BATTLE_SUBTYPE_H
#define DF_HISTORY_EVENT_SIMPLE_BATTLE_SUBTYPE_H
namespace df {
  namespace enums {
    namespace history_event_simple_battle_subtype {
      enum history_event_simple_battle_subtype : int32_t {
        SCUFFLE,
        ATTACK,
        SURPRISE,
        AMBUSH,
        HAPPEN_UPON,
        CORNER,
        CONFRONT,
        LOSE_AFTER_RECEIVE_WOUND,
        LOSE_AFTER_INFLICT_WOUND,
        LOSE_AFTER_EXCHANGE_WOUND
      };
    }
  }
  using enums::history_event_simple_battle_subtype::history_event_simple_battle_subtype;
  template<> struct DFHACK_EXPORT identity_traits<history_event_simple_battle_subtype> {
    static enum_identity identity;
    static enum_identity *get() { return &identity; }
  };
  template<> struct DFHACK_EXPORT enum_traits<history_event_simple_battle_subtype> {
    typedef int32_t base_type;
    typedef history_event_simple_battle_subtype enum_type;
    static const base_type first_item_value = 0;
    static const base_type last_item_value = 9;
    static inline bool is_valid(enum_type value) {
      return (base_type(value) >= first_item_value && base_type(value) <= last_item_value);
    }
    static const enum_type first_item = (enum_type)first_item_value;
    static const enum_type last_item = (enum_type)last_item_value;
    static const char *const key_table[10];
  };
}
#endif
