/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_SQUAD_ORDER_MOVEST_H
#define DF_SQUAD_ORDER_MOVEST_H
#ifndef DF_COORD_H
#include "coord.h"
#endif
#ifndef DF_SQUAD_ORDER_H
#include "squad_order.h"
#endif
namespace df {
  struct DFHACK_EXPORT squad_order_movest : squad_order {
    df::coord pos;
    int32_t point_id;
    static virtual_identity _identity;
  protected:
    squad_order_movest(virtual_identity *_id = &squad_order_movest::_identity);
    friend void *df::allocator_fn<squad_order_movest>(void*,const void*);
  };
}
#endif
