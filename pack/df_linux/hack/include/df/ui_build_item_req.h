/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_UI_BUILD_ITEM_REQ_H
#define DF_UI_BUILD_ITEM_REQ_H
#ifndef DF_JOB_ITEM_FILTER_H
#include "job_item_filter.h"
#endif
namespace df {
  struct item;
  /**
   * When creating a building, one record per required item type.
   * E.g. Soap Maker's workshop requires a bucket and a building material.
   */
  struct DFHACK_EXPORT ui_build_item_req {
    df::job_item_filter filter;
    std::vector<df::item* > candidates;
    std::vector<char > candidate_selected;
    std::vector<int16_t > unk_a0;
    std::vector<char > candidate_enabled;
    int16_t count_required;
    int16_t count_max; /*!< if 0, fixed at required */
    int16_t count_provided;
    static struct_identity _identity;
  public:
    ui_build_item_req();
  };
}
#endif
