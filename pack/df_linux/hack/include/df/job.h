/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_JOB_H
#define DF_JOB_H
#ifndef DF_COORD_H
#include "coord.h"
#endif
#ifndef DF_COORD_PATH_H
#include "coord_path.h"
#endif
#ifndef DF_ITEM_TYPE_H
#include "item_type.h"
#endif
#ifndef DF_JOB_FLAGS_H
#include "job_flags.h"
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
  struct general_ref;
  struct job_item;
  struct job_item_ref;
  struct job_list_link;
  struct specific_ref;
  struct DFHACK_EXPORT job {
    int32_t id;
    df::job_list_link* list_link;
    int32_t unk_v4020_1; /*!< v0.40.20 */
    df::job_type job_type;
    int32_t job_subtype;
    df::coord pos;
    int32_t completion_timer; /*!< -1 every time unit.counters.job_counter is below 0 */
    uint32_t unk4; /*!< garbage, but serialized */
    df::job_flags flags;
    int16_t mat_type;
    int32_t mat_index;
    int16_t unk5;
    df::item_type item_type; /*!< for Bait Trap jobs */
    int16_t item_subtype; /*!< for StoreInStockpile: hauler_type */
    df::stockpile_group_set item_category;
    int32_t hist_figure_id;
    df::job_material_category material_category;
    std::string reaction_name;
    int32_t expire_timer; /*!< for stockpiling, +1 per 50 ticks if no worker; del when 20 */
    int16_t recheck_cntdn; /*!< for process_jobs */
    int16_t wait_timer; /*!< for units to leave build sites; to recheck stockpiles */
    int32_t unk11; /*!< v0.34.08 */
    std::vector<df::job_item_ref* > items;
    std::vector<df::specific_ref* > specific_refs;
    std::vector<df::general_ref* > general_refs;
    std::vector<df::job_item* > job_items;
    df::coord_path guide_path; /*!< v0.34.08 */
    int32_t cur_path_index; /*!< v0.34.08 */
    df::coord unk_v4020_2; /*!< v0.40.20 */
    static struct_identity _identity;
    typedef job* key_pointer_type;
    typedef int32_t key_field_type;
    static int binsearch_index(const std::vector<job*> &vec, key_field_type key, bool exact = true);
    static int binsearch_index(const std::vector<job*> &vec, key_pointer_type key, bool exact = true);
  public:
    job();
  };
}
#endif
