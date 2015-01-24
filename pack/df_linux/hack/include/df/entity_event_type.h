/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_ENTITY_EVENT_TYPE_H
#define DF_ENTITY_EVENT_TYPE_H
namespace df {
  namespace enums {
    namespace entity_event_type {
      enum entity_event_type : int32_t {
        invasion,
        abduction,
        incident,
        occupation,
        beast,
        group,
        harass,
        flee,
        abandon,
        reclaimed,
        founded,
        reclaiming,
        founding,
        leave,
        insurrection,
        insurrection_end,
        succession,
        claim,
        accept_tribute_offer,
        refuse_tribute_offer,
        accept_tribute_demand,
        refuse_tribute_demand,
        accept_peace_offer,
        refuse_peace_offer,
        cease_tribute_offer
      };
    }
  }
  using enums::entity_event_type::entity_event_type;
  template<> struct DFHACK_EXPORT identity_traits<entity_event_type> {
    static enum_identity identity;
    static enum_identity *get() { return &identity; }
  };
  template<> struct DFHACK_EXPORT enum_traits<entity_event_type> {
    typedef int32_t base_type;
    typedef entity_event_type enum_type;
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
