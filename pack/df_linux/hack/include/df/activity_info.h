/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_ACTIVITY_INFO_H
#define DF_ACTIVITY_INFO_H
namespace df {
  struct building;
  struct unit;
  struct DFHACK_EXPORT activity_info {
    int32_t id; /*!< assigned during Save */
    df::unit* unit_actor; /*!< diplomat or worker */
    df::unit* unit_noble; /*!< meeting recipient */
    df::building* place;
    union T_flags {
      uint16_t whole;
      struct {
        uint16_t next_step : 1;
        uint16_t checked_building : 1;
        uint16_t add_delay : 1;
        uint16_t topic_discussed : 1;
        uint16_t meeting_done : 1;
      } bits;
      enum Shift {
        shift_next_step = 0,
        shift_checked_building = 1,
        shift_add_delay = 2,
        shift_topic_discussed = 3,
        shift_meeting_done = 4
      };
      enum Mask : uint16_t {
        mask_next_step = 0x1U,
        mask_checked_building = 0x2U,
        mask_add_delay = 0x4U,
        mask_topic_discussed = 0x8U,
        mask_meeting_done = 0x10U
      };
      T_flags(uint16_t whole_ = 0) : whole(whole_) {};
    };
    T_flags flags;
    int8_t unk3; /*!< 3 */
    int16_t delay;
    int32_t tree_quota; /*!< -1 */
    static struct_identity _identity;
  public:
    activity_info();
  };
  template<> struct DFHACK_EXPORT bitfield_traits<activity_info::T_flags> {
    typedef uint16_t base_type;
    typedef activity_info::T_flags bitfield_type;
    static const int bit_count = sizeof(base_type)*8;
    static const bitfield_item_info bits[bit_count];
  };
  template<> struct DFHACK_EXPORT identity_traits<activity_info::T_flags> {
    static bitfield_identity identity;
    static bitfield_identity *get() { return &identity; }
  };
}
#endif
