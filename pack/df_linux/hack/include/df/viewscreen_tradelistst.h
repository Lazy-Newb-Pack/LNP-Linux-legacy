/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_VIEWSCREEN_TRADELISTST_H
#define DF_VIEWSCREEN_TRADELISTST_H
#ifndef DF_VIEWSCREEN_H
#include "viewscreen.h"
#endif
namespace df {
  struct building_tradedepotst;
  struct caravan_state;
  struct DFHACK_EXPORT viewscreen_tradelistst : viewscreen {
    int32_t unk_10;
    df::building_tradedepotst* depot;
    std::vector<df::caravan_state* > caravans;
    static virtual_identity _identity;
  protected:
    viewscreen_tradelistst(virtual_identity *_id = &viewscreen_tradelistst::_identity);
    friend void *df::allocator_fn<viewscreen_tradelistst>(void*,const void*);
  };
}
#endif
