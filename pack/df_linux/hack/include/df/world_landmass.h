/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_WORLD_LANDMASS_H
#define DF_WORLD_LANDMASS_H
#ifndef DF_LANGUAGE_NAME_H
#include "language_name.h"
#endif
namespace df {
  struct DFHACK_EXPORT world_landmass {
    df::language_name name;
    int32_t index;
    int32_t area;
    int32_t min_x; /*!< v0.40.01 */
    int32_t max_x; /*!< v0.40.01 */
    int32_t min_y; /*!< v0.40.01 */
    int32_t max_y; /*!< v0.40.01 */
    std::vector<void* > unk_74;
    std::vector<void* > unk_84;
    static struct_identity _identity;
    static std::vector<world_landmass*> &get_vector();
    static world_landmass *find(int id);
  public:
    world_landmass();
  };
}
#endif
