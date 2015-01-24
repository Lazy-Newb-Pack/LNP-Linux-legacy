/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_SCRIPT_VAR_UNITST_H
#define DF_SCRIPT_VAR_UNITST_H
#ifndef DF_SCRIPT_VARST_H
#include "script_varst.h"
#endif
namespace df {
  struct DFHACK_EXPORT script_var_unitst : script_varst {
    static virtual_identity _identity;
  protected:
    script_var_unitst(virtual_identity *_id = &script_var_unitst::_identity);
    friend void *df::allocator_fn<script_var_unitst>(void*,const void*);
  };
}
#endif
