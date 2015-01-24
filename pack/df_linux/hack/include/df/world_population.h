/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_WORLD_POPULATION_H
#define DF_WORLD_POPULATION_H
#ifndef DF_WORLD_POPULATION_TYPE_H
#include "world_population_type.h"
#endif
namespace df {
  struct DFHACK_EXPORT world_population {
    enum_field<df::world_population_type,int16_t> type;
    union DFHACK_EXPORT {
      int16_t race;
      int16_t plant;
    };
    int32_t count_min;
    int32_t count_max;
    int32_t unk_c; /*!< v0.40.01 */
    int32_t owner;
    int32_t unk_10;
    int32_t unk_14;
    int32_t unk_18; /*!< v0.34.01 */
    int32_t unk_1c; /*!< v0.34.01 */
    static struct_identity _identity;
  public:
    world_population();
  };
}
#endif
