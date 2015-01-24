/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_SQUAD_SCHEDULE_ENTRY_H
#define DF_SQUAD_SCHEDULE_ENTRY_H
namespace df {
  struct squad_schedule_order;
  struct DFHACK_EXPORT squad_schedule_entry {
    std::string name;
    int16_t sleep_mode; /*!< 0 room, 1 barrack will, 2 barrack need */
    int16_t uniform_mode; /*!< 0 uniformed, 1 civ clothes */
    std::vector<df::squad_schedule_order* > orders;
    std::vector<int32_t* > order_assignments;
    static struct_identity _identity;
  public:
    squad_schedule_entry();
  };
}
#endif
