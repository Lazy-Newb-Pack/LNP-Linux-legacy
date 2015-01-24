/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_BUILD_REQ_CHOICE_GENST_H
#define DF_BUILD_REQ_CHOICE_GENST_H
#ifndef DF_BUILD_REQ_CHOICEST_H
#include "build_req_choicest.h"
#endif
#ifndef DF_ITEM_TYPE_H
#include "item_type.h"
#endif
namespace df {
  struct DFHACK_EXPORT build_req_choice_genst : build_req_choicest {
    df::item_type item_type;
    int16_t item_subtype;
    int16_t mat_type;
    int32_t mat_index;
    std::vector<int32_t > candidates;
    int32_t used_count;
    static virtual_identity _identity;
  protected:
    build_req_choice_genst(virtual_identity *_id = &build_req_choice_genst::_identity);
    friend void *df::allocator_fn<build_req_choice_genst>(void*,const void*);
  };
}
#endif
