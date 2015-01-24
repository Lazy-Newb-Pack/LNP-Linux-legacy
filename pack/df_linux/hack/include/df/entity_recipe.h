/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_ENTITY_RECIPE_H
#define DF_ENTITY_RECIPE_H
#ifndef DF_ITEM_TYPE_H
#include "item_type.h"
#endif
namespace df {
  struct DFHACK_EXPORT entity_recipe {
    int16_t subtype;
    std::vector<df::item_type > item_types;
    std::vector<int16_t > item_subtypes;
    std::vector<int16_t > mat_types;
    std::vector<int16_t > mat_indices;
    static struct_identity _identity;
  public:
    entity_recipe();
  };
}
#endif
