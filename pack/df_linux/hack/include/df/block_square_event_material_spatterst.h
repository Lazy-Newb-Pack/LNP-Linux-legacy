/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_BLOCK_SQUARE_EVENT_MATERIAL_SPATTERST_H
#define DF_BLOCK_SQUARE_EVENT_MATERIAL_SPATTERST_H
#ifndef DF_BLOCK_SQUARE_EVENT_H
#include "block_square_event.h"
#endif
namespace df {
  struct DFHACK_EXPORT block_square_event_material_spatterst : block_square_event {
    int16_t mat_type;
    int32_t mat_index;
    int16_t mat_state;
    uint8_t amount[16][16];
    uint16_t min_temperature;
    uint16_t max_temperature;
    static virtual_identity _identity;
  protected:
    block_square_event_material_spatterst(virtual_identity *_id = &block_square_event_material_spatterst::_identity);
    friend void *df::allocator_fn<block_square_event_material_spatterst>(void*,const void*);
  };
}
#endif
