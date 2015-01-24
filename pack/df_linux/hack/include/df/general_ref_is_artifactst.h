/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_GENERAL_REF_IS_ARTIFACTST_H
#define DF_GENERAL_REF_IS_ARTIFACTST_H
#ifndef DF_GENERAL_REF_ARTIFACT_H
#include "general_ref_artifact.h"
#endif
namespace df {
  struct DFHACK_EXPORT general_ref_is_artifactst : general_ref_artifact {
    static virtual_identity _identity;
  protected:
    general_ref_is_artifactst(virtual_identity *_id = &general_ref_is_artifactst::_identity);
    friend void *df::allocator_fn<general_ref_is_artifactst>(void*,const void*);
  };
}
#endif
