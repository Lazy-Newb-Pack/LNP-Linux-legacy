/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_SCRIPT_STEP_CONDITIONALST_H
#define DF_SCRIPT_STEP_CONDITIONALST_H
#ifndef DF_SCRIPT_STEPST_H
#include "script_stepst.h"
#endif
namespace df {
  struct DFHACK_EXPORT script_step_conditionalst : script_stepst {
    struct DFHACK_EXPORT T_condition {
      std::string var1_type;
      std::string var1_name;
      std::string comparison;
      std::string var2_type;
      std::string var2_name;
      static struct_identity _identity;
    public:
      T_condition();
    };
    T_condition condition;
    int32_t conditional_next_step_idx;
    static virtual_identity _identity;
  protected:
    script_step_conditionalst(virtual_identity *_id = &script_step_conditionalst::_identity);
    friend void *df::allocator_fn<script_step_conditionalst>(void*,const void*);
  };
}
#endif
