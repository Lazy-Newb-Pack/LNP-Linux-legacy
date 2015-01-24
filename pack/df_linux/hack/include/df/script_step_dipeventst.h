/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_SCRIPT_STEP_DIPEVENTST_H
#define DF_SCRIPT_STEP_DIPEVENTST_H
#ifndef DF_SCRIPT_STEP_EVENTST_H
#include "script_step_eventst.h"
#endif
namespace df {
  struct DFHACK_EXPORT script_step_dipeventst : script_step_eventst {
    std::string parm1;
    std::string parm2;
    std::string parm3;
    std::string parm4;
    std::string parm5;
    static virtual_identity _identity;
  protected:
    script_step_dipeventst(virtual_identity *_id = &script_step_dipeventst::_identity);
    friend void *df::allocator_fn<script_step_dipeventst>(void*,const void*);
  };
}
#endif
