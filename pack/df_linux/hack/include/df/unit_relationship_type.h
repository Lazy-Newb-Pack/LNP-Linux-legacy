/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_UNIT_RELATIONSHIP_TYPE_H
#define DF_UNIT_RELATIONSHIP_TYPE_H
namespace df {
  namespace enums {
    namespace unit_relationship_type {
      /**
       * Used in unit.relations
       */
      enum unit_relationship_type : int16_t {
        Pet,
        Spouse,
        Mother,
        Father,
        LastAttacker,
        GroupLeader,
        Dragee,
        Dragger,
        RiderMount,
        Lover,
        unk10,
        unk11,
        Child,
        Friend,
        Grudge,
        Worship,
        AcquaintanceLong,
        AcquaintancePassing,
        Bonded,
        Hero,
        ConsidersViolent,
        ConsidersPsychotic,
        GoodForBusiness,
        FriendlyTerms,
        ConsidersKiller,
        ConsidersMurderer,
        Comrade,
        MemberOfRespectedGroup,
        MemberOfHatedGroup,
        EnemyFighter,
        FriendlyFighter,
        ConsidersBully,
        ConsidersBrigand,
        LoyalSoldier,
        ConsidersMonster
      };
    }
  }
  using enums::unit_relationship_type::unit_relationship_type;
  template<> struct DFHACK_EXPORT identity_traits<unit_relationship_type> {
    static enum_identity identity;
    static enum_identity *get() { return &identity; }
  };
  template<> struct DFHACK_EXPORT enum_traits<unit_relationship_type> {
    typedef int16_t base_type;
    typedef unit_relationship_type enum_type;
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
