/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_ABSTRACT_BUILDING_KEEPST_H
#define DF_ABSTRACT_BUILDING_KEEPST_H
#ifndef DF_ABSTRACT_BUILDING_H
#include "abstract_building.h"
#endif
#ifndef DF_LANGUAGE_NAME_H
#include "language_name.h"
#endif
namespace df {
  struct DFHACK_EXPORT abstract_building_keepst : abstract_building {
    df::language_name name;
    static virtual_identity _identity;
  protected:
    abstract_building_keepst(virtual_identity *_id = &abstract_building_keepst::_identity);
    friend void *df::allocator_fn<abstract_building_keepst>(void*,const void*);
  };
}
#endif
