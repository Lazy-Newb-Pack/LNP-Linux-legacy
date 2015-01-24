/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_HAULING_STOP_H
#define DF_HAULING_STOP_H
#ifndef DF_COORD_H
#include "coord.h"
#endif
#ifndef DF_STOCKPILE_SETTINGS_H
#include "stockpile_settings.h"
#endif
namespace df {
  struct route_stockpile_link;
  struct stop_depart_condition;
  struct DFHACK_EXPORT hauling_stop {
    int32_t id;
    std::string name;
    df::coord pos;
    df::stockpile_settings settings;
    std::vector<df::stop_depart_condition* > conditions;
    std::vector<df::route_stockpile_link* > stockpiles;
    int32_t time_waiting;
    int32_t cart_id;
    static struct_identity _identity;
    typedef hauling_stop* key_pointer_type;
    typedef int32_t key_field_type;
    static int binsearch_index(const std::vector<hauling_stop*> &vec, key_field_type key, bool exact = true);
    static int binsearch_index(const std::vector<hauling_stop*> &vec, key_pointer_type key, bool exact = true);
  public:
    hauling_stop();
  };
}
#endif
