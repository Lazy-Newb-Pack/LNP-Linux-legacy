/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_WORLD_GEO_LAYER_H
#define DF_WORLD_GEO_LAYER_H
#ifndef DF_GEO_LAYER_TYPE_H
#include "geo_layer_type.h"
#endif
#ifndef DF_INCLUSION_TYPE_H
#include "inclusion_type.h"
#endif
namespace df {
  struct DFHACK_EXPORT world_geo_layer {
    df::geo_layer_type type;
    int32_t mat_index;
    std::vector<int32_t > vein_mat;
    std::vector<int16_t > vein_nested_in;
    std::vector<enum_field<df::inclusion_type,int8_t> > vein_type;
    std::vector<int8_t > vein_unk_38; /*!< density?? */
    int16_t top_height; /*!< negative */
    int16_t bottom_height;
    static struct_identity _identity;
  public:
    world_geo_layer();
  };
}
#endif
