/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_MAP_RENDERER_H
#define DF_MAP_RENDERER_H
namespace df {
  struct item;
  struct unit;
  struct DFHACK_EXPORT map_renderer {
    uint8_t entity[256][256];
    std::vector<df::unit* > cursor_units;
    df::unit* cursor_guts;
    bool multiple_guts;
    df::item* cursor_corpse;
    int32_t cursor_corpse_cnt;
    df::item* cursor_corpsepiece;
    int32_t cursor_corpsepiece_cnt;
    df::item* cursor_bones;
    int32_t cursor_bones_cnt;
    df::item* cursor_other;
    int32_t cursor_other_cnt;
    int8_t unk_10034;
    int8_t unk_10035;
    int32_t cur_tick_count; /*!< GetTickCount */
    int16_t tick_phase; /*!< cur_year_tick%10080 */
    int8_t dim_colors;
    int8_t anon_1;
    int32_t anon_2[500];
    int8_t anon_3[500];
    struct DFHACK_EXPORT T_anon_4 {
      int32_t x;
      int32_t y;
      static struct_identity _identity;
    public:
      T_anon_4();
    };
    T_anon_4 anon_4[500];
    int32_t anon_5[500];
    int32_t anon_6;
    int32_t anon_7;
    static struct_identity _identity;
  public:
    map_renderer();
  };
}
#endif
