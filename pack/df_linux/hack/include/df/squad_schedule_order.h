/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_SQUAD_SCHEDULE_ORDER_H
#define DF_SQUAD_SCHEDULE_ORDER_H
namespace df {
  struct squad_order;
  struct DFHACK_EXPORT squad_schedule_order {
    df::squad_order* order;
    int32_t min_count;
    std::vector<bool> positions;
    static struct_identity _identity;
  public:
    squad_schedule_order();
  };
}
#endif
