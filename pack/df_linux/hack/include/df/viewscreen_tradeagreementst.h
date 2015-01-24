/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_VIEWSCREEN_TRADEAGREEMENTST_H
#define DF_VIEWSCREEN_TRADEAGREEMENTST_H
#ifndef DF_VIEWSCREEN_H
#include "viewscreen.h"
#endif
namespace df {
  struct entity_sell_prices;
  struct historical_entity;
  struct DFHACK_EXPORT viewscreen_tradeagreementst : viewscreen {
    df::entity_sell_prices* requests;
    int32_t civ_id;
    std::vector<int16_t > anon_1;
    int32_t type_idx;
    int32_t good_idx;
    char title[256];
    df::historical_entity* civ;
    static virtual_identity _identity;
  protected:
    viewscreen_tradeagreementst(virtual_identity *_id = &viewscreen_tradeagreementst::_identity);
    friend void *df::allocator_fn<viewscreen_tradeagreementst>(void*,const void*);
  };
}
#endif
