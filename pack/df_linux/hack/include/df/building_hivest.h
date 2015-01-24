/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_BUILDING_HIVEST_H
#define DF_BUILDING_HIVEST_H
#ifndef DF_BUILDING_ACTUAL_H
#include "building_actual.h"
#endif
#ifndef DF_HIVE_FLAGS_H
#include "hive_flags.h"
#endif
namespace df {
  struct DFHACK_EXPORT building_hivest : building_actual {
    df::hive_flags hive_flags;
    int32_t split_timer; /*!< up to 100800 */
    int32_t activity_timer; /*!< up to 100800000; checks timer%hive_product.time[i]==0 */
    int32_t install_timer; /*!< down from 1200 */
    int32_t gather_timer; /*!< down from 1200 */
    static virtual_identity _identity;
  protected:
    building_hivest(virtual_identity *_id = &building_hivest::_identity);
    friend void *df::allocator_fn<building_hivest>(void*,const void*);
  };
}
#endif
