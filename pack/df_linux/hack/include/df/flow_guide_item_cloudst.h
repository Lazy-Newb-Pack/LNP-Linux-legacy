/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_FLOW_GUIDE_ITEM_CLOUDST_H
#define DF_FLOW_GUIDE_ITEM_CLOUDST_H
#ifndef DF_COORD_H
#include "coord.h"
#endif
#ifndef DF_FLOW_GUIDE_H
#include "flow_guide.h"
#endif
#ifndef DF_ITEM_TYPE_H
#include "item_type.h"
#endif
namespace df {
  struct DFHACK_EXPORT flow_guide_item_cloudst : flow_guide {
    df::item_type item_type;
    int16_t item_subtype;
    int16_t mattype;
    int32_t matindex;
    int32_t unk_18;
    int32_t unk_1c;
    df::coord anon_1[15];
    static virtual_identity _identity;
  protected:
    flow_guide_item_cloudst(virtual_identity *_id = &flow_guide_item_cloudst::_identity);
    friend void *df::allocator_fn<flow_guide_item_cloudst>(void*,const void*);
  };
}
#endif
