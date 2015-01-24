/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_ITEM_FILTER_SPEC_H
#define DF_ITEM_FILTER_SPEC_H
#ifndef DF_ENTITY_MATERIAL_CATEGORY_H
#include "entity_material_category.h"
#endif
#ifndef DF_ITEM_TYPE_H
#include "item_type.h"
#endif
namespace df {
  struct DFHACK_EXPORT item_filter_spec {
    df::item_type item_type;
    int16_t item_subtype;
    df::entity_material_category material_class;
    int16_t mattype;
    int32_t matindex;
    static struct_identity _identity;
  public:
    item_filter_spec();
  };
}
#endif
