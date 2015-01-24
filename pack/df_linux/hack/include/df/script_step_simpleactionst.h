/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_SCRIPT_STEP_SIMPLEACTIONST_H
#define DF_SCRIPT_STEP_SIMPLEACTIONST_H
#ifndef DF_SCRIPT_STEPST_H
#include "script_stepst.h"
#endif
namespace df {
  struct DFHACK_EXPORT script_step_simpleactionst : script_stepst {
    std::string type;
    std::string subtype;
    static virtual_identity _identity;
  protected:
    script_step_simpleactionst(virtual_identity *_id = &script_step_simpleactionst::_identity);
    friend void *df::allocator_fn<script_step_simpleactionst>(void*,const void*);
  };
}
#endif
