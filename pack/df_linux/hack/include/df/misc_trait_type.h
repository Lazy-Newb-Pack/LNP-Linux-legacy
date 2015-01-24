/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_MISC_TRAIT_TYPE_H
#define DF_MISC_TRAIT_TYPE_H
namespace df {
  namespace enums {
    namespace misc_trait_type {
      enum misc_trait_type : int16_t {
        RequestWaterCooldown,
        RequestFoodCooldown,
        RequestRescueCooldown,
        RequestHealthcareCooldown,
        /**
         * auto-decrement
         */
        GetDrinkCooldown,
        /**
         * auto-decrement
         */
        GetFoodCooldown,
        /**
         * auto-decrement
         */
        CleanSelfCooldown,
        /**
         * auto-decrement
         */
        Migrant,
        /**
         * auto-decrement
         */
        RoomComplaint,
        /**
         * upon reaching zero, resident creature gets named
         */
        UnnamedResident,
        /**
         * auto-decrement
         */
        RentBedroomCooldown,
        /**
         * auto-decrement
         */
        ClaimTrinketCooldown,
        /**
         * auto-decrement
         */
        ClaimClothingCooldown,
        /**
         * auto-increment to 403200
         */
        WantsDrink,
        LikesOutdoors,
        Hardened,
        TimeSinceBreak,
        OnBreak,
        /**
         * auto-decrement
         */
        PrepareToDie,
        CaveAdapt,
        /**
         * auto-decrement
         */
        anon_1,
        /**
         * auto-decrement
         */
        anon_2,
        anon_3,
        /**
         * auto-decrement
         */
        anon_4,
        /**
         * 0-20, 200 on failed path, auto-decrement
         */
        FollowUnitCooldown,
        /**
         * auto-decrement
         */
        anon_5,
        /**
         * auto-decrement
         */
        anon_6,
        anon_7,
        /**
         * created at 200, blocks repath?, auto-decrement
         */
        DangerousTerrainCooldown,
        /**
         * triggered by BEACH_FREQUENCY, auto-decrement
         */
        Beaching,
        /**
         * auto-decrement
         */
        IdleAreaCooldown,
        /**
         * auto-decrement
         */
        anon_8,
        /**
         * auto-decrement
         */
        PartiedOut,
        /**
         * 0-2000, auto-decrement
         */
        DiagnosePatientCooldown,
        /**
         * auto-decrement
         */
        DressWoundCooldown,
        /**
         * auto-decrement
         */
        CleanPatientCooldown,
        /**
         * auto-decrement
         */
        SurgeryCooldown,
        /**
         * auto-decrement
         */
        SutureCooldown,
        /**
         * auto-decrement
         */
        SetBoneCooldown,
        /**
         * auto-decrement
         */
        PlaceInTractionCooldown,
        /**
         * auto-decrement
         */
        ApplyCastCooldown,
        /**
         * auto-decrement
         */
        ImmobilizeBreakCooldown,
        /**
         * auto-decrement
         */
        BringCrutchCooldown,
        /**
         * auto-decrement, set military pickup flag upon reaching zero
         */
        anon_9,
        /**
         * auto-decrement
         */
        MilkCounter,
        /**
         * auto-decrement
         */
        HadDrill,
        /**
         * auto-decrement
         */
        CompletedDrill,
        /**
         * auto-decrement
         */
        EggSpent,
        /**
         * auto-decrement
         */
        GroundedAnimalAnger,
        /**
         * auto-decrement
         */
        anon_10,
        TimeSinceSuckedBlood,
        /**
         * auto-decrement
         */
        DrinkingBlood,
        /**
         * auto-decrement
         */
        anon_11,
        /**
         * auto-decrement
         */
        anon_12,
        /**
         * one trigger => --training_level, auto-decrement
         */
        RevertWildTimer,
        /**
         * auto-decrement
         */
        anon_13,
        /**
         * auto-decrement
         */
        NoPantsAnger,
        /**
         * auto-decrement
         */
        NoShirtAnger,
        /**
         * auto-decrement
         */
        NoShoesAnger
      };
    }
  }
  using enums::misc_trait_type::misc_trait_type;
  template<> struct DFHACK_EXPORT identity_traits<misc_trait_type> {
    static enum_identity identity;
    static enum_identity *get() { return &identity; }
  };
  template<> struct DFHACK_EXPORT enum_traits<misc_trait_type> {
    typedef int16_t base_type;
    typedef misc_trait_type enum_type;
    static const base_type first_item_value = 0;
    static const base_type last_item_value = 58;
    static inline bool is_valid(enum_type value) {
      return (base_type(value) >= first_item_value && base_type(value) <= last_item_value);
    }
    static const enum_type first_item = (enum_type)first_item_value;
    static const enum_type last_item = (enum_type)last_item_value;
    static const char *const key_table[59];
    struct attr_entry_type {
      const char* tag;
      static struct_identity _identity;
    };
    static const attr_entry_type attr_table[59+1];
    static const attr_entry_type &attrs(enum_type value);
  };
}
#endif
