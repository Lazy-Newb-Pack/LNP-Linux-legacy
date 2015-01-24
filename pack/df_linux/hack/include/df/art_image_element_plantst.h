/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_ART_IMAGE_ELEMENT_PLANTST_H
#define DF_ART_IMAGE_ELEMENT_PLANTST_H
#ifndef DF_ART_IMAGE_ELEMENT_H
#include "art_image_element.h"
#endif
namespace df {
  struct DFHACK_EXPORT art_image_element_plantst : art_image_element {
    int32_t plant_id;
    static virtual_identity _identity;
  protected:
    art_image_element_plantst(virtual_identity *_id = &art_image_element_plantst::_identity);
    friend void *df::allocator_fn<art_image_element_plantst>(void*,const void*);
  };
}
#endif
