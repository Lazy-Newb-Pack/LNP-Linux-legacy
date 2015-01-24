/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_TIMED_EVENT_TYPE_H
#define DF_TIMED_EVENT_TYPE_H
namespace df {
  namespace enums {
    namespace timed_event_type {
      enum timed_event_type : int16_t {
        Caravan,
        Migrants,
        Diplomat,
        /**
         * unused, does nothing
         */
        FeatureAttack,
        Megabeast,
        WildlifeCurious,
        WildlifeMischievous,
        WildlifeFlier,
        NightCreature
      };
    }
  }
  using enums::timed_event_type::timed_event_type;
  template<> struct DFHACK_EXPORT identity_traits<timed_event_type> {
    static enum_identity identity;
    static enum_identity *get() { return &identity; }
  };
  template<> struct DFHACK_EXPORT enum_traits<timed_event_type> {
    typedef int16_t base_type;
    typedef timed_event_type enum_type;
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
