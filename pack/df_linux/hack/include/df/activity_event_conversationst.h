/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_ACTIVITY_EVENT_CONVERSATIONST_H
#define DF_ACTIVITY_EVENT_CONVERSATIONST_H
#ifndef DF_ACTIVITY_EVENT_H
#include "activity_event.h"
#endif
#ifndef DF_ENTITY_EVENT_H
#include "entity_event.h"
#endif
namespace df {
  struct talk_choice;
  struct DFHACK_EXPORT activity_event_conversationst : activity_event {
    struct DFHACK_EXPORT T_anon_1 {
      int32_t anon_1;
      int32_t anon_2;
      static struct_identity _identity;
    public:
      T_anon_1();
    };
    std::vector<T_anon_1* > anon_1;
    int32_t anon_2;
    df::entity_event unk1;
    int32_t anon_3;
    int32_t anon_4;
    int32_t anon_5;
    int32_t anon_6;
    std::vector<int32_t > anon_7;
    std::vector<int32_t > anon_8;
    struct DFHACK_EXPORT T_anon_9 {
      int32_t anon_1;
      int32_t anon_2;
      int32_t anon_3;
      df::entity_event anon_4;
      int32_t anon_5;
      int16_t anon_6;
      int16_t anon_7;
      int16_t anon_8;
      int32_t anon_9;
      int32_t anon_10;
      int32_t anon_11;
      int32_t anon_12;
      int32_t anon_13;
      int32_t unk_v4014_1; /*!< v0.40.14, uninit */
      static struct_identity _identity;
    public:
      T_anon_9();
    };
    std::vector<T_anon_9* > anon_9;
    int32_t anon_10;
    int32_t anon_11;
    int32_t anon_12;
    int32_t anon_13;
    struct DFHACK_EXPORT T_unk2 {
      std::vector<void* > anon_1;
      int32_t anon_2;
      int32_t anon_3;
      std::vector<void* > anon_4;
      std::vector<void* > anon_5;
      std::vector<void* > anon_6;
      std::vector<void* > anon_7;
      std::vector<void* > anon_8;
      std::vector<void* > anon_9;
      std::vector<void* > anon_10;
      std::vector<void* > anon_11;
      std::vector<void* > anon_12;
      std::vector<void* > anon_13;
      std::vector<void* > anon_14;
      std::vector<void* > anon_15;
      std::vector<void* > anon_16;
      std::vector<void* > anon_17;
      int32_t anon_18;
      int32_t anon_19;
      int32_t anon_20;
      int32_t anon_21;
      int32_t anon_22;
      int32_t anon_23;
      int32_t anon_24;
      int32_t anon_25;
      int32_t anon_26;
      int32_t anon_27;
      int32_t anon_28;
      int32_t anon_29;
      static struct_identity _identity;
    public:
      T_unk2();
    };
    T_unk2 unk2;
    std::vector<df::talk_choice* > anon_14;
    int32_t anon_15;
    int32_t anon_16;
    int32_t anon_17;
    int32_t anon_18;
    int32_t anon_19;
    int32_t anon_20;
    int32_t anon_21;
    int32_t anon_22;
    int32_t anon_23;
    int32_t anon_24;
    int32_t anon_25;
    int32_t anon_26;
    static virtual_identity _identity;
  protected:
    activity_event_conversationst(virtual_identity *_id = &activity_event_conversationst::_identity);
    friend void *df::allocator_fn<activity_event_conversationst>(void*,const void*);
  };
}
#endif
