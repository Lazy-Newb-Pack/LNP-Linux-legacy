/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_SCRIPT_STEP_INVASIONST_H
#define DF_SCRIPT_STEP_INVASIONST_H
#ifndef DF_SCRIPT_STEP_EVENTST_H
#include "script_step_eventst.h"
#endif
namespace df {
  struct DFHACK_EXPORT script_step_invasionst : script_step_eventst {
    std::string parm;
    static virtual_identity _identity;
  protected:
    script_step_invasionst(virtual_identity *_id = &script_step_invasionst::_identity);
    friend void *df::allocator_fn<script_step_invasionst>(void*,const void*);
  };
}
#endif
