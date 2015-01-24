/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_HISTORY_EVENT_COLLECTION_TYPE_H
#define DF_HISTORY_EVENT_COLLECTION_TYPE_H
namespace df {
  namespace enums {
    namespace history_event_collection_type {
      enum history_event_collection_type : int32_t {
        WAR,
        BATTLE,
        DUEL,
        SITE_CONQUERED,
        ABDUCTION,
        THEFT,
        BEAST_ATTACK,
        JOURNEY,
        INSURRECTION
      };
    }
  }
  using enums::history_event_collection_type::history_event_collection_type;
  template<> struct DFHACK_EXPORT identity_traits<history_event_collection_type> {
    static enum_identity identity;
    static enum_identity *get() { return &identity; }
  };
  template<> struct DFHACK_EXPORT enum_traits<history_event_collection_type> {
    typedef int32_t base_type;
    typedef history_event_collection_type enum_type;
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
