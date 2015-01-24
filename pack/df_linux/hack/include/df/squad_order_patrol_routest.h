/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_SQUAD_ORDER_PATROL_ROUTEST_H
#define DF_SQUAD_ORDER_PATROL_ROUTEST_H
#ifndef DF_SQUAD_ORDER_H
#include "squad_order.h"
#endif
namespace df {
  struct DFHACK_EXPORT squad_order_patrol_routest : squad_order {
    int32_t route_id;
    static virtual_identity _identity;
  protected:
    squad_order_patrol_routest(virtual_identity *_id = &squad_order_patrol_routest::_identity);
    friend void *df::allocator_fn<squad_order_patrol_routest>(void*,const void*);
  };
}
#endif
