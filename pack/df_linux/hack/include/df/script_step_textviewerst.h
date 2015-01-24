/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_SCRIPT_STEP_TEXTVIEWERST_H
#define DF_SCRIPT_STEP_TEXTVIEWERST_H
#ifndef DF_SCRIPT_STEPST_H
#include "script_stepst.h"
#endif
namespace df {
  struct DFHACK_EXPORT script_step_textviewerst : script_stepst {
    std::string filename;
    std::string outvar_name;
    static virtual_identity _identity;
  protected:
    script_step_textviewerst(virtual_identity *_id = &script_step_textviewerst::_identity);
    friend void *df::allocator_fn<script_step_textviewerst>(void*,const void*);
  };
}
#endif
