/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_ITEM_TOOLST_H
#define DF_ITEM_TOOLST_H
#ifndef DF_ITEM_CONSTRUCTED_H
#include "item_constructed.h"
#endif
#ifndef DF_ITEM_STOCKPILE_REF_H
#include "item_stockpile_ref.h"
#endif
namespace df {
  struct itemdef_toolst;
  struct DFHACK_EXPORT item_toolst : item_constructed {
    df::itemdef_toolst* subtype;
    int32_t sharpness;
    df::item_stockpile_ref stockpile;
    int32_t vehicle_id; /*!< v0.34.08 */
    static virtual_identity _identity;
  protected:
    item_toolst(virtual_identity *_id = &item_toolst::_identity);
    friend void *df::allocator_fn<item_toolst>(void*,const void*);
  };
}
#endif
