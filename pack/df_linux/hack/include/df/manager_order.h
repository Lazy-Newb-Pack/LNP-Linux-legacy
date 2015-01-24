/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_MANAGER_ORDER_H
#define DF_MANAGER_ORDER_H
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
  struct DFHACK_EXPORT manager_order {
    df::job_type job_type;
    int16_t unk_2;
    int16_t item_subtype;
    std::string reaction_name;
    int16_t mat_type;
    int32_t mat_index;
    df::stockpile_group_set item_category;
    int32_t hist_figure_id;
    df::job_material_category material_category;
    int16_t amount_left;
    int16_t amount_total;
    int32_t is_validated;
    static struct_identity _identity;
  public:
    manager_order();
  };
}
#endif
