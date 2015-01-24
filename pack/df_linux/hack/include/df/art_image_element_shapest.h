/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_ART_IMAGE_ELEMENT_SHAPEST_H
#define DF_ART_IMAGE_ELEMENT_SHAPEST_H
#ifndef DF_ART_IMAGE_ELEMENT_H
#include "art_image_element.h"
#endif
namespace df {
  struct DFHACK_EXPORT art_image_element_shapest : art_image_element {
    int32_t shape_id;
    int16_t anon_1;
    static virtual_identity _identity;
  protected:
    art_image_element_shapest(virtual_identity *_id = &art_image_element_shapest::_identity);
    friend void *df::allocator_fn<art_image_element_shapest>(void*,const void*);
  };
}
#endif
