/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_PLANT_RAW_H
#define DF_PLANT_RAW_H
#ifndef DF_PLANT_RAW_FLAGS_H
#include "plant_raw_flags.h"
#endif
namespace df {
  struct material;
  struct plant_growth;
  struct DFHACK_EXPORT plant_raw {
    std::string id;
    int32_t anon_1; /*!< v0.40.01 */
    std::vector<void* > anon_2; /*!< v0.40.01 */
    BitArray<df::plant_raw_flags> flags;
    std::string name;
    std::string name_plural;
    std::string adj;
    std::string seed_singular;
    std::string seed_plural;
    std::string leaves_singular; /*!< unused */
    std::string leaves_plural; /*!< unused */
    int32_t source_hfid;
    uint8_t unk1;
    uint8_t unk2;
    struct DFHACK_EXPORT T_tiles {
      uint8_t picked_tile;
      uint8_t dead_picked_tile;
      uint8_t shrub_tile;
      uint8_t dead_shrub_tile;
      uint8_t tree_tile; /*!< unused */
      uint8_t dead_tree_tile; /*!< unused */
      uint8_t sapling_tile;
      uint8_t dead_sapling_tile;
      uint8_t grass_tiles[16];
      uint8_t alt_grass_tiles[12];
      uint8_t tree_tiles[104];
      static struct_identity _identity;
    public:
      T_tiles();
    };
    T_tiles tiles;
    int32_t growdur;
    int32_t value;
    struct DFHACK_EXPORT T_colors {
      int8_t picked_color[3];
      int8_t dead_picked_color[3];
      int8_t shrub_color[3];
      int8_t dead_shrub_color[3];
      int8_t seed_color[3];
      int8_t tree_color[3];
      int8_t dead_tree_color[3];
      int8_t sapling_color[3];
      int8_t dead_sapling_color[3];
      int8_t grass_colors_0[20];
      int8_t grass_colors_1[20];
      int8_t grass_colors_2[20];
      static struct_identity _identity;
    public:
      T_colors();
    };
    T_colors colors;
    int32_t alt_period[2];
    int8_t shrub_drown_level;
    int8_t tree_drown_level;
    int8_t sapling_drown_level;
    int16_t frequency;
    int16_t clustersize;
    std::vector<std::string* > prefstring;
    std::vector<df::material* > material;
    struct DFHACK_EXPORT T_material_defs {
      int16_t type_basic_mat;
      int16_t type_tree;
      int16_t type_drink;
      int16_t type_seed;
      int16_t type_thread;
      int16_t type_mill;
      int16_t type_extract_vial;
      int16_t type_extract_barrel;
      int16_t type_extract_still_vial;
      int32_t idx_basic_mat;
      int32_t idx_tree;
      int32_t idx_drink;
      int32_t idx_seed;
      int32_t idx_thread;
      int32_t idx_mill;
      int32_t idx_extract_vial;
      int32_t idx_extract_barrel;
      int32_t idx_extract_still_vial;
      std::string str_basic_mat[3];
      std::string str_tree[3];
      std::string str_drink[3];
      std::string str_seed[3];
      std::string str_thread[3];
      std::string str_mill[3];
      std::string str_extract_vial[3];
      std::string str_extract_barrel[3];
      std::string str_extract_still_vial[3];
      static struct_identity _identity;
    public:
      T_material_defs();
    };
    T_material_defs material_defs;
    int32_t underground_depth_min;
    int32_t underground_depth_max;
    std::vector<df::plant_growth* > growths;
    std::string root_name;
    std::string trunk_name;
    std::string heavy_branch_name;
    std::string light_branch_name;
    std::string twig_name;
    std::string cap_name;
    int32_t trunk_period;
    int32_t heavy_branch_density;
    int32_t light_branch_density;
    int32_t max_trunk_height;
    int32_t heavy_branch_radius;
    int32_t light_branch_radius;
    int32_t trunk_branching;
    int32_t max_trunk_diameter;
    int32_t trunk_width_period;
    int32_t cap_period;
    int32_t cap_radius;
    int32_t root_density;
    int32_t root_radius;
    std::vector<void* > anon_3;
    std::vector<void* > anon_4;
    static struct_identity _identity;
    static std::vector<plant_raw*> &get_vector();
    static plant_raw *find(int id);
  public:
    plant_raw();
  };
}
#endif
