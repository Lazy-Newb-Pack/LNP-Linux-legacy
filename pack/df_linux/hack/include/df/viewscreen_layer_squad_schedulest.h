/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_VIEWSCREEN_LAYER_SQUAD_SCHEDULEST_H
#define DF_VIEWSCREEN_LAYER_SQUAD_SCHEDULEST_H
#ifndef DF_VIEWSCREEN_LAYER_H
#include "viewscreen_layer.h"
#endif
namespace df {
  struct squad;
  struct squad_schedule_entry;
  struct DFHACK_EXPORT viewscreen_layer_squad_schedulest : viewscreen_layer {
    std::vector<df::squad* > squads;
    int8_t swapped;
    int32_t page_month;
    int32_t cur_alert;
    bool in_name_cell;
    bool in_give_order;
    bool in_edit_order;
    df::squad_schedule_entry* order_list;
    int32_t anon_1;
    int32_t order_month;
    int32_t order_type;
    std::vector<bool> burrows;
    int32_t patrol_route;
    int32_t min_soldiers;
    std::vector<bool> positions;
    int32_t station_point;
    df::squad_schedule_entry* copy_item;
    static virtual_identity _identity;
  protected:
    viewscreen_layer_squad_schedulest(virtual_identity *_id = &viewscreen_layer_squad_schedulest::_identity);
    friend void *df::allocator_fn<viewscreen_layer_squad_schedulest>(void*,const void*);
  };
}
#endif
