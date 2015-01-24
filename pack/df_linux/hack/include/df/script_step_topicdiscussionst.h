/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_SCRIPT_STEP_TOPICDISCUSSIONST_H
#define DF_SCRIPT_STEP_TOPICDISCUSSIONST_H
#ifndef DF_SCRIPT_STEPST_H
#include "script_stepst.h"
#endif
namespace df {
  struct DFHACK_EXPORT script_step_topicdiscussionst : script_stepst {
    static virtual_identity _identity;
  protected:
    script_step_topicdiscussionst(virtual_identity *_id = &script_step_topicdiscussionst::_identity);
    friend void *df::allocator_fn<script_step_topicdiscussionst>(void*,const void*);
  };
}
#endif
