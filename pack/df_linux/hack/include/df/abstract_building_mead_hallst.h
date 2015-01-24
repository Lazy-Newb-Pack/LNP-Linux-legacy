/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_ABSTRACT_BUILDING_MEAD_HALLST_H
#define DF_ABSTRACT_BUILDING_MEAD_HALLST_H
#ifndef DF_ABSTRACT_BUILDING_H
#include "abstract_building.h"
#endif
#ifndef DF_LANGUAGE_NAME_H
#include "language_name.h"
#endif
#ifndef DF_SITE_BUILDING_ITEM_H
#include "site_building_item.h"
#endif
namespace df {
  struct DFHACK_EXPORT abstract_building_mead_hallst : abstract_building {
    df::language_name name;
    df::site_building_item item1;
    df::site_building_item item2;
    static virtual_identity _identity;
  protected:
    abstract_building_mead_hallst(virtual_identity *_id = &abstract_building_mead_hallst::_identity);
    friend void *df::allocator_fn<abstract_building_mead_hallst>(void*,const void*);
  };
}
#endif
