/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_RESOURCE_ALLOTMENT_SPECIFIER_SKINST_H
#define DF_RESOURCE_ALLOTMENT_SPECIFIER_SKINST_H
#ifndef DF_RESOURCE_ALLOTMENT_SPECIFIER_H
#include "resource_allotment_specifier.h"
#endif
namespace df {
  struct DFHACK_EXPORT resource_allotment_specifier_skinst : resource_allotment_specifier {
    int16_t mat_type;
    int32_t mat_index;
    int16_t mat_type2;
    int32_t mat_index2;
    int32_t anon_1;
    static virtual_identity _identity;
  protected:
    resource_allotment_specifier_skinst(virtual_identity *_id = &resource_allotment_specifier_skinst::_identity);
    friend void *df::allocator_fn<resource_allotment_specifier_skinst>(void*,const void*);
  };
}
#endif
