/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_BUILDING_DEF_ITEM_H
#define DF_BUILDING_DEF_ITEM_H
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
#ifndef DF_TOOL_USES_H
#include "tool_uses.h"
#endif
namespace df {
  struct DFHACK_EXPORT building_def_item {
    df::item_type item_type;
    int16_t item_subtype;
    int16_t mat_type;
    int16_t mat_index;
    std::string reaction_class;
    std::string has_material_reaction_product;
    df::job_item_flags1 flags1;
    df::job_item_flags2 flags2;
    df::job_item_flags3 flags3;
    uint32_t flags4;
    uint32_t flags5;
    int32_t metal_ore;
    int32_t min_dimension;
    int32_t quantity;
    df::tool_uses has_tool_use;
    std::string item_str[2];
    std::string material_str[3];
    std::string metal_ore_str;
    static struct_identity _identity;
  public:
    building_def_item();
  };
}
#endif
