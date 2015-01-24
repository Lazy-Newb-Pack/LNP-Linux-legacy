/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_GENERAL_REF_ARTIFACT_H
#define DF_GENERAL_REF_ARTIFACT_H
#ifndef DF_GENERAL_REF_H
#include "general_ref.h"
#endif
namespace df {
  struct DFHACK_EXPORT general_ref_artifact : general_ref {
    int32_t artifact_id;
    static virtual_identity _identity;
  protected:
    general_ref_artifact(virtual_identity *_id = &general_ref_artifact::_identity);
    friend void *df::allocator_fn<general_ref_artifact>(void*,const void*);
  };
}
#endif
