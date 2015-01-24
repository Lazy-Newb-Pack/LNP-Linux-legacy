/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_INTERFACE_BUTTON_BUILDINGST_H
#define DF_INTERFACE_BUTTON_BUILDINGST_H
#ifndef DF_INTERFACE_BUTTON_H
#include "interface_button.h"
#endif
namespace df {
  struct building;
  struct DFHACK_EXPORT interface_button_buildingst : interface_button {
    df::building* building;
    static virtual_identity _identity;
  protected:
    interface_button_buildingst(virtual_identity *_id = &interface_button_buildingst::_identity);
    friend void *df::allocator_fn<interface_button_buildingst>(void*,const void*);
  };
}
#endif
