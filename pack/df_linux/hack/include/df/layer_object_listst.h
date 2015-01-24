/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_LAYER_OBJECT_LISTST_H
#define DF_LAYER_OBJECT_LISTST_H
#ifndef DF_INTERFACE_KEY_H
#include "interface_key.h"
#endif
#ifndef DF_LAYER_OBJECT_H
#include "layer_object.h"
#endif
namespace df {
  struct DFHACK_EXPORT layer_object_listst : layer_object {
    int32_t cursor;
    int32_t num_entries;
    int32_t x1;
    int32_t y1;
    int32_t page_size;
    int32_t x2;
    int32_t y2;
    int32_t mouse_l_cur;
    int32_t mouse_r_cur;
    bool rclick_scrolls;
    int32_t flag; /*!< for standardscrolling */
    df::interface_key key_lclick;
    df::interface_key key_rclick;
    static virtual_identity _identity;
  protected:
    layer_object_listst(virtual_identity *_id = &layer_object_listst::_identity);
    friend void *df::allocator_fn<layer_object_listst>(void*,const void*);
  };
}
#endif
