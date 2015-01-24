/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_HISTORY_EVENT_TYPE_H
#define DF_HISTORY_EVENT_TYPE_H
namespace df {
  namespace enums {
    namespace history_event_type {
      enum history_event_type : int32_t {
        WAR_ATTACKED_SITE,
        WAR_DESTROYED_SITE,
        CREATED_SITE,
        HIST_FIGURE_DIED,
        ADD_HF_ENTITY_LINK,
        REMOVE_HF_ENTITY_LINK,
        FIRST_CONTACT,
        FIRST_CONTACT_FAILED,
        TOPICAGREEMENT_CONCLUDED,
        TOPICAGREEMENT_REJECTED,
        TOPICAGREEMENT_MADE,
        WAR_PEACE_ACCEPTED,
        WAR_PEACE_REJECTED,
        DIPLOMAT_LOST,
        AGREEMENTS_VOIDED,
        MERCHANT,
        ARTIFACT_HIDDEN,
        ARTIFACT_POSSESSED,
        ARTIFACT_CREATED,
        ARTIFACT_LOST,
        ARTIFACT_FOUND,
        ARTIFACT_RECOVERED,
        ARTIFACT_DROPPED,
        RECLAIM_SITE,
        HF_DESTROYED_SITE,
        SITE_DIED,
        SITE_RETIRED,
        ENTITY_CREATED,
        ENTITY_ACTION,
        ENTITY_INCORPORATED,
        CREATED_BUILDING,
        REPLACED_BUILDING,
        ADD_HF_SITE_LINK,
        REMOVE_HF_SITE_LINK,
        ADD_HF_HF_LINK,
        REMOVE_HF_HF_LINK,
        ENTITY_RAZED_BUILDING,
        MASTERPIECE_CREATED_ARCH_DESIGN,
        MASTERPIECE_CREATED_ARCH_CONSTRUCT,
        MASTERPIECE_CREATED_ITEM,
        MASTERPIECE_CREATED_DYE_ITEM,
        MASTERPIECE_CREATED_ITEM_IMPROVEMENT,
        MASTERPIECE_CREATED_FOOD,
        MASTERPIECE_CREATED_ENGRAVING,
        MASTERPIECE_LOST,
        CHANGE_HF_STATE,
        CHANGE_HF_JOB,
        WAR_FIELD_BATTLE,
        WAR_PLUNDERED_SITE,
        WAR_SITE_NEW_LEADER,
        WAR_SITE_TRIBUTE_FORCED,
        WAR_SITE_TAKEN_OVER,
        BODY_ABUSED,
        HIST_FIGURE_ABDUCTED,
        ITEM_STOLEN,
        HF_RAZED_BUILDING,
        CREATURE_DEVOURED,
        HIST_FIGURE_WOUNDED,
        HIST_FIGURE_SIMPLE_BATTLE_EVENT,
        CREATED_WORLD_CONSTRUCTION,
        HIST_FIGURE_REUNION,
        HIST_FIGURE_REACH_SUMMIT,
        HIST_FIGURE_TRAVEL,
        HIST_FIGURE_NEW_PET,
        ASSUME_IDENTITY,
        CREATE_ENTITY_POSITION,
        CHANGE_CREATURE_TYPE,
        HIST_FIGURE_REVIVED,
        HF_LEARNS_SECRET,
        CHANGE_HF_BODY_STATE,
        HF_ACT_ON_BUILDING,
        HF_DOES_INTERACTION,
        HF_CONFRONTED,
        ENTITY_LAW,
        HF_GAINS_SECRET_GOAL,
        ARTIFACT_STORED,
        AGREEMENT_FORMED,
        SITE_DISPUTE,
        AGREEMENT_CONCLUDED,
        INSURRECTION_STARTED,
        INSURRECTION_ENDED,
        HF_ATTACKED_SITE
      };
    }
  }
  using enums::history_event_type::history_event_type;
  template<> struct DFHACK_EXPORT identity_traits<history_event_type> {
    static enum_identity identity;
    static enum_identity *get() { return &identity; }
  };
  template<> struct DFHACK_EXPORT enum_traits<history_event_type> {
    typedef int32_t base_type;
    typedef history_event_type enum_type;
    static const base_type first_item_value = 0;
    static const base_type last_item_value = 81;
    static inline bool is_valid(enum_type value) {
      return (base_type(value) >= first_item_value && base_type(value) <= last_item_value);
    }
    static const enum_type first_item = (enum_type)first_item_value;
    static const enum_type last_item = (enum_type)last_item_value;
    static const char *const key_table[82];
  };
}
#endif
