/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_ITEMIMPROVEMENT_ILLUSTRATIONST_H
#define DF_ITEMIMPROVEMENT_ILLUSTRATIONST_H
#ifndef DF_ART_IMAGE_REF_H
#include "art_image_ref.h"
#endif
#ifndef DF_ITEMIMPROVEMENT_H
#include "itemimprovement.h"
#endif
namespace df {
  struct DFHACK_EXPORT itemimprovement_illustrationst : itemimprovement {
    df::art_image_ref image;
    int32_t anon_1; /*!< v0.34.01 */
    static virtual_identity _identity;
  protected:
    itemimprovement_illustrationst(virtual_identity *_id = &itemimprovement_illustrationst::_identity);
    friend void *df::allocator_fn<itemimprovement_illustrationst>(void*,const void*);
  };
}
#endif
