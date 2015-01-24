/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_ACTIVE_SCRIPT_VAR_LONGST_H
#define DF_ACTIVE_SCRIPT_VAR_LONGST_H
#ifndef DF_ACTIVE_SCRIPT_VARST_H
#include "active_script_varst.h"
#endif
namespace df {
  struct DFHACK_EXPORT active_script_var_longst : active_script_varst {
    int32_t value;
    static virtual_identity _identity;
  protected:
    active_script_var_longst(virtual_identity *_id = &active_script_var_longst::_identity);
    friend void *df::allocator_fn<active_script_var_longst>(void*,const void*);
  };
}
#endif
