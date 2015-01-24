/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_BUILDING_STOCKPILEST_H
#define DF_BUILDING_STOCKPILEST_H
#ifndef DF_BUILDING_H
#include "building.h"
#endif
#ifndef DF_ITEM_TYPE_H
#include "item_type.h"
#endif
#ifndef DF_STOCKPILE_LINKS_H
#include "stockpile_links.h"
#endif
#ifndef DF_STOCKPILE_SETTINGS_H
#include "stockpile_settings.h"
#endif
namespace df {
  struct hauling_stop;
  struct DFHACK_EXPORT building_stockpilest : building {
    df::stockpile_settings settings;
    int16_t max_barrels;
    int16_t max_bins;
    int16_t max_wheelbarrows;
    std::vector<df::item_type > container_type;
    std::vector<int32_t > container_item_id;
    std::vector<int16_t > container_x;
    std::vector<int16_t > container_y;
    df::stockpile_links links;
    int32_t use_links_only;
    int32_t stockpile_number;
    std::vector<df::hauling_stop* > linked_stops;
    static virtual_identity _identity;
  protected:
    building_stockpilest(virtual_identity *_id = &building_stockpilest::_identity);
    friend void *df::allocator_fn<building_stockpilest>(void*,const void*);
  };
}
#endif
