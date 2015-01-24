/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_BUILDING_WORKSHOPST_H
#define DF_BUILDING_WORKSHOPST_H
#ifndef DF_BUILDING_ACTUAL_H
#include "building_actual.h"
#endif
#ifndef DF_MACHINE_INFO_H
#include "machine_info.h"
#endif
#ifndef DF_STOCKPILE_LINKS_H
#include "stockpile_links.h"
#endif
#ifndef DF_WORKSHOP_PROFILE_H
#include "workshop_profile.h"
#endif
#ifndef DF_WORKSHOP_TYPE_H
#include "workshop_type.h"
#endif
namespace df {
  struct DFHACK_EXPORT building_workshopst : building_actual {
    df::workshop_type type;
    df::workshop_profile profile;
    df::stockpile_links links;
    df::machine_info machine;
    int32_t custom_type;
    static virtual_identity _identity;
  protected:
    building_workshopst(virtual_identity *_id = &building_workshopst::_identity);
    friend void *df::allocator_fn<building_workshopst>(void*,const void*);
  };
}
#endif
