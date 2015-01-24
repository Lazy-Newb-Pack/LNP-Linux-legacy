/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_ART_IMAGE_ELEMENT_ITEMST_H
#define DF_ART_IMAGE_ELEMENT_ITEMST_H
#ifndef DF_ART_IMAGE_ELEMENT_H
#include "art_image_element.h"
#endif
#ifndef DF_ITEM_FLAGS_H
#include "item_flags.h"
#endif
#ifndef DF_ITEM_TYPE_H
#include "item_type.h"
#endif
namespace df {
  struct DFHACK_EXPORT art_image_element_itemst : art_image_element {
    df::item_type item_type;
    int16_t item_subtype;
    int16_t mat_type;
    int16_t mat_index;
    df::item_flags flags;
    int32_t item_id;
    static virtual_identity _identity;
  protected:
    art_image_element_itemst(virtual_identity *_id = &art_image_element_itemst::_identity);
    friend void *df::allocator_fn<art_image_element_itemst>(void*,const void*);
  };
}
#endif
