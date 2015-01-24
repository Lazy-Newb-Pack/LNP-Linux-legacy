/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_VIEWSCREEN_KITCHENPREFST_H
#define DF_VIEWSCREEN_KITCHENPREFST_H
#ifndef DF_ITEM_TYPE_H
#include "item_type.h"
#endif
#ifndef DF_VIEWSCREEN_H
#include "viewscreen.h"
#endif
namespace df {
  struct DFHACK_EXPORT viewscreen_kitchenprefst : viewscreen {
    int32_t cursor;
    std::vector<df::item_type > item_type;
    std::vector<int16_t > item_subtype;
    std::vector<int16_t > mat_type;
    std::vector<int32_t > mat_index;
    std::vector<int32_t > count;
    std::vector<uint8_t > forbidden; /*!< 1 cook, 2 brew */
    std::vector<uint8_t > possible; /*!< 1 cook, 2 brew */
    static virtual_identity _identity;
  protected:
    viewscreen_kitchenprefst(virtual_identity *_id = &viewscreen_kitchenprefst::_identity);
    friend void *df::allocator_fn<viewscreen_kitchenprefst>(void*,const void*);
  };
}
#endif
