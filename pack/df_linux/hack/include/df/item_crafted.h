/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_ITEM_CRAFTED_H
#define DF_ITEM_CRAFTED_H
#ifndef DF_ITEM_ACTUAL_H
#include "item_actual.h"
#endif
#ifndef DF_ITEM_QUALITY_H
#include "item_quality.h"
#endif
#ifndef DF_JOB_SKILL_H
#include "job_skill.h"
#endif
namespace df {
  struct DFHACK_EXPORT item_crafted : item_actual {
    int16_t mat_type;
    int32_t mat_index;
    int16_t maker_race;
    df::item_quality quality;
    enum_field<df::job_skill,int32_t> skill_used;
    int32_t maker;
    int32_t masterpiece_event;
    static virtual_identity _identity;
  protected:
    item_crafted(virtual_identity *_id = &item_crafted::_identity);
    friend void *df::allocator_fn<item_crafted>(void*,const void*);
  };
}
#endif
