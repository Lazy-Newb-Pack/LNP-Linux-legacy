/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_SCHEDULE_SLOT_H
#define DF_SCHEDULE_SLOT_H
namespace df {
  struct DFHACK_EXPORT schedule_slot {
    int16_t type; /*!< 0:Eat, 1:Sleep, 2-4:??? */
    int16_t start_time;
    int16_t end_time;
    int16_t anon_1;
    int8_t processed;
    static struct_identity _identity;
  public:
    schedule_slot();
  };
}
#endif
