/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_SITE_REALIZATION_BUILDING_INFO_HILLOCK_HOUSEST_H
#define DF_SITE_REALIZATION_BUILDING_INFO_HILLOCK_HOUSEST_H
#ifndef DF_HILLOCK_HOUSE_TYPE_H
#include "hillock_house_type.h"
#endif
#ifndef DF_SITE_REALIZATION_BUILDING_INFOST_H
#include "site_realization_building_infost.h"
#endif
namespace df {
  struct DFHACK_EXPORT site_realization_building_info_hillock_housest : site_realization_building_infost {
    df::hillock_house_type type;
    static virtual_identity _identity;
  protected:
    site_realization_building_info_hillock_housest(virtual_identity *_id = &site_realization_building_info_hillock_housest::_identity);
    friend void *df::allocator_fn<site_realization_building_info_hillock_housest>(void*,const void*);
  };
}
#endif
