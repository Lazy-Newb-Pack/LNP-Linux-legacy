/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_COMBAT_REPORT_EVENT_TYPE_H
#define DF_COMBAT_REPORT_EVENT_TYPE_H
namespace df {
  namespace enums {
    namespace combat_report_event_type {
      enum combat_report_event_type : int16_t {
        anon_1,
        Deflected,
        anon_2,
        anon_3,
        anon_4,
        anon_5,
        Unconscious,
        Stunned,
        MoreStunned,
        Winded,
        MoreWinded,
        Nausea,
        MoreNausea,
        anon_6,
        anon_7,
        ExtractInjected,
        ExtractSprayed,
        BloodSucked,
        SeveredPart,
        anon_8,
        KnockedBack,
        StuckIn,
        LatchOnPart,
        LatchOn,
        Enraged,
        PassThrough,
        GlancesAway,
        anon_9,
        anon_10,
        MajorArtery,
        Artery,
        MotorNerve,
        SensoryNerve,
        NoForce,
        Interrupted
      };
    }
  }
  using enums::combat_report_event_type::combat_report_event_type;
  template<> struct DFHACK_EXPORT identity_traits<combat_report_event_type> {
    static enum_identity identity;
    static enum_identity *get() { return &identity; }
  };
  template<> struct DFHACK_EXPORT enum_traits<combat_report_event_type> {
    typedef int16_t base_type;
    typedef combat_report_event_type enum_type;
    static const base_type first_item_value = 0;
    static const base_type last_item_value = 34;
    static inline bool is_valid(enum_type value) {
      return (base_type(value) >= first_item_value && base_type(value) <= last_item_value);
    }
    static const enum_type first_item = (enum_type)first_item_value;
    static const enum_type last_item = (enum_type)last_item_value;
    static const char *const key_table[35];
  };
}
#endif
