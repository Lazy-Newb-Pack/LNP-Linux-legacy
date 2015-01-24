/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_JOB_ITEM_FILTER_H
#define DF_JOB_ITEM_FILTER_H
#ifndef DF_COORD_H
#include "coord.h"
#endif
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
#ifndef DF_JOB_SKILL_H
#include "job_skill.h"
#endif
#ifndef DF_TOOL_USES_H
#include "tool_uses.h"
#endif
namespace df {
  struct building;
  struct item;
  struct job;
  struct unit;
  struct DFHACK_EXPORT job_item_filter {
    df::item_type item_type;
    int16_t item_subtype;
    int16_t mat_type;
    int32_t mat_index;
    df::job_item_flags1 flags1;
    std::vector<df::item* >* item_vector;
    bool use_mat_index;
    df::job_item_flags2 flags2;
    bool use_flags2;
    df::job_item_flags3 flags3;
    bool use_flags3;
    uint32_t flags4;
    bool use_flags4;
    uint32_t flags5;
    bool use_flags5;
    std::string reaction_class;
    std::string has_material_reaction_product;
    int32_t metal_ore;
    bool use_metal_ore;
    bool use_reaction_class;
    bool use_reaction_product;
    int32_t min_dimension;
    int32_t reaction_id;
    std::vector<int32_t > contains;
    bool use_contains;
    df::tool_uses has_tool_use;
    df::job_skill has_melee_skill; /*!< v0.34.01-02 */
    int8_t unk_v40_1; /*!< noticed in v0.40.24 */
    df::coord pos;
    df::unit* unit;
    df::job* job;
    df::building* building;
    int32_t unk_74;
    std::vector<int32_t > burrows;
    bool use_burrows;
    std::vector<df::building* >* take_from; /*!< v0.34.08 */
    static struct_identity _identity;
  public:
    job_item_filter();
  };
}
#endif
