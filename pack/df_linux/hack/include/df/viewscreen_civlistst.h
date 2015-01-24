/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_VIEWSCREEN_CIVLISTST_H
#define DF_VIEWSCREEN_CIVLISTST_H
#ifndef DF_VIEWSCREEN_H
#include "viewscreen.h"
#endif
namespace df {
  struct historical_entity;
  struct DFHACK_EXPORT viewscreen_civlistst : viewscreen {
    char anon_1[4];
    int32_t sel_idx;
    std::vector<df::historical_entity* > entities;
    static virtual_identity _identity;
  protected:
    viewscreen_civlistst(virtual_identity *_id = &viewscreen_civlistst::_identity);
    friend void *df::allocator_fn<viewscreen_civlistst>(void*,const void*);
  };
}
#endif
