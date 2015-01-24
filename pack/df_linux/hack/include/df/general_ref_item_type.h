/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_GENERAL_REF_ITEM_TYPE_H
#define DF_GENERAL_REF_ITEM_TYPE_H
#ifndef DF_GENERAL_REF_H
#include "general_ref.h"
#endif
#ifndef DF_ITEM_TYPE_H
#include "item_type.h"
#endif
namespace df {
  struct DFHACK_EXPORT general_ref_item_type : general_ref {
    enum_field<df::item_type,int32_t> type;
    int32_t subtype;
    int16_t mat_type;
    int16_t mat_index;
    static virtual_identity _identity;
  protected:
    general_ref_item_type(virtual_identity *_id = &general_ref_item_type::_identity);
    friend void *df::allocator_fn<general_ref_item_type>(void*,const void*);
  };
}
#endif
