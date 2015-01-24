/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_SQUAD_ORDER_DRIVE_ENTITY_OFF_SITEST_H
#define DF_SQUAD_ORDER_DRIVE_ENTITY_OFF_SITEST_H
#ifndef DF_SQUAD_ORDER_H
#include "squad_order.h"
#endif
namespace df {
  struct DFHACK_EXPORT squad_order_drive_entity_off_sitest : squad_order {
    int32_t anon_1;
    int32_t anon_2;
    std::string anon_3;
    static virtual_identity _identity;
  protected:
    squad_order_drive_entity_off_sitest(virtual_identity *_id = &squad_order_drive_entity_off_sitest::_identity);
    friend void *df::allocator_fn<squad_order_drive_entity_off_sitest>(void*,const void*);
  };
}
#endif
