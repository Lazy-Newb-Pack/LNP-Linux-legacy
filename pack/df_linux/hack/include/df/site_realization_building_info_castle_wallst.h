/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_SITE_REALIZATION_BUILDING_INFO_CASTLE_WALLST_H
#define DF_SITE_REALIZATION_BUILDING_INFO_CASTLE_WALLST_H
#ifndef DF_SITE_BUILDING_ITEM_H
#include "site_building_item.h"
#endif
#ifndef DF_SITE_REALIZATION_BUILDING_INFOST_H
#include "site_realization_building_infost.h"
#endif
namespace df {
  struct DFHACK_EXPORT site_realization_building_info_castle_wallst : site_realization_building_infost {
    int32_t unk_4;
    int32_t unk_8;
    int32_t unk_c;
    int32_t unk_10;
    int32_t unk_14;
    int32_t unk_18;
    int32_t unk_1c;
    int32_t unk_20;
    df::site_building_item item1;
    df::site_building_item item2;
    static virtual_identity _identity;
  protected:
    site_realization_building_info_castle_wallst(virtual_identity *_id = &site_realization_building_info_castle_wallst::_identity);
    friend void *df::allocator_fn<site_realization_building_info_castle_wallst>(void*,const void*);
  };
}
#endif
