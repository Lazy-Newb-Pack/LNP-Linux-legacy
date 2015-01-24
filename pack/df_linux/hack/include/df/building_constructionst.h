/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_BUILDING_CONSTRUCTIONST_H
#define DF_BUILDING_CONSTRUCTIONST_H
#ifndef DF_BUILDING_ACTUAL_H
#include "building_actual.h"
#endif
#ifndef DF_CONSTRUCTION_TYPE_H
#include "construction_type.h"
#endif
namespace df {
  struct DFHACK_EXPORT building_constructionst : building_actual {
    df::construction_type type;
    static virtual_identity _identity;
  protected:
    building_constructionst(virtual_identity *_id = &building_constructionst::_identity);
    friend void *df::allocator_fn<building_constructionst>(void*,const void*);
  };
}
#endif
