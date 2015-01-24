/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_ART_IMAGE_ELEMENT_CREATUREST_H
#define DF_ART_IMAGE_ELEMENT_CREATUREST_H
#ifndef DF_ART_IMAGE_ELEMENT_H
#include "art_image_element.h"
#endif
namespace df {
  struct DFHACK_EXPORT art_image_element_creaturest : art_image_element {
    int32_t race;
    int16_t caste;
    int32_t histfig;
    static virtual_identity _identity;
  protected:
    art_image_element_creaturest(virtual_identity *_id = &art_image_element_creaturest::_identity);
    friend void *df::allocator_fn<art_image_element_creaturest>(void*,const void*);
  };
}
#endif
