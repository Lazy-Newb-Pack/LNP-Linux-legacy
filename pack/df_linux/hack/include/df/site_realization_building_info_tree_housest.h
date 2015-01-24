/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_SITE_REALIZATION_BUILDING_INFO_TREE_HOUSEST_H
#define DF_SITE_REALIZATION_BUILDING_INFO_TREE_HOUSEST_H
#ifndef DF_LANGUAGE_NAME_H
#include "language_name.h"
#endif
#ifndef DF_SITE_REALIZATION_BUILDING_INFOST_H
#include "site_realization_building_infost.h"
#endif
#ifndef DF_TREE_HOUSE_TYPE_H
#include "tree_house_type.h"
#endif
namespace df {
  struct DFHACK_EXPORT site_realization_building_info_tree_housest : site_realization_building_infost {
    df::tree_house_type type;
    int32_t unk_8;
    df::language_name name;
    static virtual_identity _identity;
  protected:
    site_realization_building_info_tree_housest(virtual_identity *_id = &site_realization_building_info_tree_housest::_identity);
    friend void *df::allocator_fn<site_realization_building_info_tree_housest>(void*,const void*);
  };
}
#endif
