/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_INTERFACE_BUTTON_BUILDING_NEW_JOBST_H
#define DF_INTERFACE_BUTTON_BUILDING_NEW_JOBST_H
#ifndef DF_INTERFACE_BUTTON_BUILDINGST_H
#include "interface_button_buildingst.h"
#endif
#ifndef DF_ITEM_TYPE_H
#include "item_type.h"
#endif
#ifndef DF_JOB_MATERIAL_CATEGORY_H
#include "job_material_category.h"
#endif
#ifndef DF_JOB_TYPE_H
#include "job_type.h"
#endif
#ifndef DF_STOCKPILE_GROUP_SET_H
#include "stockpile_group_set.h"
#endif
namespace df {
  struct DFHACK_EXPORT interface_button_building_new_jobst : interface_button_buildingst {
    enum_field<df::job_type,int32_t> job_type;
    std::string reaction_name;
    df::item_type item_type;
    int16_t item_subtype;
    int16_t mat_type;
    int32_t mat_index;
    df::stockpile_group_set item_category;
    int32_t hist_figure_id;
    df::job_material_category material_category;
    bool unk_48;
    bool is_custom;
    static virtual_identity _identity;
  protected:
    interface_button_building_new_jobst(virtual_identity *_id = &interface_button_building_new_jobst::_identity);
    friend void *df::allocator_fn<interface_button_building_new_jobst>(void*,const void*);
  };
}
#endif
