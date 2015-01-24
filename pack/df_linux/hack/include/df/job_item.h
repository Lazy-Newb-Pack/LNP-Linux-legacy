/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_JOB_ITEM_H
#define DF_JOB_ITEM_H
#ifndef DF_ITEM_TYPE_H
#include "item_type.h"
#endif
#ifndef DF_JOB_ITEM_FLAGS1_H
#include "job_item_flags1.h"
#endif
#ifndef DF_JOB_ITEM_FLAGS2_H
#include "job_item_flags2.h"
#endif
#ifndef DF_JOB_ITEM_FLAGS3_H
#include "job_item_flags3.h"
#endif
#ifndef DF_JOB_ITEM_VECTOR_ID_H
#include "job_item_vector_id.h"
#endif
#ifndef DF_TOOL_USES_H
#include "tool_uses.h"
#endif
namespace df {
  struct DFHACK_EXPORT job_item {
    df::item_type item_type;
    int16_t item_subtype;
    int16_t mat_type;
    int32_t mat_index;
    df::job_item_flags1 flags1;
    int32_t quantity;
    df::job_item_vector_id vector_id;
    df::job_item_flags2 flags2;
    df::job_item_flags3 flags3;
    uint32_t flags4;
    uint32_t flags5;
    int32_t metal_ore;
    std::string reaction_class;
    std::string has_material_reaction_product;
    int32_t min_dimension; /*!< pure guess by context */
    int32_t reagent_index;
    std::vector<int32_t > contains; /*!< used with custom reactions */
    int32_t reaction_id;
    df::tool_uses has_tool_use;
    static struct_identity _identity;
  public:
    job_item();
  };
}
#endif
