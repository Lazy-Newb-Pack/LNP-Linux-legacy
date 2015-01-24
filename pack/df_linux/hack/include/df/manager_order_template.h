/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_MANAGER_ORDER_TEMPLATE_H
#define DF_MANAGER_ORDER_TEMPLATE_H
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
  struct DFHACK_EXPORT manager_order_template {
    df::job_type job_type;
    std::string reaction_name;
    int16_t anon_1;
    int16_t item_subtype;
    int16_t mat_type;
    int32_t mat_index;
    df::stockpile_group_set item_category;
    int32_t anon_2;
    df::job_material_category material_category;
    int8_t anon_3;
    static struct_identity _identity;
  public:
    manager_order_template();
  };
}
#endif
