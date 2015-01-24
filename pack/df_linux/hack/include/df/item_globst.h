/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_ITEM_GLOBST_H
#define DF_ITEM_GLOBST_H
#ifndef DF_ITEM_ACTUAL_H
#include "item_actual.h"
#endif
#ifndef DF_ITEM_MATSTATE_H
#include "item_matstate.h"
#endif
namespace df {
  struct DFHACK_EXPORT item_globst : item_actual {
    int16_t mat_type;
    int32_t mat_index;
    int32_t rot_timer;
    df::item_matstate mat_state;
    int32_t anon_1;
    static virtual_identity _identity;
  protected:
    item_globst(virtual_identity *_id = &item_globst::_identity);
    friend void *df::allocator_fn<item_globst>(void*,const void*);
  };
}
#endif
