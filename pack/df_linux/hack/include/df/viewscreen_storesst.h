/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_VIEWSCREEN_STORESST_H
#define DF_VIEWSCREEN_STORESST_H
#ifndef DF_ITEM_TYPE_H
#include "item_type.h"
#endif
#ifndef DF_VIEWSCREEN_H
#include "viewscreen.h"
#endif
namespace df {
  struct item;
  struct DFHACK_EXPORT viewscreen_storesst : viewscreen {
    char title[256];
    int32_t category_cursor;
    int32_t item_cursor;
    int16_t in_right_list;
    int16_t in_group_mode;
    std::vector<int32_t > category_total;
    std::vector<int32_t > category_busy;
    std::vector<df::item* > items;
    std::vector<df::item_type > group_item_type;
    std::vector<int16_t > group_item_subtype;
    std::vector<int16_t > group_mat_type;
    std::vector<int16_t > group_mat_index;
    std::vector<int32_t > group_count;
    std::vector<df::item_type > category_order;
    bool can_zoom;
    static virtual_identity _identity;
  protected:
    viewscreen_storesst(virtual_identity *_id = &viewscreen_storesst::_identity);
    friend void *df::allocator_fn<viewscreen_storesst>(void*,const void*);
  };
}
#endif
