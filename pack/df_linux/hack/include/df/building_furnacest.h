/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_BUILDING_FURNACEST_H
#define DF_BUILDING_FURNACEST_H
#ifndef DF_BUILDING_ACTUAL_H
#include "building_actual.h"
#endif
#ifndef DF_FURNACE_TYPE_H
#include "furnace_type.h"
#endif
#ifndef DF_STOCKPILE_LINKS_H
#include "stockpile_links.h"
#endif
#ifndef DF_WORKSHOP_PROFILE_H
#include "workshop_profile.h"
#endif
namespace df {
  struct DFHACK_EXPORT building_furnacest : building_actual {
    std::vector<int32_t > melt_remainder;
    int16_t unk_108;
    df::furnace_type type;
    df::workshop_profile profile;
    df::stockpile_links links;
    int32_t custom_type;
    static virtual_identity _identity;
  protected:
    building_furnacest(virtual_identity *_id = &building_furnacest::_identity);
    friend void *df::allocator_fn<building_furnacest>(void*,const void*);
  };
}
#endif
