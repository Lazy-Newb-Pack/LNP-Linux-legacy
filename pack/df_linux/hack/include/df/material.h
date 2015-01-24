/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_MATERIAL_H
#define DF_MATERIAL_H
#ifndef DF_MATERIAL_COMMON_H
#include "material_common.h"
#endif
namespace df {
  struct DFHACK_EXPORT material : material_common {
    std::string prefix;
    int32_t food_mat_index[37];
    std::string powder_dye_str; /*!< temporary */
    std::string state_color_str[6];
    static struct_identity _identity;
#include "custom/material.methods.inc"
  public:
    material();
  };
}
#endif
