/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_VIEWSCREEN_LAYER_STOCKPILEST_H
#define DF_VIEWSCREEN_LAYER_STOCKPILEST_H
#ifndef DF_STOCKPILE_GROUP_SET_H
#include "stockpile_group_set.h"
#endif
#ifndef DF_STOCKPILE_LIST_H
#include "stockpile_list.h"
#endif
#ifndef DF_VIEWSCREEN_LAYER_H
#include "viewscreen_layer.h"
#endif
namespace df {
  struct stockpile_settings;
  struct DFHACK_EXPORT viewscreen_layer_stockpilest : viewscreen_layer {
    df::stockpile_settings* settings;
    df::stockpile_list cur_group;
    df::stockpile_list cur_list;
    std::vector<df::stockpile_list > group_ids;
    std::vector<df::stockpile_group_set > group_bits;
    std::vector<df::stockpile_list > list_ids;
    std::vector<std::string* > item_names;
    std::vector<bool* > item_status;
    std::string title;
    static virtual_identity _identity;
  protected:
    viewscreen_layer_stockpilest(virtual_identity *_id = &viewscreen_layer_stockpilest::_identity);
    friend void *df::allocator_fn<viewscreen_layer_stockpilest>(void*,const void*);
  };
}
#endif
