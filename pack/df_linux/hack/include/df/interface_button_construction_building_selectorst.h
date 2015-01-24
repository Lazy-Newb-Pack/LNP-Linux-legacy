/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_INTERFACE_BUTTON_CONSTRUCTION_BUILDING_SELECTORST_H
#define DF_INTERFACE_BUTTON_CONSTRUCTION_BUILDING_SELECTORST_H
#ifndef DF_INTERFACE_BUTTON_CONSTRUCTIONST_H
#include "interface_button_constructionst.h"
#endif
namespace df {
  struct DFHACK_EXPORT interface_button_construction_building_selectorst : interface_button_constructionst {
    int16_t building_type;
    int16_t building_subtype;
    int32_t custom_type;
    int32_t existing_count;
    static virtual_identity _identity;
  protected:
    interface_button_construction_building_selectorst(virtual_identity *_id = &interface_button_construction_building_selectorst::_identity);
    friend void *df::allocator_fn<interface_button_construction_building_selectorst>(void*,const void*);
  };
}
#endif
