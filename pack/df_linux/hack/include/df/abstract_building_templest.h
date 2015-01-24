/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_ABSTRACT_BUILDING_TEMPLEST_H
#define DF_ABSTRACT_BUILDING_TEMPLEST_H
#ifndef DF_ABSTRACT_BUILDING_H
#include "abstract_building.h"
#endif
#ifndef DF_LANGUAGE_NAME_H
#include "language_name.h"
#endif
namespace df {
  struct DFHACK_EXPORT abstract_building_templest : abstract_building {
    int32_t deity;
    int32_t religion; /*!< returned by the vmethod after the destructor */
    df::language_name name;
    static virtual_identity _identity;
  protected:
    abstract_building_templest(virtual_identity *_id = &abstract_building_templest::_identity);
    friend void *df::allocator_fn<abstract_building_templest>(void*,const void*);
  };
}
#endif
