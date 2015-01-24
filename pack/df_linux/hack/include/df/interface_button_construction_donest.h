/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_INTERFACE_BUTTON_CONSTRUCTION_DONEST_H
#define DF_INTERFACE_BUTTON_CONSTRUCTION_DONEST_H
#ifndef DF_INTERFACE_BUTTON_CONSTRUCTIONST_H
#include "interface_button_constructionst.h"
#endif
namespace df {
  struct DFHACK_EXPORT interface_button_construction_donest : interface_button_constructionst {
    static virtual_identity _identity;
  protected:
    interface_button_construction_donest(virtual_identity *_id = &interface_button_construction_donest::_identity);
    friend void *df::allocator_fn<interface_button_construction_donest>(void*,const void*);
  };
}
#endif
