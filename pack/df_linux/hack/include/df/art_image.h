/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_ART_IMAGE_H
#define DF_ART_IMAGE_H
#ifndef DF_ITEM_QUALITY_H
#include "item_quality.h"
#endif
#ifndef DF_LANGUAGE_NAME_H
#include "language_name.h"
#endif
#ifndef DF_SPECIFIC_REF_TYPE_H
#include "specific_ref_type.h"
#endif
namespace df {
  struct art_image_element;
  struct art_image_property;
  struct general_ref;
  struct DFHACK_EXPORT art_image {
    std::vector<df::art_image_element* > elements;
    std::vector<df::art_image_property* > properties;
    int32_t event;
    df::language_name name;
    df::specific_ref_type spec_ref_type;
    int16_t mat_type;
    int32_t mat_index;
    df::item_quality quality;
    int32_t artist;
    int32_t site;
    df::general_ref* anon_1;
    int32_t year;
    int32_t anon_2;
    int32_t id;
    int16_t subid;
    static struct_identity _identity;
  public:
    art_image();
  };
}
#endif
