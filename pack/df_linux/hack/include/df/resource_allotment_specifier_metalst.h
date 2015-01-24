/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_RESOURCE_ALLOTMENT_SPECIFIER_METALST_H
#define DF_RESOURCE_ALLOTMENT_SPECIFIER_METALST_H
#ifndef DF_RESOURCE_ALLOTMENT_SPECIFIER_H
#include "resource_allotment_specifier.h"
#endif
namespace df {
  struct DFHACK_EXPORT resource_allotment_specifier_metalst : resource_allotment_specifier {
    int16_t mat_type;
    int32_t mat_index;
    int32_t anon_1;
    int32_t anon_2[12];
    static virtual_identity _identity;
  protected:
    resource_allotment_specifier_metalst(virtual_identity *_id = &resource_allotment_specifier_metalst::_identity);
    friend void *df::allocator_fn<resource_allotment_specifier_metalst>(void*,const void*);
  };
}
#endif
