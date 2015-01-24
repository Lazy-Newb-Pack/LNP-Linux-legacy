/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_DYE_INFO_H
#define DF_DYE_INFO_H
#ifndef DF_ITEM_QUALITY_H
#include "item_quality.h"
#endif
#ifndef DF_SKILL_RATING_H
#include "skill_rating.h"
#endif
namespace df {
  struct DFHACK_EXPORT dye_info {
    int16_t mat_type;
    int32_t mat_index;
    int32_t dyer;
    df::item_quality quality;
    enum_field<df::skill_rating,int16_t> skill_rating; /*!< at the moment of creation */
    int32_t anon_1;
    static struct_identity _identity;
  public:
    dye_info();
  };
}
#endif
