/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_FEATURE_ALTERATION_NEW_LAVA_FILL_ZST_H
#define DF_FEATURE_ALTERATION_NEW_LAVA_FILL_ZST_H
#ifndef DF_FEATURE_ALTERATION_H
#include "feature_alteration.h"
#endif
namespace df {
  struct DFHACK_EXPORT feature_alteration_new_lava_fill_zst : feature_alteration {
    int32_t magma_fill_z;
    static virtual_identity _identity;
  protected:
    feature_alteration_new_lava_fill_zst(virtual_identity *_id = &feature_alteration_new_lava_fill_zst::_identity);
    friend void *df::allocator_fn<feature_alteration_new_lava_fill_zst>(void*,const void*);
  };
}
#endif
