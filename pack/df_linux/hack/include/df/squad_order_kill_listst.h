/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_SQUAD_ORDER_KILL_LISTST_H
#define DF_SQUAD_ORDER_KILL_LISTST_H
#ifndef DF_SQUAD_ORDER_H
#include "squad_order.h"
#endif
namespace df {
  struct DFHACK_EXPORT squad_order_kill_listst : squad_order {
    std::vector<int32_t > units;
    std::vector<int32_t > histfigs;
    std::string title;
    static virtual_identity _identity;
  protected:
    squad_order_kill_listst(virtual_identity *_id = &squad_order_kill_listst::_identity);
    friend void *df::allocator_fn<squad_order_kill_listst>(void*,const void*);
  };
}
#endif
