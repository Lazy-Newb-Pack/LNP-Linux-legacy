/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_RESOURCE_ALLOTMENT_SPECIFIER_WOODST_H
#define DF_RESOURCE_ALLOTMENT_SPECIFIER_WOODST_H
#ifndef DF_RESOURCE_ALLOTMENT_SPECIFIER_H
#include "resource_allotment_specifier.h"
#endif
namespace df {
  struct DFHACK_EXPORT resource_allotment_specifier_woodst : resource_allotment_specifier {
    int16_t mat_type;
    int32_t mat_index;
    int32_t anon_1;
    int32_t anon_2;
    int32_t anon_3;
    int32_t anon_4;
    int32_t anon_5;
    int32_t anon_6;
    static virtual_identity _identity;
  protected:
    resource_allotment_specifier_woodst(virtual_identity *_id = &resource_allotment_specifier_woodst::_identity);
    friend void *df::allocator_fn<resource_allotment_specifier_woodst>(void*,const void*);
  };
}
#endif
