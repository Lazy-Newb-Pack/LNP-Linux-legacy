/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_LAYER_OBJECT_BUTTONST_H
#define DF_LAYER_OBJECT_BUTTONST_H
#ifndef DF_LAYER_OBJECT_H
#include "layer_object.h"
#endif
namespace df {
  struct DFHACK_EXPORT layer_object_buttonst : layer_object {
    int32_t x1;
    int32_t y1;
    int32_t x2;
    int32_t y2;
    int32_t has_mouse_lclick;
    int32_t has_mouse_rclick;
    int32_t mouse_lclick_x;
    int32_t mouse_lclick_y;
    int32_t mouse_rclick_x;
    int32_t mouse_rclick_y;
    int32_t mouse_x;
    int32_t mouse_y;
    int32_t mouse_x_old;
    int32_t mouse_y_old;
    int8_t handle_mouselbtndown;
    int8_t handle_mouserbtndown;
    static virtual_identity _identity;
  protected:
    layer_object_buttonst(virtual_identity *_id = &layer_object_buttonst::_identity);
    friend void *df::allocator_fn<layer_object_buttonst>(void*,const void*);
  };
}
#endif
