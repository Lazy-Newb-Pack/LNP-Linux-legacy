/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_WORLD_REGION_DETAILS_H
#define DF_WORLD_REGION_DETAILS_H
#ifndef DF_COORD2D_H
#include "coord2d.h"
#endif
namespace df {
  struct world_region_feature;
  struct DFHACK_EXPORT world_region_details {
    int8_t biome[17][17];
    int16_t elevation[17][17];
    uint32_t seed[16][16]; /*!< looks random */
    struct DFHACK_EXPORT T_edges {
      df::coord2d split_x[16][17]; /*!< splits for horizontal edges, x=min y=max */
      df::coord2d split_y[17][16]; /*!< splits for vertical edges, x=min y=max */
      int8_t biome_corner[16][16]; /*!< upleft=0,upright=1,downleft=2,downright=3?? */
      int8_t biome_x[16][16]; /*!< up=0,down=1 */
      int8_t biome_y[16][16]; /*!< left=0,right=1 */
      static struct_identity _identity;
    public:
      T_edges();
    };
    T_edges edges;
    df::coord2d pos;
    int16_t unk12e8;
    int16_t anon_1;
    int16_t anon_2;
    int16_t anon_3;
    int16_t anon_4;
    struct DFHACK_EXPORT T_rivers_vertical {
      int16_t x_min[16][17];
      int16_t x_max[16][17];
      int8_t active[16][17];
      int16_t elevation[16][17];
      static struct_identity _identity;
    public:
      T_rivers_vertical();
    };
    T_rivers_vertical rivers_vertical;
    struct DFHACK_EXPORT T_rivers_horizontal {
      int16_t y_min[17][16];
      int16_t y_max[17][16];
      int8_t active[17][16];
      int16_t elevation[17][16];
      static struct_identity _identity;
    public:
      T_rivers_horizontal();
    };
    T_rivers_horizontal rivers_horizontal;
    int8_t unk11[16][16];
    std::vector<df::world_region_feature* > features[16][16];
    int16_t lava_stone;
    int16_t unk_12[1152]; /*!< v0.40.01 */
    int16_t elevation2[16][16];
    int32_t undef13[256];
    static struct_identity _identity;
  public:
    world_region_details();
  };
}
#endif
