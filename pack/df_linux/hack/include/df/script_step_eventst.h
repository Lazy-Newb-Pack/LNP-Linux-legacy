/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_SCRIPT_STEP_EVENTST_H
#define DF_SCRIPT_STEP_EVENTST_H
#ifndef DF_SCRIPT_STEPST_H
#include "script_stepst.h"
#endif
namespace df {
  struct DFHACK_EXPORT script_step_eventst : script_stepst {
    static virtual_identity _identity;
  protected:
    script_step_eventst(virtual_identity *_id = &script_step_eventst::_identity);
    friend void *df::allocator_fn<script_step_eventst>(void*,const void*);
  };
}
#endif
