/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_ITEM_MAGICNESS_H
#define DF_ITEM_MAGICNESS_H
#ifndef DF_ITEM_MAGICNESS_TYPE_H
#include "item_magicness_type.h"
#endif
namespace df {
  struct DFHACK_EXPORT item_magicness {
    df::item_magicness_type type;
    int16_t value; /*!< boosts item value by 50*this */
    int16_t anon_1;
    int32_t flags; /*!< 1=does not show up in item description or alter item value */
    static struct_identity _identity;
  public:
    item_magicness();
  };
}
#endif
