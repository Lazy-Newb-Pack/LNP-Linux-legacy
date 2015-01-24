/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_D_INIT_H
#define DF_D_INIT_H
#ifndef DF_D_INIT_EMBARK_CONFIRM_H
#include "d_init_embark_confirm.h"
#endif
#ifndef DF_D_INIT_FLAGS1_H
#include "d_init_flags1.h"
#endif
#ifndef DF_D_INIT_FLAGS2_H
#include "d_init_flags2.h"
#endif
#ifndef DF_D_INIT_FLAGS3_H
#include "d_init_flags3.h"
#endif
#ifndef DF_D_INIT_FLAGS4_H
#include "d_init_flags4.h"
#endif
#ifndef DF_D_INIT_IDLERS_H
#include "d_init_idlers.h"
#endif
#ifndef DF_D_INIT_NICKNAME_H
#include "d_init_nickname.h"
#endif
#ifndef DF_D_INIT_TUNNEL_H
#include "d_init_tunnel.h"
#endif
#ifndef DF_D_INIT_Z_VIEW_H
#include "d_init_z_view.h"
#endif
namespace df {
  struct DFHACK_EXPORT d_init {
    BitArray<df::d_init_flags1> flags1;
    df::d_init_nickname nickname[10];
    uint8_t sky_tile;
    int16_t sky_color[3];
    uint8_t chasm_tile;
    uint8_t pillar_tile;
    uint8_t track_tiles[15]; /*!< v0.34.08 */
    uint8_t track_tile_invert[15]; /*!< v0.34.08 */
    uint8_t track_ramp_tiles[15]; /*!< v0.34.08 */
    uint8_t track_ramp_invert[15]; /*!< v0.34.08 */
    uint8_t tree_tiles[104]; /*!< v0.40.01 */
    int16_t chasm_color[3];
    struct DFHACK_EXPORT T_wound_color {
      int16_t none[3];
      int16_t minor[3];
      int16_t inhibited[3];
      int16_t function_loss[3];
      int16_t broken[3];
      int16_t missing[3];
      static struct_identity _identity;
    public:
      T_wound_color();
    };
    T_wound_color wound_color;
    df::d_init_idlers idlers;
    df::d_init_tunnel show_embark_tunnel;
    BitArray<df::d_init_flags2> flags2;
    int32_t display_length;
    df::d_init_z_view adventurer_z_view;
    int32_t adventurer_z_view_size;
    BitArray<df::d_init_flags3> flags3;
    int32_t population_cap;
    int32_t strict_population_cap;
    int32_t baby_cap_absolute;
    int32_t baby_cap_percent;
    int32_t specific_seed_cap;
    int32_t fortress_seed_cap;
    int32_t path_cost[4];
    int16_t embark_rect[2];
    struct DFHACK_EXPORT T_store_dist {
      int16_t item_decrease;
      int16_t seed_combine;
      int16_t bucket_combine;
      int16_t barrel_combine;
      int16_t bin_combine;
      static struct_identity _identity;
    public:
      T_store_dist();
    };
    T_store_dist store_dist;
    int16_t set_labor_lists[2];
    int32_t graze_coefficient; /*!< v0.40.13 */
    BitArray<df::d_init_flags4> flags4;
    df::d_init_embark_confirm post_prepare_embark_confirmation;
    static struct_identity _identity;
  public:
    d_init();
  };
}
#endif
