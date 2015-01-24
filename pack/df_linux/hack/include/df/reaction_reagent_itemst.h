/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_REACTION_REAGENT_ITEMST_H
#define DF_REACTION_REAGENT_ITEMST_H
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
#ifndef DF_REACTION_REAGENT_H
#include "reaction_reagent.h"
#endif
#ifndef DF_TOOL_USES_H
#include "tool_uses.h"
#endif
namespace df {
  struct DFHACK_EXPORT reaction_reagent_itemst : reaction_reagent {
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
    std::vector<int32_t > contains;
    df::tool_uses has_tool_use;
    std::string item_str[2];
    std::string material_str[3];
    std::string metal_ore_str;
    std::vector<std::string* > contains_str;
    static virtual_identity _identity;
  protected:
    reaction_reagent_itemst(virtual_identity *_id = &reaction_reagent_itemst::_identity);
    friend void *df::allocator_fn<reaction_reagent_itemst>(void*,const void*);
  };
}
#endif
