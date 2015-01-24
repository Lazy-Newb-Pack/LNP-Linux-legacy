/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_SCRIPT_STEP_SETVARST_H
#define DF_SCRIPT_STEP_SETVARST_H
#ifndef DF_SCRIPT_STEPST_H
#include "script_stepst.h"
#endif
namespace df {
  struct DFHACK_EXPORT script_step_setvarst : script_stepst {
    std::string dest_type;
    std::string dest_name;
    std::string src_type;
    std::string src_name;
    static virtual_identity _identity;
  protected:
    script_step_setvarst(virtual_identity *_id = &script_step_setvarst::_identity);
    friend void *df::allocator_fn<script_step_setvarst>(void*,const void*);
  };
}
#endif
