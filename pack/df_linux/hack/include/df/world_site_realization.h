/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_WORLD_SITE_REALIZATION_H
#define DF_WORLD_SITE_REALIZATION_H
namespace df {
  struct site_realization_building;
  struct site_realization_crossroads;
  struct DFHACK_EXPORT world_site_realization {
    std::vector<df::site_realization_building* > buildings;
    int32_t num_buildings;
    int32_t unk_14;
    int32_t num_areas;
    int8_t mini_rivers[17][17];
    uint8_t mini_tiles[17][17];
    int16_t mini_colors[17][17];
    df::site_realization_crossroads* road_map[51][51];
    void* unk_2d44[51][51];
    struct DFHACK_EXPORT T_unk_55e8 {
      int32_t unk_55e8;
      int32_t unk_55ec;
      int32_t unk_v40_1a; /*!< v0.40.01 */
      int32_t unk_v40_1b; /*!< v0.40.01 */
      int32_t unk_v40_1c; /*!< v0.40.01 */
      int32_t unk_v40_1d; /*!< v0.40.01 */
      struct DFHACK_EXPORT T_unk_v40_2 {
        int32_t unk_0;
        int32_t unk_4;
        int16_t unk_8;
        int16_t unk_a;
        int32_t unk_c;
        int32_t unk_10;
        int16_t unk_14;
        int16_t unk_16;
        int32_t unk_18;
        int32_t unk_1c;
        static struct_identity _identity;
      public:
        T_unk_v40_2();
      };
      std::vector<T_unk_v40_2* > unk_v40_2;
      int32_t unk_55f0;
      int32_t unk_55f4;
      int16_t unk_55f8;
      int16_t unk_55fa;
      int32_t unk_55fc;
      int32_t unk_5600;
      int32_t unk_5604;
      int32_t unk_5608;
      int32_t unk_560c;
      int32_t unk_5610;
      int32_t unk_5614;
      std::vector<void* > unk_5618;
      int32_t unk_5628;
      int32_t unk_562c;
      int32_t unk_5630;
      int32_t unk_5634;
      int32_t unk_v40_3a; /*!< v0.40.01 */
      int32_t unk_v40_3b; /*!< v0.40.01 */
      int32_t unk_v40_3c; /*!< v0.40.01 */
      int32_t unk_v40_3d; /*!< v0.40.01 */
      static struct_identity _identity;
    public:
      T_unk_55e8();
    };
    T_unk_55e8 unk_55e8[17][17];
    struct DFHACK_EXPORT T_building_map {
      char anon_1[4];
      std::vector<df::site_realization_building* > buildings;
      int32_t unk4;
      uint32_t unk5;
      std::vector<void* > unk6;
      static struct_identity _identity;
    public:
      T_building_map();
    };
    T_building_map building_map[17][17];
    uint32_t unk_v40_1[51][51]; /*!< v0.40.01 */
    uint8_t zoom_tiles[51][51];
    int16_t zoom_colors[51][51];
    int8_t zoom_movemask[51][51];
    int32_t area_map[52][52];
    struct DFHACK_EXPORT T_areas {
      int32_t unk_0;
      int32_t index;
      int32_t unk_8;
      int32_t min_x;
      int32_t max_x;
      int32_t min_y;
      int32_t max_y;
      int32_t unk_1c; /*!< v0.40.01 */
      int32_t unk_20; /*!< v0.40.01 */
      static struct_identity _identity;
    public:
      T_areas();
    };
    std::vector<T_areas* > areas;
    int32_t anon_1;
    int32_t anon_2;
    int32_t anon_3;
    struct DFHACK_EXPORT T_unk_193bc {
      int32_t anon_1;
      int32_t anon_2;
      struct DFHACK_EXPORT T_unk_8 {
        int32_t anon_1;
        int32_t anon_2;
        int32_t anon_3;
        int32_t anon_4;
        int32_t anon_5;
        int32_t anon_6;
        int32_t anon_7;
        int32_t anon_8;
        int32_t anon_9;
        static struct_identity _identity;
      public:
        T_unk_8();
      };
      T_unk_8 unk_8;
      int32_t anon_3;
      int16_t anon_4;
      int16_t anon_5;
      int16_t anon_6;
      int16_t anon_7;
      int16_t anon_8;
      int16_t anon_9;
      int32_t anon_10;
      int32_t anon_11;
      int32_t anon_12;
      int32_t anon_13[20];
      int32_t anon_14[20];
      int16_t anon_15;
      int16_t anon_16;
      int32_t anon_17;
      int32_t anon_18;
      static struct_identity _identity;
    public:
      T_unk_193bc();
    };
    T_unk_193bc unk_193bc[500];
    int32_t num_unk_193bc;
    int32_t anon_4;
    int32_t anon_5;
    df::site_realization_building* building_type13[20];
    int32_t num_building_type13;
    df::site_realization_building* building_type5[20];
    int32_t num_building_type5;
    df::site_realization_building* building_shop_house[20];
    int32_t num_building_shop_house;
    int32_t anon_6;
    int32_t anon_7;
    int32_t anon_8;
    int32_t anon_9;
    static struct_identity _identity;
  public:
    world_site_realization();
  };
}
#endif
