/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_SITE_REALIZATION_BUILDING_INFO_MARKET_SQUAREST_H
#define DF_SITE_REALIZATION_BUILDING_INFO_MARKET_SQUAREST_H
#ifndef DF_SITE_REALIZATION_BUILDING_INFOST_H
#include "site_realization_building_infost.h"
#endif
#ifndef DF_SITE_SHOP_TYPE_H
#include "site_shop_type.h"
#endif
namespace df {
  struct DFHACK_EXPORT site_realization_building_info_market_squarest : site_realization_building_infost {
    df::site_shop_type type;
    static virtual_identity _identity;
  protected:
    site_realization_building_info_market_squarest(virtual_identity *_id = &site_realization_building_info_market_squarest::_identity);
    friend void *df::allocator_fn<site_realization_building_info_market_squarest>(void*,const void*);
  };
}
#endif
