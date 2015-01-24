/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_ITEM_PIPE_SECTIONST_H
#define DF_ITEM_PIPE_SECTIONST_H
#ifndef DF_ITEM_CONSTRUCTED_H
#include "item_constructed.h"
#endif
namespace df {
  struct DFHACK_EXPORT item_pipe_sectionst : item_constructed {
    static virtual_identity _identity;
  protected:
    item_pipe_sectionst(virtual_identity *_id = &item_pipe_sectionst::_identity);
    friend void *df::allocator_fn<item_pipe_sectionst>(void*,const void*);
  };
}
#endif
