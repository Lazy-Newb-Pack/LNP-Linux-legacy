/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_SQUAD_ORDER_TRAINST_H
#define DF_SQUAD_ORDER_TRAINST_H
#ifndef DF_SQUAD_ORDER_H
#include "squad_order.h"
#endif
namespace df {
  struct DFHACK_EXPORT squad_order_trainst : squad_order {
    static virtual_identity _identity;
  protected:
    squad_order_trainst(virtual_identity *_id = &squad_order_trainst::_identity);
    friend void *df::allocator_fn<squad_order_trainst>(void*,const void*);
  };
}
#endif
