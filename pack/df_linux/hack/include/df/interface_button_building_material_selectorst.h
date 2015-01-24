/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_INTERFACE_BUTTON_BUILDING_MATERIAL_SELECTORST_H
#define DF_INTERFACE_BUTTON_BUILDING_MATERIAL_SELECTORST_H
#ifndef DF_INTERFACE_BUTTON_BUILDINGST_H
#include "interface_button_buildingst.h"
#endif
#ifndef DF_JOB_MATERIAL_CATEGORY_H
#include "job_material_category.h"
#endif
namespace df {
  struct DFHACK_EXPORT interface_button_building_material_selectorst : interface_button_buildingst {
    int16_t mat_type;
    int32_t mat_index;
    df::job_material_category material_category;
    int8_t unk_1c;
    static virtual_identity _identity;
  protected:
    interface_button_building_material_selectorst(virtual_identity *_id = &interface_button_building_material_selectorst::_identity);
    friend void *df::allocator_fn<interface_button_building_material_selectorst>(void*,const void*);
  };
}
#endif
