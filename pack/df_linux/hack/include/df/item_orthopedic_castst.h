/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_ITEM_ORTHOPEDIC_CASTST_H
#define DF_ITEM_ORTHOPEDIC_CASTST_H
#ifndef DF_ITEM_CONSTRUCTED_H
#include "item_constructed.h"
#endif
namespace df {
  struct DFHACK_EXPORT item_orthopedic_castst : item_constructed {
    std::string body_part;
    std::string material;
    static virtual_identity _identity;
  protected:
    item_orthopedic_castst(virtual_identity *_id = &item_orthopedic_castst::_identity);
    friend void *df::allocator_fn<item_orthopedic_castst>(void*,const void*);
  };
}
#endif
