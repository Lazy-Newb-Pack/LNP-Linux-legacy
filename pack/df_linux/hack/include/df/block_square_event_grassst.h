/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_BLOCK_SQUARE_EVENT_GRASSST_H
#define DF_BLOCK_SQUARE_EVENT_GRASSST_H
#ifndef DF_BLOCK_SQUARE_EVENT_H
#include "block_square_event.h"
#endif
namespace df {
  struct DFHACK_EXPORT block_square_event_grassst : block_square_event {
    int32_t plant_index;
    int8_t amount[16][16];
    static virtual_identity _identity;
  protected:
    block_square_event_grassst(virtual_identity *_id = &block_square_event_grassst::_identity);
    friend void *df::allocator_fn<block_square_event_grassst>(void*,const void*);
  };
}
#endif
