/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_GENERAL_REF_NEMESIS_H
#define DF_GENERAL_REF_NEMESIS_H
#ifndef DF_GENERAL_REF_H
#include "general_ref.h"
#endif
namespace df {
  struct DFHACK_EXPORT general_ref_nemesis : general_ref {
    int32_t nemesis_id;
    static virtual_identity _identity;
  protected:
    general_ref_nemesis(virtual_identity *_id = &general_ref_nemesis::_identity);
    friend void *df::allocator_fn<general_ref_nemesis>(void*,const void*);
  };
}
#endif
