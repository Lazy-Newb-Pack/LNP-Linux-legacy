/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_WORLD_UNDERGROUND_REGION_H
#define DF_WORLD_UNDERGROUND_REGION_H
#ifndef DF_COORD2D_PATH_H
#include "coord2d_path.h"
#endif
#ifndef DF_LANGUAGE_NAME_H
#include "language_name.h"
#endif
namespace df {
  struct feature_init;
  struct DFHACK_EXPORT world_underground_region {
    enum T_type : int16_t {
      Cavern,
      MagmaSea,
      Underworld
    };
    T_type type;
    df::language_name name;
    int32_t index;
    int16_t layer_depth; /*!< 0-2 caves, 3 magma sea, 4 hell */
    int16_t layer_depth_p1a; /*!< +1 */
    int16_t layer_depth_p1b;
    int16_t unk_7a;
    int16_t unk_7c;
    int16_t unk_7e;
    int16_t unk_80;
    int16_t unk_82;
    int16_t passage_density;
    df::coord2d_path region_coords;
    std::vector<int16_t > region_min_z;
    std::vector<int16_t > region_max_z;
    std::vector<void* > unk_c8;
    df::feature_init* feature_init;
    static struct_identity _identity;
    static std::vector<world_underground_region*> &get_vector();
    static world_underground_region *find(int id);
  public:
    world_underground_region();
  };
  template<> struct DFHACK_EXPORT identity_traits<world_underground_region::T_type> {
    static enum_identity identity;
    static enum_identity *get() { return &identity; }
  };
  template<> struct DFHACK_EXPORT enum_traits<world_underground_region::T_type> {
    typedef int16_t base_type;
    typedef world_underground_region::T_type enum_type;
    static const base_type first_item_value = 0;
    static const base_type last_item_value = 2;
    static inline bool is_valid(enum_type value) {
      return (base_type(value) >= first_item_value && base_type(value) <= last_item_value);
    }
    static const enum_type first_item = (enum_type)first_item_value;
    static const enum_type last_item = (enum_type)last_item_value;
    static const char *const key_table[3];
  };
}
#endif
