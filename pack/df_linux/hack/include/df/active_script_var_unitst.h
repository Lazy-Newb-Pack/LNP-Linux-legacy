/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_ACTIVE_SCRIPT_VAR_UNITST_H
#define DF_ACTIVE_SCRIPT_VAR_UNITST_H
#ifndef DF_ACTIVE_SCRIPT_VARST_H
#include "active_script_varst.h"
#endif
namespace df {
  struct unit;
  struct DFHACK_EXPORT active_script_var_unitst : active_script_varst {
    df::unit* unit;
    static virtual_identity _identity;
  protected:
    active_script_var_unitst(virtual_identity *_id = &active_script_var_unitst::_identity);
    friend void *df::allocator_fn<active_script_var_unitst>(void*,const void*);
  };
}
#endif
