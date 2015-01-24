/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_BUILDING_TRACTION_BENCHST_H
#define DF_BUILDING_TRACTION_BENCHST_H
#ifndef DF_BUILDING_ACTUAL_H
#include "building_actual.h"
#endif
#ifndef DF_BUILDING_USERS_H
#include "building_users.h"
#endif
namespace df {
  struct DFHACK_EXPORT building_traction_benchst : building_actual {
    int16_t anon_1;
    df::building_users users;
    static virtual_identity _identity;
  protected:
    building_traction_benchst(virtual_identity *_id = &building_traction_benchst::_identity);
    friend void *df::allocator_fn<building_traction_benchst>(void*,const void*);
  };
}
#endif
