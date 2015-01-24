/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_ITEM_STATUEST_H
#define DF_ITEM_STATUEST_H
#ifndef DF_ART_IMAGE_REF_H
#include "art_image_ref.h"
#endif
#ifndef DF_ITEM_CONSTRUCTED_H
#include "item_constructed.h"
#endif
namespace df {
  struct DFHACK_EXPORT item_statuest : item_constructed {
    df::art_image_ref image;
    std::string description;
    static virtual_identity _identity;
  protected:
    item_statuest(virtual_identity *_id = &item_statuest::_identity);
    friend void *df::allocator_fn<item_statuest>(void*,const void*);
  };
}
#endif
