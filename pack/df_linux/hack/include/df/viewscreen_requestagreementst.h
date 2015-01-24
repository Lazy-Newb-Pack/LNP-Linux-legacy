/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_VIEWSCREEN_REQUESTAGREEMENTST_H
#define DF_VIEWSCREEN_REQUESTAGREEMENTST_H
#ifndef DF_VIEWSCREEN_H
#include "viewscreen.h"
#endif
namespace df {
  struct entity_buy_prices;
  struct historical_entity;
  struct DFHACK_EXPORT viewscreen_requestagreementst : viewscreen {
    df::entity_buy_prices* requests;
    int32_t civ_id;
    int32_t cursor;
    char title[256];
    df::historical_entity* anon_1;
    static virtual_identity _identity;
  protected:
    viewscreen_requestagreementst(virtual_identity *_id = &viewscreen_requestagreementst::_identity);
    friend void *df::allocator_fn<viewscreen_requestagreementst>(void*,const void*);
  };
}
#endif
