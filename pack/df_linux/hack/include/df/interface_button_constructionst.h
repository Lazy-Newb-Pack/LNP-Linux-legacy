/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_INTERFACE_BUTTON_CONSTRUCTIONST_H
#define DF_INTERFACE_BUTTON_CONSTRUCTIONST_H
#ifndef DF_INTERFACE_BUTTON_H
#include "interface_button.h"
#endif
namespace df {
  struct DFHACK_EXPORT interface_button_constructionst : interface_button {
    void* unused_c;
    static virtual_identity _identity;
  protected:
    interface_button_constructionst(virtual_identity *_id = &interface_button_constructionst::_identity);
    friend void *df::allocator_fn<interface_button_constructionst>(void*,const void*);
  };
}
#endif
