/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_WORLD_DATA_H
#define DF_WORLD_DATA_H
#ifndef DF_COORD2D_H
#include "coord2d.h"
#endif
#ifndef DF_COORD2D_PATH_H
#include "coord2d_path.h"
#endif
#ifndef DF_ENTITY_CLAIM_MASK_H
#include "entity_claim_mask.h"
#endif
#ifndef DF_LANGUAGE_NAME_H
#include "language_name.h"
#endif
namespace df {
  struct feature_init;
  struct historical_entity;
  struct historical_figure;
  struct region_map_entry;
  struct resource_allotment_data;
  struct world_construction;
  struct world_construction_square;
  struct world_geo_biome;
  struct world_landmass;
  struct world_object_data;
  struct world_region;
  struct world_region_details;
  struct world_river;
  struct world_site;
  struct world_site_unk130;
  struct world_underground_region;
  struct DFHACK_EXPORT world_data {
    df::language_name name; /*!< name of the world */
    int8_t unk1[15];
    int32_t next_site_id;
    int32_t next_site_unk136_id;
    int32_t next_unk_140_id;
    int32_t next_unk_150_id;
    int32_t anon_1; /*!< v0.34.01 */
    int32_t anon_2; /*!< v0.34.01 */
    int32_t world_width;
    int32_t world_height;
    int32_t unk_78;
    int32_t moon_phase;
    int16_t flip_latitude;
    int16_t flip_longitude;
    int16_t unk_84;
    int16_t unk_86;
    int16_t unk_88;
    int16_t unk_8a;
    int16_t anon_3; /*!< v0.34.01 */
    int16_t anon_4; /*!< v0.34.01 */
    struct DFHACK_EXPORT T_unk_b4 {
      int32_t world_width2;
      int32_t world_height2;
      uint32_t* anon_1; /*!< align(width,4)*height */
      uint32_t* anon_2; /*!< align(width,4)*height */
      uint32_t* anon_3; /*!< width*height */
      uint8_t* anon_4; /*!< align(width,4)*height */
      static struct_identity _identity;
    public:
      T_unk_b4();
    };
    T_unk_b4 unk_b4;
    std::vector<df::world_region_details* > region_details;
    int32_t adv_region_x;
    int32_t adv_region_y;
    int32_t adv_emb_x;
    int32_t adv_emb_y;
    int16_t unk_x1;
    int16_t unk_y1;
    int16_t unk_x2;
    int16_t unk_y2;
    struct DFHACK_EXPORT T_constructions {
      int16_t width;
      int16_t height;
      std::vector<df::world_construction_square* >** map;
      std::vector<df::world_construction* > list;
      int32_t next_id;
      static struct_identity _identity;
    public:
      T_constructions();
    };
    T_constructions constructions;
    df::entity_claim_mask entity_claims1;
    df::entity_claim_mask entity_claims2;
    std::vector<df::world_site* > sites;
    std::vector<df::world_site_unk130* > site_unk130;
    std::vector<df::resource_allotment_data* > resource_allotments;
    struct DFHACK_EXPORT T_unk_150 {
      int32_t index;
      int32_t unk_4;
      struct DFHACK_EXPORT T_unk_8 {
        int32_t index;
        int32_t unk_4;
        int32_t unk_8;
        static struct_identity _identity;
      public:
        T_unk_8();
      };
      std::vector<T_unk_8* > unk_8;
      struct DFHACK_EXPORT T_unk_18 {
        int32_t index;
        int32_t unk_4;
        int32_t unk_8;
        static struct_identity _identity;
      public:
        T_unk_18();
      };
      std::vector<T_unk_18* > unk_18;
      struct DFHACK_EXPORT T_unk_28 {
        int32_t unk_0;
        int32_t unk_4;
        static struct_identity _identity;
      public:
        T_unk_28();
      };
      std::vector<T_unk_28* > unk_28;
      static struct_identity _identity;
    public:
      T_unk_150();
    };
    std::vector<T_unk_150* > unk_150;
    struct DFHACK_EXPORT T_unk_170 {
      int32_t index;
      struct DFHACK_EXPORT T_unk_4 {
        int32_t unk_0;
        int32_t unk_4;
        int32_t unk_8;
        int32_t unk_c;
        int32_t unk_10;
        int32_t unk_14;
        int32_t unk_18;
        int32_t unk_1c; /*!< v0.40.01 */
        static struct_identity _identity;
      public:
        T_unk_4();
      };
      std::vector<T_unk_4* > unk_4;
      std::vector<int32_t > unk_14;
      int32_t unk_24;
      int32_t unk_28;
      int32_t unk_2c;
      int32_t unk_30;
      int32_t unk_34;
      std::vector<int32_t > unk_38;
      static struct_identity _identity;
    public:
      T_unk_170();
    };
    std::vector<T_unk_170* > unk_170; /*!< v0.34.01 */
    struct DFHACK_EXPORT T_freakish_weather {
      int32_t unk_0;
      int32_t unk_4;
      int16_t mat_type;
      int32_t mat_index;
      int32_t unk_10;
      int32_t region_x;
      int32_t region_y;
      int32_t unk_1c;
      int32_t unk_20;
      int32_t unk_24;
      int32_t unk_28;
      int32_t unk_2c;
      int32_t unk_30;
      int32_t unk_34;
      static struct_identity _identity;
    public:
      T_freakish_weather();
    };
    std::vector<T_freakish_weather* > freakish_weather; /*!< v0.34.01 */
    std::vector<df::world_object_data* > object_data; /*!< v0.34.01 */
    std::vector<df::world_landmass* > landmasses;
    std::vector<df::world_region* > regions;
    std::vector<df::world_underground_region* > underground_regions;
    std::vector<df::world_geo_biome* > geo_biomes;
    struct DFHACK_EXPORT T_mountain_peaks {
      df::language_name name;
      df::coord2d pos;
      BitArray<int> flags;
      int16_t height;
      static struct_identity _identity;
    public:
      T_mountain_peaks();
    };
    std::vector<T_mountain_peaks* > mountain_peaks;
    std::vector<df::world_river* > rivers;
    df::region_map_entry** region_map;
    void* unk_1c4;
    char unk_1c8[4];
    std::vector<void* > unk_1cc;
    std::vector<void* >** unk_1dc;
    std::vector<void* >** unk_1e0;
    std::vector<void* >** unk_1e4;
    std::vector<void* >** unk_1e8;
    std::vector<void* >** unk_1ec;
    std::vector<void* >** unk_1f0;
    int32_t anon_5; /*!< v0.40.01 */
    int32_t anon_6; /*!< v0.40.01 */
    int32_t anon_7; /*!< v0.40.01 */
    int32_t anon_8; /*!< v0.40.01 */
    int32_t anon_9; /*!< v0.40.01 */
    int32_t anon_10; /*!< v0.40.01 */
    int32_t anon_11; /*!< v0.40.01 */
    int32_t anon_12; /*!< v0.40.01 */
    int32_t anon_13; /*!< v0.40.01 */
    int32_t anon_14; /*!< v0.40.01 */
    int32_t anon_15; /*!< v0.40.01 */
    int32_t anon_16; /*!< v0.40.01 */
    int32_t anon_17; /*!< v0.40.01 */
    int32_t anon_18; /*!< v0.40.01 */
    int32_t anon_19; /*!< v0.40.01 */
    int32_t anon_20; /*!< v0.40.01 */
    char anon_21[294920];
    int8_t anon_22; /*!< v0.40.01 */
    int8_t anon_23; /*!< v0.40.01 */
    std::vector<df::world_site* > active_site;
    struct DFHACK_EXPORT T_feature_map {
      int16_t x;
      int16_t y;
      struct DFHACK_EXPORT T_features {
        std::vector<df::feature_init* > feature_init[16][16];
        int32_t unk[16][16][30];
        static struct_identity _identity;
      public:
        T_features();
      };
      T_features* features;
      int16_t* unk_8;
      int32_t* unk_c;
      static struct_identity _identity;
    public:
      T_feature_map();
    };
    T_feature_map** feature_map;
    std::vector<int32_t > old_sites;
    std::vector<int32_t > old_site_x;
    std::vector<int32_t > old_site_y;
    df::coord2d_path land_rgns;
    int32_t unk_260;
    int8_t unk_264;
    int32_t unk_268;
    int8_t unk_26c;
    int32_t unk_270;
    struct DFHACK_EXPORT T_unk_274 {
      std::vector<df::historical_figure* > unk_0;
      struct DFHACK_EXPORT T_unk_10 {
        int32_t unk_0;
        int32_t unk_4;
        int32_t unk_8;
        static struct_identity _identity;
      public:
        T_unk_10();
      };
      std::vector<T_unk_10* > unk_10;
      df::historical_entity* unk_20;
      int32_t unk_24;
      df::language_name* unk_28;
      int32_t unk_2c;
      int32_t unk_30;
      static struct_identity _identity;
    public:
      T_unk_274();
    };
    std::vector<T_unk_274* > unk_274;
    /**
     * v0.40.01
     */
    struct DFHACK_EXPORT T_unk_482f8 {
      int32_t anon_1[320000];
      int32_t anon_2;
      int32_t anon_3;
      int32_t anon_4;
      int32_t anon_5;
      int32_t anon_6;
      int32_t anon_7;
      int32_t anon_8;
      static struct_identity _identity;
    public:
      T_unk_482f8();
    };
    T_unk_482f8 unk_482f8; /*!< v0.40.01 */
    static struct_identity _identity;
  public:
    world_data();
  };
}
#endif
