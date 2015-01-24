/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_MACHINE_STANDARDST_H
#define DF_MACHINE_STANDARDST_H
#ifndef DF_MACHINE_H
#include "machine.h"
#endif
namespace df {
  struct DFHACK_EXPORT machine_standardst : machine {
    static virtual_identity _identity;
  protected:
    machine_standardst(virtual_identity *_id = &machine_standardst::_identity);
    friend void *df::allocator_fn<machine_standardst>(void*,const void*);
  };
}
#endif
