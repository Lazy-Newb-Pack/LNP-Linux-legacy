/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_SCRIPT_STEP_DISCUSSST_H
#define DF_SCRIPT_STEP_DISCUSSST_H
#ifndef DF_SCRIPT_STEPST_H
#include "script_stepst.h"
#endif
namespace df {
  struct DFHACK_EXPORT script_step_discussst : script_stepst {
    std::string event;
    static virtual_identity _identity;
  protected:
    script_step_discussst(virtual_identity *_id = &script_step_discussst::_identity);
    friend void *df::allocator_fn<script_step_discussst>(void*,const void*);
  };
}
#endif
