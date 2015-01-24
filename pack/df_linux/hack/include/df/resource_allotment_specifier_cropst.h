/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_RESOURCE_ALLOTMENT_SPECIFIER_CROPST_H
#define DF_RESOURCE_ALLOTMENT_SPECIFIER_CROPST_H
#ifndef DF_RESOURCE_ALLOTMENT_SPECIFIER_H
#include "resource_allotment_specifier.h"
#endif
namespace df {
  struct DFHACK_EXPORT resource_allotment_specifier_cropst : resource_allotment_specifier {
    int32_t anon_1;
    int32_t anon_2;
    int32_t unk_v40_01; /*!< v0.40.01 */
    int32_t anon_3[5];
    static virtual_identity _identity;
  protected:
    resource_allotment_specifier_cropst(virtual_identity *_id = &resource_allotment_specifier_cropst::_identity);
    friend void *df::allocator_fn<resource_allotment_specifier_cropst>(void*,const void*);
  };
}
#endif
