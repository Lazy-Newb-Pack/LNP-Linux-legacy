/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_UNIT_FLAGS2_H
#define DF_UNIT_FLAGS2_H
namespace df {
  union unit_flags2 {
    uint32_t whole;
    struct {
      uint32_t swimming : 1;
      uint32_t sparring : 1;
      uint32_t no_notify : 1; /*!< Do not notify about level gains (for embark etc) */
      uint32_t unused : 1;
      uint32_t calculated_nerves : 1;
      uint32_t calculated_bodyparts : 1;
      uint32_t important_historical_figure : 1; /*!< Is important historical figure (slight variation) */
      uint32_t killed : 1; /*!< Has been killed by kill function (slightly different from dead, not necessarily violent death) */
      uint32_t cleanup_1 : 1; /*!< Must be forgotten by forget function (just cleanup) */
      uint32_t cleanup_2 : 1; /*!< Must be deleted (cleanup) */
      uint32_t cleanup_3 : 1; /*!< Recently forgotten (cleanup) */
      uint32_t for_trade : 1; /*!< Offered for trade */
      uint32_t trade_resolved : 1;
      uint32_t has_breaks : 1;
      uint32_t gutted : 1;
      uint32_t circulatory_spray : 1;
      uint32_t locked_in_for_trading : 1; /*!< Locked in for trading (it's a projectile on the other set of flags, might be what the flying was) */
      uint32_t slaughter : 1; /*!< marked for slaughter */
      uint32_t underworld : 1; /*!< Underworld creature */
      uint32_t resident : 1; /*!< Current resident */
      uint32_t cleanup_4 : 1; /*!< Marked for special cleanup as unused load from unit block on disk */
      uint32_t calculated_insulation : 1; /*!< Insulation from clothing calculated */
      uint32_t visitor_uninvited : 1; /*!< Uninvited guest */
      uint32_t visitor : 1;
      uint32_t calculated_inventory : 1; /*!< Inventory order calculated */
      uint32_t vision_good : 1; /*!< Vision -- have good part */
      uint32_t vision_damaged : 1; /*!< Vision -- have damaged part */
      uint32_t vision_missing : 1; /*!< Vision -- have missing part */
      uint32_t breathing_good : 1; /*!< Breathing -- have good part */
      uint32_t breathing_problem : 1; /*!< Breathing -- having a problem */
      uint32_t roaming_wilderness_population_source : 1;
      uint32_t roaming_wilderness_population_source_not_a_map_feature : 1;
    } bits;
    enum Shift {
      shift_swimming = 0,
      shift_sparring = 1,
      shift_no_notify = 2,
      shift_unused = 3,
      shift_calculated_nerves = 4,
      shift_calculated_bodyparts = 5,
      shift_important_historical_figure = 6,
      shift_killed = 7,
      shift_cleanup_1 = 8,
      shift_cleanup_2 = 9,
      shift_cleanup_3 = 10,
      shift_for_trade = 11,
      shift_trade_resolved = 12,
      shift_has_breaks = 13,
      shift_gutted = 14,
      shift_circulatory_spray = 15,
      shift_locked_in_for_trading = 16,
      shift_slaughter = 17,
      shift_underworld = 18,
      shift_resident = 19,
      shift_cleanup_4 = 20,
      shift_calculated_insulation = 21,
      shift_visitor_uninvited = 22,
      shift_visitor = 23,
      shift_calculated_inventory = 24,
      shift_vision_good = 25,
      shift_vision_damaged = 26,
      shift_vision_missing = 27,
      shift_breathing_good = 28,
      shift_breathing_problem = 29,
      shift_roaming_wilderness_population_source = 30,
      shift_roaming_wilderness_population_source_not_a_map_feature = 31
    };
    enum Mask : uint32_t {
      mask_swimming = 0x1U,
      mask_sparring = 0x2U,
      mask_no_notify = 0x4U,
      mask_unused = 0x8U,
      mask_calculated_nerves = 0x10U,
      mask_calculated_bodyparts = 0x20U,
      mask_important_historical_figure = 0x40U,
      mask_killed = 0x80U,
      mask_cleanup_1 = 0x100U,
      mask_cleanup_2 = 0x200U,
      mask_cleanup_3 = 0x400U,
      mask_for_trade = 0x800U,
      mask_trade_resolved = 0x1000U,
      mask_has_breaks = 0x2000U,
      mask_gutted = 0x4000U,
      mask_circulatory_spray = 0x8000U,
      mask_locked_in_for_trading = 0x10000U,
      mask_slaughter = 0x20000U,
      mask_underworld = 0x40000U,
      mask_resident = 0x80000U,
      mask_cleanup_4 = 0x100000U,
      mask_calculated_insulation = 0x200000U,
      mask_visitor_uninvited = 0x400000U,
      mask_visitor = 0x800000U,
      mask_calculated_inventory = 0x1000000U,
      mask_vision_good = 0x2000000U,
      mask_vision_damaged = 0x4000000U,
      mask_vision_missing = 0x8000000U,
      mask_breathing_good = 0x10000000U,
      mask_breathing_problem = 0x20000000U,
      mask_roaming_wilderness_population_source = 0x40000000U,
      mask_roaming_wilderness_population_source_not_a_map_feature = 0x80000000U
    };
    unit_flags2(uint32_t whole_ = 0) : whole(whole_) {};
  };
  template<> struct DFHACK_EXPORT bitfield_traits<unit_flags2> {
    typedef uint32_t base_type;
    typedef unit_flags2 bitfield_type;
    static const int bit_count = sizeof(base_type)*8;
    static const bitfield_item_info bits[bit_count];
  };
  template<> struct DFHACK_EXPORT identity_traits<unit_flags2> {
    static bitfield_identity identity;
    static bitfield_identity *get() { return &identity; }
  };
}
#endif
