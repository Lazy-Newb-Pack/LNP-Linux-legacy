/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_BUILD_REQ_CHOICE_SPECST_H
#define DF_BUILD_REQ_CHOICE_SPECST_H
#ifndef DF_BUILD_REQ_CHOICEST_H
#include "build_req_choicest.h"
#endif
namespace df {
  struct item;
  struct DFHACK_EXPORT build_req_choice_specst : build_req_choicest {
    df::item* candidate;
    int32_t candidate_id;
    static virtual_identity _identity;
  protected:
    build_req_choice_specst(virtual_identity *_id = &build_req_choice_specst::_identity);
    friend void *df::allocator_fn<build_req_choice_specst>(void*,const void*);
  };
}
#endif
