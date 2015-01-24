/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_ITEM_ACTUAL_H
#define DF_ITEM_ACTUAL_H
#ifndef DF_ITEM_H
#include "item.h"
#endif
#ifndef DF_TEMPERATUREST_H
#include "temperaturest.h"
#endif
namespace df {
  struct item_history_info;
  struct item_magicness;
  struct spatter;
  struct DFHACK_EXPORT item_actual : item {
    int32_t stack_size;
    df::item_history_info** history_info;
    std::vector<df::item_magicness* >* magic;
    std::vector<df::spatter* >* contaminants;
    df::temperaturest temperature;
    int16_t wear;
    int32_t wear_timer; /*!< counts up to 806400 */
    int32_t anon_1; /*!< v0.34.01 */
    int32_t temp_updated_frame;
    static virtual_identity _identity;
  protected:
    item_actual(virtual_identity *_id = &item_actual::_identity);
    friend void *df::allocator_fn<item_actual>(void*,const void*);
  };
}
#endif
