/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_ABSTRACT_BUILDING_DARK_TOWERST_H
#define DF_ABSTRACT_BUILDING_DARK_TOWERST_H
#ifndef DF_ABSTRACT_BUILDING_H
#include "abstract_building.h"
#endif
#ifndef DF_LANGUAGE_NAME_H
#include "language_name.h"
#endif
namespace df {
  struct DFHACK_EXPORT abstract_building_dark_towerst : abstract_building {
    df::language_name name;
    static virtual_identity _identity;
  protected:
    abstract_building_dark_towerst(virtual_identity *_id = &abstract_building_dark_towerst::_identity);
    friend void *df::allocator_fn<abstract_building_dark_towerst>(void*,const void*);
  };
}
#endif
