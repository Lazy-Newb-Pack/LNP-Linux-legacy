/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_ITEM_SIEGEAMMOST_H
#define DF_ITEM_SIEGEAMMOST_H
#ifndef DF_ITEM_CONSTRUCTED_H
#include "item_constructed.h"
#endif
namespace df {
  struct itemdef_siegeammost;
  struct DFHACK_EXPORT item_siegeammost : item_constructed {
    df::itemdef_siegeammost* subtype;
    int32_t sharpness; /*!< v0.40.15 */
    static virtual_identity _identity;
  protected:
    item_siegeammost(virtual_identity *_id = &item_siegeammost::_identity);
    friend void *df::allocator_fn<item_siegeammost>(void*,const void*);
  };
}
#endif
