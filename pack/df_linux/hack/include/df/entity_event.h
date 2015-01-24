/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_ENTITY_EVENT_H
#define DF_ENTITY_EVENT_H
#ifndef DF_ENTITY_EVENT_TYPE_H
#include "entity_event_type.h"
#endif
namespace df {
  struct DFHACK_EXPORT entity_event {
    union DFHACK_EXPORT T_data {
      struct DFHACK_EXPORT T_invasion {
        int32_t entity_id;
        int32_t site_id;
        int32_t anon_1;
        int32_t anon_2;
      };
      T_invasion invasion;
      struct DFHACK_EXPORT T_abduction {
        int32_t histfig_id;
        int32_t anon_1;
        int32_t anon_2;
        int32_t anon_3;
      };
      T_abduction abduction;
      struct DFHACK_EXPORT T_incident {
        int32_t incident_id;
        int32_t anon_1;
      };
      T_incident incident;
      struct DFHACK_EXPORT T_occupation {
        int32_t site_id;
        int32_t entity_id;
        int32_t anon_1;
        int32_t anon_2;
      };
      T_occupation occupation;
      struct DFHACK_EXPORT T_beast {
        int32_t histfig_id;
        int32_t site_id;
        int32_t region_id;
      };
      T_beast beast;
      struct DFHACK_EXPORT T_group {
        int32_t entity_id;
        int32_t site_id;
      };
      T_group group;
      struct DFHACK_EXPORT T_harass {
        int32_t entity_id;
        int32_t site_id;
        int32_t anon_1;
      };
      T_harass harass;
      struct DFHACK_EXPORT T_flee {
        int32_t entity_id;
        int32_t site_id;
        int32_t anon_1;
        int32_t anon_2;
      };
      T_flee flee;
      struct DFHACK_EXPORT T_abandon {
        int32_t entity_id;
        int32_t site_id;
        int32_t anon_1;
      };
      T_abandon abandon;
      struct DFHACK_EXPORT T_reclaimed {
        int32_t entity_id;
        int32_t site_id;
        int32_t anon_1;
        int32_t anon_2;
      };
      T_reclaimed reclaimed;
      struct DFHACK_EXPORT T_founded {
        int32_t entity_id;
        int32_t site_id;
        int32_t anon_1;
        int32_t anon_2;
      };
      T_founded founded;
      struct DFHACK_EXPORT T_reclaiming {
        int32_t entity_id;
        int32_t site_id;
        int32_t anon_1;
        int32_t anon_2;
      };
      T_reclaiming reclaiming;
      struct DFHACK_EXPORT T_founding {
        int32_t entity_id;
        int32_t region_id;
        int32_t anon_1;
        int32_t anon_2;
      };
      T_founding founding;
      struct DFHACK_EXPORT T_leave {
        int32_t entity_id;
        int32_t site_id;
      };
      T_leave leave;
      struct DFHACK_EXPORT T_insurrection {
        int32_t site_id;
        int32_t entity_id;
      };
      T_insurrection insurrection;
      struct DFHACK_EXPORT T_insurrection_end {
        int32_t site_id;
        int32_t entity_id;
        int32_t result; /*!< 0=overthrow, 1=fail, 2=crushed */
      };
      T_insurrection_end insurrection_end;
      struct DFHACK_EXPORT T_succession {
        int32_t histfig_id;
        int32_t anon_1;
        int32_t entity_id;
        int32_t position_assignment_id;
      };
      T_succession succession;
      struct DFHACK_EXPORT T_claim {
        int32_t entity_id;
        int32_t site_id;
        int32_t anon_1;
      };
      T_claim claim;
      struct DFHACK_EXPORT T_accept_tribute_offer {
        int32_t entity1_id;
        int32_t anon_1;
        int32_t entity2_id;
        int32_t anon_2;
      };
      T_accept_tribute_offer accept_tribute_offer;
      struct DFHACK_EXPORT T_refuse_tribute_offer {
        int32_t entity1_id;
        int32_t anon_1;
        int32_t entity2_id;
        int32_t anon_2;
      };
      T_refuse_tribute_offer refuse_tribute_offer;
      struct DFHACK_EXPORT T_accept_tribute_demand {
        int32_t entity1_id;
        int32_t anon_1;
        int32_t entity2_id;
        int32_t anon_2;
      };
      T_accept_tribute_demand accept_tribute_demand;
      struct DFHACK_EXPORT T_refuse_tribute_demand {
        int32_t entity1_id;
        int32_t anon_1;
        int32_t entity2_id;
        int32_t anon_2;
      };
      T_refuse_tribute_demand refuse_tribute_demand;
      struct DFHACK_EXPORT T_accept_peace_offer {
        int32_t entity1_id;
        int32_t anon_1;
        int32_t entity2_id;
        int32_t anon_2;
      };
      T_accept_peace_offer accept_peace_offer;
      struct DFHACK_EXPORT T_refuse_peace_offer {
        int32_t entity1_id;
        int32_t anon_1;
        int32_t entity2_id;
        int32_t anon_2;
      };
      T_refuse_peace_offer refuse_peace_offer;
      struct DFHACK_EXPORT T_cease_tribute_offer {
        int32_t entity1_id;
        int32_t anon_1;
        int32_t entity2_id;
        int32_t anon_2;
      };
      T_cease_tribute_offer cease_tribute_offer;
    };
    T_data data;
    int32_t year;
    int32_t year_tick;
    int32_t anon_1;
    int32_t anon_2;
    int32_t anon_3;
    df::entity_event_type type;
    static struct_identity _identity;
  public:
    entity_event();
  };
  template<> struct DFHACK_EXPORT identity_traits<entity_event::T_data::T_invasion> {
    static struct_identity identity;
    static struct_identity *get() { return &identity; }
  };
  template<> struct DFHACK_EXPORT identity_traits<entity_event::T_data::T_abduction> {
    static struct_identity identity;
    static struct_identity *get() { return &identity; }
  };
  template<> struct DFHACK_EXPORT identity_traits<entity_event::T_data::T_incident> {
    static struct_identity identity;
    static struct_identity *get() { return &identity; }
  };
  template<> struct DFHACK_EXPORT identity_traits<entity_event::T_data::T_occupation> {
    static struct_identity identity;
    static struct_identity *get() { return &identity; }
  };
  template<> struct DFHACK_EXPORT identity_traits<entity_event::T_data::T_beast> {
    static struct_identity identity;
    static struct_identity *get() { return &identity; }
  };
  template<> struct DFHACK_EXPORT identity_traits<entity_event::T_data::T_group> {
    static struct_identity identity;
    static struct_identity *get() { return &identity; }
  };
  template<> struct DFHACK_EXPORT identity_traits<entity_event::T_data::T_harass> {
    static struct_identity identity;
    static struct_identity *get() { return &identity; }
  };
  template<> struct DFHACK_EXPORT identity_traits<entity_event::T_data::T_flee> {
    static struct_identity identity;
    static struct_identity *get() { return &identity; }
  };
  template<> struct DFHACK_EXPORT identity_traits<entity_event::T_data::T_abandon> {
    static struct_identity identity;
    static struct_identity *get() { return &identity; }
  };
  template<> struct DFHACK_EXPORT identity_traits<entity_event::T_data::T_reclaimed> {
    static struct_identity identity;
    static struct_identity *get() { return &identity; }
  };
  template<> struct DFHACK_EXPORT identity_traits<entity_event::T_data::T_founded> {
    static struct_identity identity;
    static struct_identity *get() { return &identity; }
  };
  template<> struct DFHACK_EXPORT identity_traits<entity_event::T_data::T_reclaiming> {
    static struct_identity identity;
    static struct_identity *get() { return &identity; }
  };
  template<> struct DFHACK_EXPORT identity_traits<entity_event::T_data::T_founding> {
    static struct_identity identity;
    static struct_identity *get() { return &identity; }
  };
  template<> struct DFHACK_EXPORT identity_traits<entity_event::T_data::T_leave> {
    static struct_identity identity;
    static struct_identity *get() { return &identity; }
  };
  template<> struct DFHACK_EXPORT identity_traits<entity_event::T_data::T_insurrection> {
    static struct_identity identity;
    static struct_identity *get() { return &identity; }
  };
  template<> struct DFHACK_EXPORT identity_traits<entity_event::T_data::T_insurrection_end> {
    static struct_identity identity;
    static struct_identity *get() { return &identity; }
  };
  template<> struct DFHACK_EXPORT identity_traits<entity_event::T_data::T_succession> {
    static struct_identity identity;
    static struct_identity *get() { return &identity; }
  };
  template<> struct DFHACK_EXPORT identity_traits<entity_event::T_data::T_claim> {
    static struct_identity identity;
    static struct_identity *get() { return &identity; }
  };
  template<> struct DFHACK_EXPORT identity_traits<entity_event::T_data::T_accept_tribute_offer> {
    static struct_identity identity;
    static struct_identity *get() { return &identity; }
  };
  template<> struct DFHACK_EXPORT identity_traits<entity_event::T_data::T_refuse_tribute_offer> {
    static struct_identity identity;
    static struct_identity *get() { return &identity; }
  };
  template<> struct DFHACK_EXPORT identity_traits<entity_event::T_data::T_accept_tribute_demand> {
    static struct_identity identity;
    static struct_identity *get() { return &identity; }
  };
  template<> struct DFHACK_EXPORT identity_traits<entity_event::T_data::T_refuse_tribute_demand> {
    static struct_identity identity;
    static struct_identity *get() { return &identity; }
  };
  template<> struct DFHACK_EXPORT identity_traits<entity_event::T_data::T_accept_peace_offer> {
    static struct_identity identity;
    static struct_identity *get() { return &identity; }
  };
  template<> struct DFHACK_EXPORT identity_traits<entity_event::T_data::T_refuse_peace_offer> {
    static struct_identity identity;
    static struct_identity *get() { return &identity; }
  };
  template<> struct DFHACK_EXPORT identity_traits<entity_event::T_data::T_cease_tribute_offer> {
    static struct_identity identity;
    static struct_identity *get() { return &identity; }
  };
  template<> struct DFHACK_EXPORT identity_traits<entity_event::T_data> {
    static struct_identity identity;
    static struct_identity *get() { return &identity; }
  };
}
#endif
