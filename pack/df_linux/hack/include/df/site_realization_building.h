/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_SITE_REALIZATION_BUILDING_H
#define DF_SITE_REALIZATION_BUILDING_H
#ifndef DF_SITE_BUILDING_ITEM_H
#include "site_building_item.h"
#endif
#ifndef DF_SITE_REALIZATION_BUILDING_TYPE_H
#include "site_realization_building_type.h"
#endif
namespace df {
  struct site_realization_building_infost;
  struct world_site_inhabitant;
  struct DFHACK_EXPORT site_realization_building {
    int32_t id;
    df::site_realization_building_type type;
    int32_t min_x; /*!< in tiles relative to site */
    int32_t min_y;
    int32_t max_x;
    int32_t max_y;
    int32_t unk_18;
    std::vector<df::world_site_inhabitant* > inhabitants;
    int32_t unk_2c;
    df::site_building_item item;
    int32_t abstract_building_id; /*!< used for temple and mead hall */
    int32_t unk_44;
    df::site_realization_building_infost* building_info;
    struct DFHACK_EXPORT T_unk_4c {
      int32_t unk_0;
      int32_t unk_4;
      int32_t owner;
      int32_t unk_c;
      int32_t unk_10;
      int32_t unk_14;
      static struct_identity _identity;
    public:
      T_unk_4c();
    };
    std::vector<T_unk_4c* > unk_4c;
    int32_t unk_5c; /*!< bit 0x01 == abandoned */
    std::vector<void* > unk_60;
    int32_t unk_v40_1; /*!< v0.40.01 */
    static struct_identity _identity;
    typedef site_realization_building* key_pointer_type;
    typedef int32_t key_field_type;
    static int binsearch_index(const std::vector<site_realization_building*> &vec, key_field_type key, bool exact = true);
    static int binsearch_index(const std::vector<site_realization_building*> &vec, key_pointer_type key, bool exact = true);
  public:
    site_realization_building();
  };
}
#endif
