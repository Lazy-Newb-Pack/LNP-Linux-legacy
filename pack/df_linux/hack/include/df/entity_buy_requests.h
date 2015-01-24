/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_ENTITY_BUY_REQUESTS_H
#define DF_ENTITY_BUY_REQUESTS_H
#ifndef DF_ITEM_TYPE_H
#include "item_type.h"
#endif
#ifndef DF_JOB_MATERIAL_CATEGORY_H
#include "job_material_category.h"
#endif
namespace df {
  struct DFHACK_EXPORT entity_buy_requests {
    std::vector<df::item_type > item_type; /*!< guess */
    std::vector<int16_t > item_subtype; /*!< guess */
    std::vector<int16_t > unk_20;
    std::vector<int16_t > unk_30;
    std::vector<df::job_material_category > mat_cats;
    std::vector<int8_t > priority;
    static struct_identity _identity;
  public:
    entity_buy_requests();
  };
}
#endif
