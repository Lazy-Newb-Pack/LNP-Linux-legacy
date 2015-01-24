/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_CARAVAN_STATE_H
#define DF_CARAVAN_STATE_H
#ifndef DF_ENTITY_ACTIVITY_STATISTICS_H
#include "entity_activity_statistics.h"
#endif
namespace df {
  struct entity_buy_prices;
  struct entity_sell_prices;
  struct DFHACK_EXPORT caravan_state {
    int32_t total_capacity;
    int32_t anon_1;
    int8_t trade_state; /*!< 1 = approaching depot; 2 = at depot; 3 = leaving */
    int8_t depot_notified; /*!< has it warned you that you need a depot */
    int16_t time_remaining;
    int32_t entity;
    df::entity_activity_statistics activity_stats;
    union T_flags {
      uint32_t whole;
      struct {
        uint32_t check_cleanup : 1; /*!< set each time a merchant leaves the map or dies */
        uint32_t casualty : 1;
        uint32_t hardship : 1;
        uint32_t communicate : 1; /*!< send data to mountainhomes */
        uint32_t seized : 1;
        uint32_t offended : 1;
        uint32_t announce : 1; /*!< display merchantintro and merchantexit */
      } bits;
      enum Shift {
        shift_check_cleanup = 0,
        shift_casualty = 1,
        shift_hardship = 2,
        shift_communicate = 3,
        shift_seized = 4,
        shift_offended = 5,
        shift_announce = 6
      };
      enum Mask : uint32_t {
        mask_check_cleanup = 0x1U,
        mask_casualty = 0x2U,
        mask_hardship = 0x4U,
        mask_communicate = 0x8U,
        mask_seized = 0x10U,
        mask_offended = 0x20U,
        mask_announce = 0x40U
      };
      T_flags(uint32_t whole_ = 0) : whole(whole_) {};
    };
    T_flags flags;
    int32_t import_value;
    int32_t export_value_total;
    int32_t export_value_personal; /*!< excluding foreign-produced items */
    int32_t offer_value;
    std::vector<int32_t > animals;
    df::entity_sell_prices* sell_prices;
    df::entity_buy_prices* buy_prices;
    std::vector<int32_t > goods;
    int32_t anon_2;
    void* anon_3;
    static struct_identity _identity;
  public:
    caravan_state();
  };
  template<> struct DFHACK_EXPORT bitfield_traits<caravan_state::T_flags> {
    typedef uint32_t base_type;
    typedef caravan_state::T_flags bitfield_type;
    static const int bit_count = sizeof(base_type)*8;
    static const bitfield_item_info bits[bit_count];
  };
  template<> struct DFHACK_EXPORT identity_traits<caravan_state::T_flags> {
    static bitfield_identity identity;
    static bitfield_identity *get() { return &identity; }
  };
}
#endif
