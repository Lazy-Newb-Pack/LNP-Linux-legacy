/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_MAP_BLOCK_COLUMN_H
#define DF_MAP_BLOCK_COLUMN_H
#ifndef DF_CAVE_COLUMN_LINK_H
#include "cave_column_link.h"
#endif
#ifndef DF_COORD2D_H
#include "coord2d.h"
#endif
namespace df {
  struct cave_column_rectangle;
  struct plant;
  struct DFHACK_EXPORT map_block_column {
    int16_t sink_level; /*!< water at or above this level sinks into aquifer tiles */
    int16_t beach_level; /*!< water at this level disappears if above more water */
    int16_t ground_level; /*!< for coloring unallocated blocks */
    struct DFHACK_EXPORT T_unmined_glyphs {
      int16_t x[4];
      int16_t y[4];
      uint8_t tile[4];
      static struct_identity _identity;
    public:
      T_unmined_glyphs();
    };
    std::vector<T_unmined_glyphs* > unmined_glyphs;
    int16_t z_base;
    df::cave_column_link cave_columns[16][16];
    std::vector<df::cave_column_rectangle* > column_rectangles;
    int16_t z_shift; /*!< seems to be 0 originally, but updated when map is shifted */
    BitArray<int> flags; /*!< 0 process cave columns for caveins */
    int16_t unk_v40_1[16][16]; /*!< v0.40.1 */
    df::coord2d map_pos; /*!< top left in tiles */
    int16_t unk_c3c; /*!< uninitialized */
    df::coord2d region_pos;
    std::vector<df::plant* > plants;
    static struct_identity _identity;
  public:
    map_block_column();
  };
}
#endif
