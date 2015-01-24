/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_ITEM_SLABST_H
#define DF_ITEM_SLABST_H
#ifndef DF_ITEM_CONSTRUCTED_H
#include "item_constructed.h"
#endif
#ifndef DF_SLAB_ENGRAVING_TYPE_H
#include "slab_engraving_type.h"
#endif
namespace df {
  struct DFHACK_EXPORT item_slabst : item_constructed {
    std::string description;
    int32_t topic; /*!< or interaction id for secrets? */
    df::slab_engraving_type engraving_type;
    static virtual_identity _identity;
  protected:
    item_slabst(virtual_identity *_id = &item_slabst::_identity);
    friend void *df::allocator_fn<item_slabst>(void*,const void*);
  };
}
#endif
