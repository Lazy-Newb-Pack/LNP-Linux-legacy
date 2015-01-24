/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_ITEMIMPROVEMENT_ART_IMAGEST_H
#define DF_ITEMIMPROVEMENT_ART_IMAGEST_H
#ifndef DF_ART_IMAGE_REF_H
#include "art_image_ref.h"
#endif
#ifndef DF_ITEMIMPROVEMENT_H
#include "itemimprovement.h"
#endif
namespace df {
  struct DFHACK_EXPORT itemimprovement_art_imagest : itemimprovement {
    df::art_image_ref image;
    static virtual_identity _identity;
  protected:
    itemimprovement_art_imagest(virtual_identity *_id = &itemimprovement_art_imagest::_identity);
    friend void *df::allocator_fn<itemimprovement_art_imagest>(void*,const void*);
  };
}
#endif
