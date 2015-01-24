/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_MANDATE_H
#define DF_MANDATE_H
#ifndef DF_ITEM_TYPE_H
#include "item_type.h"
#endif
namespace df {
  struct unit;
  struct DFHACK_EXPORT mandate {
    df::unit* unit;
    int16_t mode; /*!< 0 export, 1 make, 2 guild jobs */
    df::item_type item_type;
    int16_t item_subtype;
    int16_t mat_type;
    int32_t mat_index;
    int16_t amount_total;
    int16_t amount_remaining;
    int32_t timeout_counter; /*!< counts once per 10 frames */
    int32_t timeout_limit; /*!< once counter passes limit, mandate ends */
    struct DFHACK_EXPORT T_punishment {
      int32_t hammerstrikes;
      int32_t prison_time;
      int32_t give_beating;
      static struct_identity _identity;
    public:
      T_punishment();
    };
    T_punishment punishment;
    uint8_t punish_multiple;
    int32_t unk4;
    static struct_identity _identity;
  public:
    mandate();
  };
}
#endif
