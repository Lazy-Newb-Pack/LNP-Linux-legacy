/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_VIEWSCREEN_UNITST_H
#define DF_VIEWSCREEN_UNITST_H
#ifndef DF_VIEWSCREEN_H
#include "viewscreen.h"
#endif
namespace df {
  struct unit;
  struct DFHACK_EXPORT viewscreen_unitst : viewscreen {
    df::unit* unit;
    int32_t anon_1;
    int32_t anon_2;
    int32_t anon_3;
    int8_t anon_4;
    static virtual_identity _identity;
  protected:
    viewscreen_unitst(virtual_identity *_id = &viewscreen_unitst::_identity);
    friend void *df::allocator_fn<viewscreen_unitst>(void*,const void*);
  };
}
#endif
