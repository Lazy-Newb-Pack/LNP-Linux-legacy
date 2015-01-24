/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_SCRIPT_VAR_LONGST_H
#define DF_SCRIPT_VAR_LONGST_H
#ifndef DF_SCRIPT_VARST_H
#include "script_varst.h"
#endif
namespace df {
  struct DFHACK_EXPORT script_var_longst : script_varst {
    static virtual_identity _identity;
  protected:
    script_var_longst(virtual_identity *_id = &script_var_longst::_identity);
    friend void *df::allocator_fn<script_var_longst>(void*,const void*);
  };
}
#endif
