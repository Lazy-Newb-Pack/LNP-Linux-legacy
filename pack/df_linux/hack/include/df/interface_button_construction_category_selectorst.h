/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_INTERFACE_BUTTON_CONSTRUCTION_CATEGORY_SELECTORST_H
#define DF_INTERFACE_BUTTON_CONSTRUCTION_CATEGORY_SELECTORST_H
#ifndef DF_INTERFACE_BUTTON_CONSTRUCTIONST_H
#include "interface_button_constructionst.h"
#endif
namespace df {
  struct DFHACK_EXPORT interface_button_construction_category_selectorst : interface_button_constructionst {
    int32_t category_id;
    static virtual_identity _identity;
  protected:
    interface_button_construction_category_selectorst(virtual_identity *_id = &interface_button_construction_category_selectorst::_identity);
    friend void *df::allocator_fn<interface_button_construction_category_selectorst>(void*,const void*);
  };
}
#endif
