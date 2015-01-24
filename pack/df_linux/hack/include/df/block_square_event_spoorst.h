/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_BLOCK_SQUARE_EVENT_SPOORST_H
#define DF_BLOCK_SQUARE_EVENT_SPOORST_H
#ifndef DF_BLOCK_SQUARE_EVENT_H
#include "block_square_event.h"
#endif
namespace df {
  struct DFHACK_EXPORT block_square_event_spoorst : block_square_event {
    int16_t anon_1[16][16];
    int8_t anon_2[16][16];
    int32_t anon_3[16][16];
    int32_t anon_4[16][16];
    int32_t anon_5[16][16];
    int32_t anon_6[16][16];
    int32_t anon_7;
    int32_t anon_8;
    static virtual_identity _identity;
  protected:
    block_square_event_spoorst(virtual_identity *_id = &block_square_event_spoorst::_identity);
    friend void *df::allocator_fn<block_square_event_spoorst>(void*,const void*);
  };
}
#endif
