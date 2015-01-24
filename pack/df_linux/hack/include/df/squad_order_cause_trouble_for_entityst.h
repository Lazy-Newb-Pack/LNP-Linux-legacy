/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_SQUAD_ORDER_CAUSE_TROUBLE_FOR_ENTITYST_H
#define DF_SQUAD_ORDER_CAUSE_TROUBLE_FOR_ENTITYST_H
#ifndef DF_SQUAD_ORDER_H
#include "squad_order.h"
#endif
namespace df {
  struct DFHACK_EXPORT squad_order_cause_trouble_for_entityst : squad_order {
    int32_t anon_1;
    std::string anon_2;
    static virtual_identity _identity;
  protected:
    squad_order_cause_trouble_for_entityst(virtual_identity *_id = &squad_order_cause_trouble_for_entityst::_identity);
    friend void *df::allocator_fn<squad_order_cause_trouble_for_entityst>(void*,const void*);
  };
}
#endif
