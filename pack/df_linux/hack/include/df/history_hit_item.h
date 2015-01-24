/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_HISTORY_HIT_ITEM_H
#define DF_HISTORY_HIT_ITEM_H
#ifndef DF_ITEM_TYPE_H
#include "item_type.h"
#endif
namespace df {
  struct DFHACK_EXPORT history_hit_item {
    int32_t item;
    df::item_type item_type;
    int16_t item_subtype;
    int16_t mattype;
    int32_t matindex;
    int32_t shooter_item;
    df::item_type shooter_item_type;
    int16_t shooter_item_subtype;
    int16_t shooter_mattype;
    int32_t shooter_matindex;
    static struct_identity _identity;
  public:
    history_hit_item();
  };
}
#endif
