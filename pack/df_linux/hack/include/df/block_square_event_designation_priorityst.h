/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_BLOCK_SQUARE_EVENT_DESIGNATION_PRIORITYST_H
#define DF_BLOCK_SQUARE_EVENT_DESIGNATION_PRIORITYST_H
#ifndef DF_BLOCK_SQUARE_EVENT_H
#include "block_square_event.h"
#endif
namespace df {
  struct DFHACK_EXPORT block_square_event_designation_priorityst : block_square_event {
    int32_t priority[16][16];
    static virtual_identity _identity;
  protected:
    block_square_event_designation_priorityst(virtual_identity *_id = &block_square_event_designation_priorityst::_identity);
    friend void *df::allocator_fn<block_square_event_designation_priorityst>(void*,const void*);
  };
}
#endif
