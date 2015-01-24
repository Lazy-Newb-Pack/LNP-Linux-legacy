/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_AGREEMENT_CONCLUSION_REASON_H
#define DF_AGREEMENT_CONCLUSION_REASON_H
namespace df {
  namespace enums {
    namespace agreement_conclusion_reason {
      enum agreement_conclusion_reason : int32_t {
        None,
        anon_1,
        anon_2,
        anon_3,
        anon_4,
        anon_5,
        anon_6,
        anon_7,
        anon_8,
        anon_9,
        anon_10,
        anon_11,
        anon_12,
        anon_13,
        Whim,
        anon_14,
        anon_15,
        anon_16,
        anon_17,
        anon_18,
        anon_19,
        anon_20,
        anon_21,
        anon_22,
        anon_23,
        anon_24,
        anon_25,
        anon_26,
        anon_27,
        anon_28,
        anon_29,
        ShouldHaveReachedGoal,
        InsufficientProgressTowardGoal,
        GoingWrongDirection,
        ArrivedAtLocation,
        EntityNoLongerRules,
        LeftSite,
        ReunitedWithLovedOne,
        ViolentDisagreement,
        Adopted,
        anon_30,
        ArrivedAtPerson
      };
    }
  }
  using enums::agreement_conclusion_reason::agreement_conclusion_reason;
  template<> struct DFHACK_EXPORT identity_traits<agreement_conclusion_reason> {
    static enum_identity identity;
    static enum_identity *get() { return &identity; }
  };
  template<> struct DFHACK_EXPORT enum_traits<agreement_conclusion_reason> {
    typedef int32_t base_type;
    typedef agreement_conclusion_reason enum_type;
    static const base_type first_item_value = 0;
    static const base_type last_item_value = 41;
    static inline bool is_valid(enum_type value) {
      return (base_type(value) >= first_item_value && base_type(value) <= last_item_value);
    }
    static const enum_type first_item = (enum_type)first_item_value;
    static const enum_type last_item = (enum_type)last_item_value;
    static const char *const key_table[42];
  };
}
#endif
