/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_VIEWSCREEN_CREATEQUOTAST_H
#define DF_VIEWSCREEN_CREATEQUOTAST_H
#ifndef DF_VIEWSCREEN_H
#include "viewscreen.h"
#endif
namespace df {
  struct manager_order_template;
  struct DFHACK_EXPORT viewscreen_createquotast : viewscreen {
    char str_filter[256];
    int32_t top_idx;
    int32_t sel_idx;
    std::vector<df::manager_order_template* > orders;
    std::vector<int32_t > pages; /*!< first index for each page */
    bool want_quantity;
    static virtual_identity _identity;
  protected:
    viewscreen_createquotast(virtual_identity *_id = &viewscreen_createquotast::_identity);
    friend void *df::allocator_fn<viewscreen_createquotast>(void*,const void*);
  };
}
#endif
