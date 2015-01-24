/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_ART_IMAGE_ELEMENT_TREEST_H
#define DF_ART_IMAGE_ELEMENT_TREEST_H
#ifndef DF_ART_IMAGE_ELEMENT_H
#include "art_image_element.h"
#endif
namespace df {
  struct DFHACK_EXPORT art_image_element_treest : art_image_element {
    int32_t plant_id;
    static virtual_identity _identity;
  protected:
    art_image_element_treest(virtual_identity *_id = &art_image_element_treest::_identity);
    friend void *df::allocator_fn<art_image_element_treest>(void*,const void*);
  };
}
#endif
