/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_MEETING_DIPLOMAT_INFO_H
#define DF_MEETING_DIPLOMAT_INFO_H
#ifndef DF_MEETING_TOPIC_H
#include "meeting_topic.h"
#endif
namespace df {
  struct active_script_varst;
  struct dipscript_info;
  struct entity_buy_requests;
  struct entity_sell_requests;
  struct meeting_event;
  struct DFHACK_EXPORT meeting_diplomat_info {
    int32_t civ_id;
    int16_t unk1; /*!< maybe is_first_contact */
    int32_t diplomat_id;
    int32_t associate_id;
    std::vector<enum_field<df::meeting_topic,int32_t> > topic_list;
    std::vector<int32_t > topic_parms;
    df::entity_sell_requests* sell_requests;
    df::entity_buy_requests* buy_requests;
    df::dipscript_info* dipscript;
    int32_t cur_step;
    std::vector<df::active_script_varst* > active_script_vars;
    std::string unk_50;
    std::string unk_6c;
    union T_flags {
      uint32_t whole;
      struct {
        uint32_t dynamic_load : 1; /*!< destroy dipscript_info in destructor */
        uint32_t failure : 1;
        uint32_t success : 1;
      } bits;
      enum Shift {
        shift_dynamic_load = 0,
        shift_failure = 1,
        shift_success = 2
      };
      enum Mask : uint32_t {
        mask_dynamic_load = 0x1U,
        mask_failure = 0x2U,
        mask_success = 0x4U
      };
      T_flags(uint32_t whole_ = 0) : whole(whole_) {};
    };
    T_flags flags;
    std::vector<df::meeting_event* > events;
    std::vector<int32_t > agreement_entity;
    std::vector<df::meeting_topic > agreement_topic;
    std::vector<int32_t > agreement_year;
    std::vector<int32_t > agreement_tick;
    std::vector<int16_t > agreement_outcome;
    std::vector<int32_t > contact_entity;
    std::vector<int32_t > contact_year;
    std::vector<int32_t > contact_tick;
    static struct_identity _identity;
  public:
    meeting_diplomat_info();
  };
  template<> struct DFHACK_EXPORT bitfield_traits<meeting_diplomat_info::T_flags> {
    typedef uint32_t base_type;
    typedef meeting_diplomat_info::T_flags bitfield_type;
    static const int bit_count = sizeof(base_type)*8;
    static const bitfield_item_info bits[bit_count];
  };
  template<> struct DFHACK_EXPORT identity_traits<meeting_diplomat_info::T_flags> {
    static bitfield_identity identity;
    static bitfield_identity *get() { return &identity; }
  };
}
#endif
