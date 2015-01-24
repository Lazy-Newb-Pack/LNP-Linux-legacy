/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_VEHICLE_H
#define DF_VEHICLE_H
#ifndef DF_COORD_H
#include "coord.h"
#endif
namespace df {
  struct DFHACK_EXPORT vehicle {
    int32_t id;
    int32_t item_id;
    int32_t offset_x; /*!< -50000..50000 */
    int32_t offset_y;
    int32_t offset_z;
    int32_t speed_x;
    int32_t speed_y;
    int32_t speed_z;
    char anon_1[16];
    int32_t route_id;
    df::coord pos;
    int32_t time_stopped; /*!< frames, up to 1000 */
    static struct_identity _identity;
    typedef vehicle* key_pointer_type;
    typedef int32_t key_field_type;
    static int binsearch_index(const std::vector<vehicle*> &vec, key_field_type key, bool exact = true);
    static int binsearch_index(const std::vector<vehicle*> &vec, key_pointer_type key, bool exact = true);
    static std::vector<vehicle*> &get_vector();
    static vehicle *find(key_field_type id);
  public:
    vehicle();
  };
}
#endif
