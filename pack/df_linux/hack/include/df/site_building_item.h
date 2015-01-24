/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_SITE_BUILDING_ITEM_H
#define DF_SITE_BUILDING_ITEM_H
#ifndef DF_ITEM_TYPE_H
#include "item_type.h"
#endif
namespace df {
  struct DFHACK_EXPORT site_building_item {
    int32_t race;
    df::item_type item_type;
    int16_t item_subtype;
    int16_t mat_type;
    int32_t mat_index;
    static struct_identity _identity;
  public:
    site_building_item();
  };
}
#endif
