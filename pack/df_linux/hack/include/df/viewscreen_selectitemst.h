/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_VIEWSCREEN_SELECTITEMST_H
#define DF_VIEWSCREEN_SELECTITEMST_H
#ifndef DF_ENTITY_SELL_CATEGORY_H
#include "entity_sell_category.h"
#endif
#ifndef DF_VIEWSCREEN_H
#include "viewscreen.h"
#endif
namespace df {
  struct embark_item_choice;
  struct viewscreen_setupdwarfgamest;
  struct DFHACK_EXPORT viewscreen_selectitemst : viewscreen {
    int16_t* p_item_type;
    int16_t* p_item_subtype;
    int16_t* p_mattype;
    int32_t* p_matindex;
    df::embark_item_choice* choice;
    df::viewscreen_setupdwarfgamest* screen;
    std::vector<int32_t > page_base[107];
    char title[256];
    char anon_1[256];
    char filter[256];
    int32_t right_pos;
    int32_t right_page_base;
    bool right_list;
    int32_t sel_category;
    std::vector<enum_field<df::entity_sell_category,int16_t> > categories;
    static virtual_identity _identity;
  protected:
    viewscreen_selectitemst(virtual_identity *_id = &viewscreen_selectitemst::_identity);
    friend void *df::allocator_fn<viewscreen_selectitemst>(void*,const void*);
  };
}
#endif
