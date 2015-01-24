/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_ART_IMAGE_PROPERTY_TRANSITIVE_VERBST_H
#define DF_ART_IMAGE_PROPERTY_TRANSITIVE_VERBST_H
#ifndef DF_ART_IMAGE_PROPERTY_H
#include "art_image_property.h"
#endif
#ifndef DF_ART_IMAGE_PROPERTY_VERB_H
#include "art_image_property_verb.h"
#endif
namespace df {
  struct DFHACK_EXPORT art_image_property_transitive_verbst : art_image_property {
    int32_t subject;
    int32_t object;
    df::art_image_property_verb verb;
    static virtual_identity _identity;
  protected:
    art_image_property_transitive_verbst(virtual_identity *_id = &art_image_property_transitive_verbst::_identity);
    friend void *df::allocator_fn<art_image_property_transitive_verbst>(void*,const void*);
  };
}
#endif
