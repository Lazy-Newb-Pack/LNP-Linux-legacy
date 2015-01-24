/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_RESOURCE_ALLOTMENT_SPECIFIER_EXTRACTST_H
#define DF_RESOURCE_ALLOTMENT_SPECIFIER_EXTRACTST_H
#ifndef DF_RESOURCE_ALLOTMENT_SPECIFIER_H
#include "resource_allotment_specifier.h"
#endif
namespace df {
  struct DFHACK_EXPORT resource_allotment_specifier_extractst : resource_allotment_specifier {
    int16_t mat_type;
    int32_t mat_index;
    int32_t anon_1;
    int16_t mat_type2;
    int32_t mat_index2;
    int32_t anon_2; /*!< uninitialized */
    static virtual_identity _identity;
  protected:
    resource_allotment_specifier_extractst(virtual_identity *_id = &resource_allotment_specifier_extractst::_identity);
    friend void *df::allocator_fn<resource_allotment_specifier_extractst>(void*,const void*);
  };
}
#endif
