/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_UNIT_SKILL_H
#define DF_UNIT_SKILL_H
#ifndef DF_JOB_SKILL_H
#include "job_skill.h"
#endif
#ifndef DF_SKILL_RATING_H
#include "skill_rating.h"
#endif
namespace df {
  struct DFHACK_EXPORT unit_skill {
    df::job_skill id;
    df::skill_rating rating;
    int32_t experience;
    int32_t unused_counter;
    int32_t rusty;
    int32_t rust_counter;
    int32_t demotion_counter;
    int32_t unk_1c;
    static struct_identity _identity;
  public:
    unit_skill();
  };
}
#endif
