/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_INTERFACE_BUTTON_BUILDING_CATEGORY_SELECTORST_H
#define DF_INTERFACE_BUTTON_BUILDING_CATEGORY_SELECTORST_H
#ifndef DF_INTERFACE_BUTTON_BUILDINGST_H
#include "interface_button_buildingst.h"
#endif
namespace df {
  struct DFHACK_EXPORT interface_button_building_category_selectorst : interface_button_buildingst {
    int32_t category_id;
    int8_t unk_14;
    static virtual_identity _identity;
  protected:
    interface_button_building_category_selectorst(virtual_identity *_id = &interface_button_building_category_selectorst::_identity);
    friend void *df::allocator_fn<interface_button_building_category_selectorst>(void*,const void*);
  };
}
#endif
