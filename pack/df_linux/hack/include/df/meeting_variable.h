/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_MEETING_VARIABLE_H
#define DF_MEETING_VARIABLE_H
#ifndef DF_SPECIFIC_REF_H
#include "specific_ref.h"
#endif
namespace df {
  struct active_script_varst;
  struct DFHACK_EXPORT meeting_variable {
    int32_t value;
    df::specific_ref ref;
    df::active_script_varst* active_var;
    static struct_identity _identity;
  public:
    meeting_variable();
  };
}
#endif
