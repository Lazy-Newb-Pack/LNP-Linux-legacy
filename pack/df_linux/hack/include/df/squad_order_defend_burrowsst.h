/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_SQUAD_ORDER_DEFEND_BURROWSST_H
#define DF_SQUAD_ORDER_DEFEND_BURROWSST_H
#ifndef DF_SQUAD_ORDER_H
#include "squad_order.h"
#endif
namespace df {
  struct DFHACK_EXPORT squad_order_defend_burrowsst : squad_order {
    std::vector<int32_t > burrows;
    static virtual_identity _identity;
  protected:
    squad_order_defend_burrowsst(virtual_identity *_id = &squad_order_defend_burrowsst::_identity);
    friend void *df::allocator_fn<squad_order_defend_burrowsst>(void*,const void*);
  };
}
#endif
