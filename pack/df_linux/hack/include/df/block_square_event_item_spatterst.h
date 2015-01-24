/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_BLOCK_SQUARE_EVENT_ITEM_SPATTERST_H
#define DF_BLOCK_SQUARE_EVENT_ITEM_SPATTERST_H
#ifndef DF_BLOCK_SQUARE_EVENT_H
#include "block_square_event.h"
#endif
#ifndef DF_ITEM_TYPE_H
#include "item_type.h"
#endif
namespace df {
  struct DFHACK_EXPORT block_square_event_item_spatterst : block_square_event {
    df::item_type item_type;
    int16_t item_subtype;
    int16_t mattype;
    int32_t matindex;
    int32_t unk1;
    int32_t amount[16][16];
    int8_t unk2[16][16];
    uint16_t temp1;
    uint16_t temp2;
    static virtual_identity _identity;
  protected:
    block_square_event_item_spatterst(virtual_identity *_id = &block_square_event_item_spatterst::_identity);
    friend void *df::allocator_fn<block_square_event_item_spatterst>(void*,const void*);
  };
}
#endif
