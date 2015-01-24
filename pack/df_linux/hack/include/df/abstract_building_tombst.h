/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_ABSTRACT_BUILDING_TOMBST_H
#define DF_ABSTRACT_BUILDING_TOMBST_H
#ifndef DF_ABSTRACT_BUILDING_H
#include "abstract_building.h"
#endif
#ifndef DF_ABSTRACT_BUILDING_UNK_H
#include "abstract_building_unk.h"
#endif
#ifndef DF_LANGUAGE_NAME_H
#include "language_name.h"
#endif
namespace df {
  struct DFHACK_EXPORT abstract_building_tombst : abstract_building {
    df::language_name name;
    df::abstract_building_unk unk;
    int32_t anon_1;
    static virtual_identity _identity;
  protected:
    abstract_building_tombst(virtual_identity *_id = &abstract_building_tombst::_identity);
    friend void *df::allocator_fn<abstract_building_tombst>(void*,const void*);
  };
}
#endif
