/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_GENERAL_REF_ENTITY_ART_IMAGE_H
#define DF_GENERAL_REF_ENTITY_ART_IMAGE_H
#ifndef DF_GENERAL_REF_H
#include "general_ref.h"
#endif
namespace df {
  struct DFHACK_EXPORT general_ref_entity_art_image : general_ref {
    int32_t entity_id;
    int32_t index; /*!< lookup in entity.resources.art_image_* */
    static virtual_identity _identity;
  protected:
    general_ref_entity_art_image(virtual_identity *_id = &general_ref_entity_art_image::_identity);
    friend void *df::allocator_fn<general_ref_entity_art_image>(void*,const void*);
  };
}
#endif
