/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_MATERIAL_TEMPLATE_H
#define DF_MATERIAL_TEMPLATE_H
#ifndef DF_MATERIAL_COMMON_H
#include "material_common.h"
#endif
namespace df {
  struct DFHACK_EXPORT material_template : material_common {
    std::string powder_dye_str; /*!< temporary */
    std::string state_color_str[6];
    static struct_identity _identity;
  public:
    material_template();
  };
}
#endif
