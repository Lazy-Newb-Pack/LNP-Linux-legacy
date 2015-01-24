/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_WORLD_H
#define DF_WORLD_H
#ifndef DF_COMBAT_REPORT_EVENT_TYPE_H
#include "combat_report_event_type.h"
#endif
#ifndef DF_COORD_H
#include "coord.h"
#endif
#ifndef DF_COORD2D_H
#include "coord2d.h"
#endif
#ifndef DF_COORD2D_PATH_H
#include "coord2d_path.h"
#endif
#ifndef DF_FLOW_REUSE_POOL_H
#include "flow_reuse_pool.h"
#endif
#ifndef DF_ITEM_TYPE_H
#include "item_type.h"
#endif
#ifndef DF_JOB_LIST_LINK_H
#include "job_list_link.h"
#endif
#ifndef DF_JOB_SKILL_H
#include "job_skill.h"
#endif
#ifndef DF_MATERIAL_VEC_REF_H
#include "material_vec_ref.h"
#endif
#ifndef DF_PROJ_LIST_LINK_H
#include "proj_list_link.h"
#endif
#ifndef DF_SCREW_PUMP_DIRECTION_H
#include "screw_pump_direction.h"
#endif
#ifndef DF_STOCKPILE_CATEGORY_H
#include "stockpile_category.h"
#endif
#ifndef DF_WORLD_HISTORY_H
#include "world_history.h"
#endif
#ifndef DF_WORLD_POPULATION_REF_H
#include "world_population_ref.h"
#endif
#ifndef DF_WORLD_RAWS_H
#include "world_raws.h"
#endif
namespace df {
  struct activity_entry;
  struct army;
  struct army_controller;
  struct art_image_chunk;
  struct artifact_record;
  struct block_square_event;
  struct building;
  struct campfire;
  struct coin_batch;
  struct construction;
  struct crime;
  struct cultural_identity;
  struct deep_vein_hollow;
  struct effect_info;
  struct engraving;
  struct entity_population;
  struct feature_init;
  struct fire;
  struct flow_guide;
  struct flow_info;
  struct glowing_barrier;
  struct historical_entity;
  struct identity;
  struct incident;
  struct interaction_instance;
  struct item;
  struct job;
  struct local_population;
  struct machine;
  struct manager_order;
  struct mandate;
  struct map_block;
  struct map_block_column;
  struct nemesis_record;
  struct ocean_wave;
  struct plant;
  struct plant_raw;
  struct popup_message;
  struct report;
  struct schedule_info;
  struct squad;
  struct unit;
  struct unit_chunk;
  struct vehicle;
  struct vermin;
  struct web_cluster;
  struct world_data;
  struct world_unk_20;
  struct world_unk_6c;
  struct world_unk_90;
  struct world_unk_9c;
  struct world_unk_a8;
  struct world_unk_b4;
  struct world_unk_c0;
  struct written_content;
  union z_level_flags;
  struct DFHACK_EXPORT world {
    std::vector<df::glowing_barrier* > glowing_barriers;
    std::vector<df::deep_vein_hollow* > deep_vein_hollows;
    std::vector<df::world_unk_20* > unk_20;
    std::vector<df::engraving* > engravings;
    struct DFHACK_EXPORT T_vermin {
      std::vector<df::vermin* > all;
      std::vector<df::vermin* > colonies;
      static struct_identity _identity;
    public:
      T_vermin();
    };
    T_vermin vermin;
    std::vector<df::coord* > unk_3C;
    std::vector<df::campfire* > campfires;
    std::vector<df::web_cluster* > web_clusters;
    std::vector<df::fire* > fires;
    std::vector<df::world_unk_6c* > unk_6C;
    std::vector<df::ocean_wave* > ocean_waves;
    std::vector<df::construction* > constructions;
    std::vector<df::world_unk_90* > unk_90;
    std::vector<df::world_unk_9c* > unk_9C;
    std::vector<df::world_unk_a8* > unk_A8;
    std::vector<df::world_unk_b4* > unk_B4;
    std::vector<df::world_unk_c0* > unk_C0;
    std::vector<df::engraving* > unk_CC;
    std::vector<df::construction* > unk_D8;
    std::vector<df::world_unk_9c* > unk_E4;
    std::vector<df::world_unk_6c* > unk_F0;
    std::vector<df::world_unk_90* > unk_FC;
    std::vector<df::effect_info* > effects;
    std::vector<df::coin_batch* > coin_batches;
    std::vector<df::local_population* > populations;
    std::vector<df::manager_order* > manager_orders;
    std::vector<df::mandate* > mandates;
    struct DFHACK_EXPORT T_entities {
      std::vector<df::historical_entity* > all;
      std::vector<df::historical_entity* > bad;
      static struct_identity _identity;
    public:
      T_entities();
    };
    T_entities entities;
    struct DFHACK_EXPORT T_worldgen_coord_buf {
      df::coord2d slots[20000];
      int16_t next_slot;
      static struct_identity _identity;
    public:
      T_worldgen_coord_buf();
    };
    T_worldgen_coord_buf worldgen_coord_buf;
    struct DFHACK_EXPORT T_units {
      std::vector<df::unit* > all;
      std::vector<df::unit* > active; /*!< not sorted, entry 0 is adventurer */
      std::vector<df::unit* > other[2];
      std::vector<df::unit* > bad;
      static struct_identity _identity;
    public:
      T_units();
    };
    T_units units;
    std::vector<df::unit_chunk* > unit_chunks;
    std::vector<df::art_image_chunk* > art_image_chunks;
    struct DFHACK_EXPORT T_nemesis {
      std::vector<df::nemesis_record* > all;
      std::vector<df::nemesis_record* > other[2]; /*!< v0.40.01 */
      std::vector<df::nemesis_record* > bad;
      static struct_identity _identity;
    public:
      T_nemesis();
    };
    T_nemesis nemesis;
    bool unk4;
    struct DFHACK_EXPORT T_items {
      std::vector<df::item* > all;
      std::vector<df::item* > other[129];
      std::vector<df::item* > bad;
      std::vector<int32_t > bad_tag;
      static struct_identity _identity;
    public:
      T_items();
    };
    T_items items;
    struct DFHACK_EXPORT T_artifacts {
      std::vector<df::artifact_record* > all;
      std::vector<df::artifact_record* > bad;
      static struct_identity _identity;
    public:
      T_artifacts();
    };
    T_artifacts artifacts;
    df::job_list_link job_list;
    struct DFHACK_EXPORT T_anon_1 {
      int32_t unk_0;
      df::job* job;
      int32_t flags;
      int32_t anon_1;
      static struct_identity _identity;
    public:
      T_anon_1();
    };
    std::vector<T_anon_1* > anon_1;
    struct DFHACK_EXPORT T_anon_2 {
      int32_t unk_0;
      int32_t anon_1;
      int32_t anon_2;
      static struct_identity _identity;
    public:
      T_anon_2();
    };
    T_anon_2 anon_2[2000];
    int32_t anon_3; /*!< next slot */
    df::proj_list_link proj_list;
    struct DFHACK_EXPORT T_buildings {
      std::vector<df::building* > all;
      std::vector<df::building* > other[87];
      std::vector<df::building* > bad;
      static struct_identity _identity;
    public:
      T_buildings();
    };
    T_buildings buildings;
    bool check_bridge_collapse;
    bool check_machine_collapse; /*!< ? */
    struct DFHACK_EXPORT T_machines {
      std::vector<df::machine* > all;
      std::vector<df::machine* > bad;
      static struct_identity _identity;
    public:
      T_machines();
    };
    T_machines machines;
    struct DFHACK_EXPORT T_flow_guides {
      std::vector<df::flow_guide* > all;
      std::vector<df::flow_guide* > bad;
      static struct_identity _identity;
    public:
      T_flow_guides();
    };
    T_flow_guides flow_guides;
    struct DFHACK_EXPORT T_stockpile {
      int32_t num_jobs[10];
      int32_t num_haulers[10];
      struct DFHACK_EXPORT T_simple1 {
        int8_t anon_1;
        int8_t food;
        int8_t anon_2;
        int8_t anon_3;
        static struct_identity _identity;
      public:
        T_simple1();
      };
      T_simple1 simple1;
      std::vector<int8_t > seeds;
      std::vector<int8_t > plants;
      std::vector<int8_t > cheese;
      std::vector<int8_t > meat_fish;
      std::vector<int8_t > eggs;
      std::vector<int8_t > leaves;
      std::vector<int8_t > plant_powder;
      struct DFHACK_EXPORT T_simple2 {
        int8_t seeds;
        int8_t plants;
        int8_t cheese;
        int8_t fish;
        int8_t meat;
        int8_t leaves;
        int8_t powder;
        int8_t eggs;
        static struct_identity _identity;
      public:
        T_simple2();
      };
      T_simple2 simple2;
      std::vector<int8_t > liquid_plant;
      std::vector<int8_t > liquid_animal;
      std::vector<int8_t > liquid_builtin;
      struct DFHACK_EXPORT T_simple3 {
        int8_t glob_fat;
        int8_t glob_tallow;
        int8_t glob_paste;
        int8_t glob_pressed;
        int8_t weapons;
        int8_t shields;
        int8_t ammo;
        int8_t coins;
        int8_t bar_blocks;
        int8_t gems; /*!< not large */
        int8_t finished_goods;
        int8_t tanned_skins;
        int8_t thread_cloth;
        int8_t anon_1;
        int8_t anon_2;
        int8_t anon_3;
        static struct_identity _identity;
      public:
        T_simple3();
      };
      T_simple3 simple3;
      static struct_identity _identity;
    public:
      T_stockpile();
    };
    T_stockpile stockpile;
    struct DFHACK_EXPORT T_plants {
      std::vector<df::plant* > all;
      std::vector<df::plant* > shrub_dry;
      std::vector<df::plant* > shrub_wet;
      std::vector<df::plant* > tree_dry;
      std::vector<df::plant* > tree_wet;
      std::vector<df::plant* > empty;
      static struct_identity _identity;
    public:
      T_plants();
    };
    T_plants plants;
    /**
     * ?
     */
    struct DFHACK_EXPORT T_enemy_status_cache {
      bool slot_used[500];
      int32_t rel_map[500][500];
      int32_t next_slot;
      static struct_identity _identity;
    public:
      T_enemy_status_cache();
    };
    T_enemy_status_cache enemy_status_cache; /*!< ? */
    struct DFHACK_EXPORT T_schedules {
      std::vector<df::schedule_info* > all;
      std::vector<df::schedule_info* > bad;
      static struct_identity _identity;
    public:
      T_schedules();
    };
    T_schedules schedules;
    struct DFHACK_EXPORT T_squads {
      std::vector<df::squad* > all;
      std::vector<df::squad* > bad;
      static struct_identity _identity;
    public:
      T_squads();
    };
    T_squads squads;
    struct DFHACK_EXPORT T_formations {
      std::vector<int32_t* > all;
      std::vector<void* > bad;
      static struct_identity _identity;
    public:
      T_formations();
    };
    T_formations formations;
    struct DFHACK_EXPORT T_activities {
      std::vector<df::activity_entry* > all;
      std::vector<df::activity_entry* > bad;
      static struct_identity _identity;
    public:
      T_activities();
    };
    T_activities activities;
    struct DFHACK_EXPORT T_status {
      std::vector<df::report* > reports;
      std::vector<df::report* > announcements;
      std::vector<df::popup_message* > popups;
      int32_t next_report_id;
      union T_flags {
        uint32_t whole;
        struct {
          uint32_t combat : 1;
          uint32_t hunting : 1;
          uint32_t sparring : 1;
        } bits;
        enum Shift {
          shift_combat = 0,
          shift_hunting = 1,
          shift_sparring = 2
        };
        enum Mask : uint32_t {
          mask_combat = 0x1U,
          mask_hunting = 0x2U,
          mask_sparring = 0x4U
        };
        T_flags(uint32_t whole_ = 0) : whole(whole_) {};
      };
      T_flags flags;
      char anon_1[36]; /*!< v0.40.01 */
      int32_t display_timer;
      struct DFHACK_EXPORT T_slots {
        df::combat_report_event_type type;
        int32_t item; /*!< or body part layer */
        int32_t unk1b;
        int32_t unk1c;
        int32_t unk1d;
        int16_t body_part;
        int16_t unk2b;
        int16_t unk2c;
        int16_t unk2d;
        std::string target_bp_name;
        std::string verb;
        std::string with_item_name;
        std::string unk3d;
        union T_flags {
          int32_t whole;
          struct {
            int32_t behind : 1;
            int32_t side : 1;
            int32_t by : 1;
            int32_t item : 1;
            int32_t tap : 1;
            int32_t sever : 1;
          } bits;
          enum Shift {
            shift_behind = 0,
            shift_side = 1,
            shift_by = 2,
            shift_item = 3,
            shift_tap = 4,
            shift_sever = 5
          };
          enum Mask : int32_t {
            mask_behind = 0x1U,
            mask_side = 0x2U,
            mask_by = 0x4U,
            mask_item = 0x8U,
            mask_tap = 0x10U,
            mask_sever = 0x20U
          };
          T_flags(int32_t whole_ = 0) : whole(whole_) {};
        };
        T_flags flags;
        static struct_identity _identity;
      public:
        T_slots();
      };
      /**
       * Written to by code at 0x80fd7b0
       */
      T_slots slots[100];
      int16_t slot_id_used[37];
      int16_t slot_id_idx1[37];
      int16_t slot_id_idx2[37];
      int16_t slots_used;
      static struct_identity _identity;
    public:
      T_status();
    };
    T_status status;
    struct DFHACK_EXPORT T_interaction_instances {
      std::vector<df::interaction_instance* > all;
      std::vector<df::interaction_instance* > bad;
      static struct_identity _identity;
    public:
      T_interaction_instances();
    };
    T_interaction_instances interaction_instances;
    struct DFHACK_EXPORT T_written_contents {
      std::vector<df::written_content* > all;
      std::vector<df::written_content* > bad;
      static struct_identity _identity;
    public:
      T_written_contents();
    };
    T_written_contents written_contents;
    struct DFHACK_EXPORT T_identities {
      std::vector<df::identity* > all;
      std::vector<df::identity* > bad;
      static struct_identity _identity;
    public:
      T_identities();
    };
    T_identities identities;
    struct DFHACK_EXPORT T_incidents {
      std::vector<df::incident* > all;
      std::vector<df::incident* > bad;
      static struct_identity _identity;
    public:
      T_incidents();
    };
    T_incidents incidents;
    struct DFHACK_EXPORT T_crimes {
      std::vector<df::crime* > all;
      std::vector<df::crime* > bad;
      static struct_identity _identity;
    public:
      T_crimes();
    };
    T_crimes crimes;
    /**
     * v0.34.08
     */
    struct DFHACK_EXPORT T_vehicles {
      std::vector<df::vehicle* > all;
      std::vector<df::vehicle* > active;
      std::vector<df::vehicle* > bad;
      static struct_identity _identity;
    public:
      T_vehicles();
    };
    T_vehicles vehicles; /*!< v0.34.08 */
    /**
     * v0.40.01
     */
    struct DFHACK_EXPORT T_armies {
      std::vector<df::army* > all;
      std::vector<df::army* > bad;
      static struct_identity _identity;
    public:
      T_armies();
    };
    T_armies armies; /*!< v0.40.01 */
    /**
     * v0.40.01
     */
    struct DFHACK_EXPORT T_army_controllers {
      std::vector<df::army_controller* > all;
      std::vector<df::army_controller* > bad;
      static struct_identity _identity;
    public:
      T_army_controllers();
    };
    T_army_controllers army_controllers; /*!< v0.40.01 */
    /**
     * v0.40.01
     */
    struct DFHACK_EXPORT T_army_tracking_info {
      std::vector<void* > all;
      std::vector<void* > bad;
      static struct_identity _identity;
    public:
      T_army_tracking_info();
    };
    T_army_tracking_info army_tracking_info; /*!< v0.40.01 */
    /**
     * v0.40.01
     */
    struct DFHACK_EXPORT T_cultural_identities {
      std::vector<df::cultural_identity* > all;
      std::vector<df::cultural_identity* > bad;
      static struct_identity _identity;
    public:
      T_cultural_identities();
    };
    T_cultural_identities cultural_identities; /*!< v0.40.01 */
    /**
     * v0.40.01
     */
    struct DFHACK_EXPORT T_agreements {
      std::vector<void* > all;
      std::vector<void* > bad;
      static struct_identity _identity;
    public:
      T_agreements();
    };
    T_agreements agreements; /*!< v0.40.01 */
    df::building* selected_building;
    df::stockpile_category selected_stockpile_type;
    bool update_selected_building;
    int16_t building_width;
    int16_t building_height;
    df::screw_pump_direction selected_direction;
    struct DFHACK_EXPORT T_map {
      std::vector<df::map_block* > map_blocks;
      df::map_block**** block_index;
      std::vector<df::map_block_column* > map_block_columns;
      df::map_block_column*** column_index;
      int32_t x_count_block;
      int32_t y_count_block;
      int32_t z_count_block;
      int32_t x_count;
      int32_t y_count;
      int32_t z_count;
      int32_t region_x;
      int32_t region_y;
      int32_t region_z;
      static struct_identity _identity;
    public:
      T_map();
    };
    T_map map;
    int16_t distance_lookup[53][53];
    std::vector<int16_t > unk_v40_1a[112]; /*!< v0.40.1 */
    std::vector<int16_t > unk_v40_1b[112]; /*!< v0.40.1 */
    int32_t unk_v40_2a[80]; /*!< v0.40.1 */
    double unk_v40_2b[181]; /*!< v0.40.1 */
    double unk_v40_2c[121]; /*!< v0.40.1 */
    struct DFHACK_EXPORT T_map_extras {
      uint8_t rotation;
      df::z_level_flags* z_level_flags; /*!< v0.34.05 */
      std::vector<df::block_square_event* > unk_v40_3a; /*!< v0.40.1 */
      std::vector<int16_t > unk_v40_3b; /*!< v0.40.1 */
      std::vector<int16_t > unk_v40_3c; /*!< v0.40.1 */
      std::vector<int16_t > unk_v40_3d; /*!< v0.40.1 */
      static struct_identity _identity;
    public:
      T_map_extras();
    };
    T_map_extras map_extras;
    df::world_data* world_data;
    struct DFHACK_EXPORT T_worldgen_status {
      int16_t state;
      int32_t num_rejects;
      int32_t anon_1[53];
      int32_t anon_2[53];
      int16_t rejection_reason;
      int32_t lakes_total;
      int32_t anon_3;
      int16_t anon_4;
      int32_t lakes_cur;
      int32_t anon_5;
      int32_t anon_6;
      int32_t anon_7[100];
      int8_t anon_8[100];
      int16_t anon_9[100];
      int32_t anon_10;
      int32_t finalized_civ_mats;
      int32_t finalized_art;
      int32_t finalized_uniforms;
      int32_t finalized_sites;
      int32_t anon_11;
      int32_t anon_12;
      int32_t anon_13;
      std::vector<void* > anon_14;
      std::vector<void* > anon_15;
      int32_t width;
      int32_t height;
      std::vector<void* > anon_16;
      std::vector<void* > anon_17;
      int32_t rivers_total;
      int32_t rivers_cur;
      int8_t anon_18;
      std::string last_param_set;
      std::string last_seed;
      std::string last_name_seed;
      std::string last_history_seed;
      std::string last_creature_seed;
      bool placed_caves;
      bool placed_good_evil;
      bool placed_megabeasts;
      bool placed_other_beasts;
      bool made_cave_pops;
      bool made_cave_civs;
      bool placed_civs;
      bool finished_prehistory;
      std::vector<void* > anon_19;
      std::vector<void* > anon_20;
      int32_t anon_21;
      int8_t anon_22;
      int8_t anon_23;
      int8_t anon_24;
      int8_t anon_25;
      std::vector<void* > anon_26;
      std::vector<void* > anon_27;
      int32_t anon_28;
      int32_t anon_29;
      std::vector<void* > anon_30[10];
      std::vector<void* > anon_31[10];
      std::vector<void* > anon_32[10];
      std::vector<void* > anon_33;
      std::vector<void* > anon_34;
      std::vector<void* > anon_35;
      std::vector<void* > anon_36;
      std::vector<void* > anon_37;
      std::vector<void* > anon_38;
      int32_t anon_39;
      int32_t anon_40;
      static struct_identity _identity;
    public:
      T_worldgen_status();
    };
    T_worldgen_status worldgen_status;
    std::vector<void* > unk_10d298; /*!< v0.40.01 */
    std::vector<void* > unk_10d2a4; /*!< v0.40.01 */
    df::flow_reuse_pool orphaned_flow_pool;
    df::world_raws raws;
    struct DFHACK_EXPORT T_unk_59dc4 {
      df::coord2d_path regions;
      struct DFHACK_EXPORT T_unk1 {
        df::world_population_ref ref;
        std::vector<int32_t > unk;
        static struct_identity _identity;
      public:
        T_unk1();
      };
      std::vector<T_unk1* > unk1;
      static struct_identity _identity;
    public:
      T_unk_59dc4();
    };
    T_unk_59dc4 unk_59dc4;
    struct DFHACK_EXPORT T_flow_engine {
      int8_t rnd_16;
      int16_t rnd_256;
      int16_t rnd_pos;
      int16_t rnd_x[16];
      int16_t rnd_y[16];
      int32_t block_idx;
      std::vector<int16_t > unk7a;
      std::vector<int16_t > unk7b;
      std::vector<int16_t > unk7c;
      std::vector<int16_t > unk7_cntdn;
      static struct_identity _identity;
    public:
      T_flow_engine();
    };
    T_flow_engine flow_engine;
    std::vector<int32_t > busy_buildings; /*!< buildings with nonempty getUsers */
    BitArray<int> cavein_flags; /*!< flag 0 means process cave columns */
    int32_t original_save_version; /*!< DF version on which the world was first created */
    struct DFHACK_EXPORT T_worldgen {
      std::string version;
      int32_t next_unit_chunk_id;
      int16_t next_unit_chunk_offset;
      int32_t next_art_image_chunk_id;
      int16_t next_art_image_chunk_offset;
      struct DFHACK_EXPORT T_worldgen_parms {
        std::string title;
        std::string seed; /*!< v0.34.01 */
        std::string history_seed; /*!< v0.34.01 */
        std::string name_seed; /*!< v0.34.01 */
        std::string creature_seed; /*!< v0.34.01 */
        int32_t dim_x;
        int32_t dim_y;
        std::string custom_name;
        bool has_seed;
        bool has_history_seed;
        bool has_name_seed;
        bool has_creature_seed;
        int32_t embark_points;
        int32_t peak_number_min;
        int32_t partial_ocean_edge_min;
        int32_t complete_ocean_edge_min;
        int32_t volcano_min;
        int32_t region_counts[3][10];
        int32_t river_mins[2];
        int32_t subregion_max;
        int32_t cavern_layer_count;
        int32_t cavern_layer_openness_min;
        int32_t cavern_layer_openness_max;
        int32_t cavern_layer_passage_density_min;
        int32_t cavern_layer_passage_density_max;
        int32_t cavern_layer_water_min;
        int32_t cavern_layer_water_max;
        bool have_bottom_layer_1;
        bool have_bottom_layer_2;
        int32_t levels_above_ground;
        int32_t levels_above_layer_1;
        int32_t levels_above_layer_2;
        int32_t levels_above_layer_3;
        int32_t levels_above_layer_4;
        int32_t levels_above_layer_5;
        int32_t levels_at_bottom;
        int32_t cave_min_size;
        int32_t cave_max_size;
        int32_t mountain_cave_min;
        int32_t non_mountain_cave_min;
        int32_t total_civ_number;
        int32_t rain_ranges_1;
        int32_t rain_ranges_0;
        int32_t rain_ranges_2;
        int32_t drainage_ranges_1;
        int32_t drainage_ranges_0;
        int32_t drainage_ranges_2;
        int32_t savagery_ranges_1;
        int32_t savagery_ranges_0;
        int32_t savagery_ranges_2;
        int32_t volcanism_ranges_1;
        int32_t volcanism_ranges_0;
        int32_t volcanism_ranges_2;
        int32_t ranges[4][24];
        int32_t beast_end_year;
        int32_t end_year;
        int32_t beast_end_year_percent;
        int32_t total_civ_population;
        int32_t site_cap;
        int32_t elevation_ranges_1;
        int32_t elevation_ranges_0;
        int32_t elevation_ranges_2;
        int32_t mineral_scarcity;
        int32_t megabeast_cap;
        int32_t semimegabeast_cap;
        int32_t titan_number;
        int32_t titan_attack_trigger[3];
        int32_t demon_number;
        int32_t night_troll_number;
        int32_t bogeyman_number;
        int32_t vampire_number;
        int32_t werebeast_number;
        int32_t secret_number;
        int32_t regional_interaction_number;
        int32_t disturbance_interaction_number;
        int32_t evil_cloud_number;
        int32_t evil_rain_number;
        int32_t anon_1; /*!< v0.40.01 */
        int32_t good_sq_counts_0;
        int32_t evil_sq_counts_0;
        int32_t good_sq_counts_1;
        int32_t evil_sq_counts_1;
        int32_t good_sq_counts_2;
        int32_t evil_sq_counts_2;
        int32_t elevation_frequency[6];
        int32_t rain_frequency[6];
        int32_t drainage_frequency[6];
        int32_t savagery_frequency[6];
        int32_t temperature_frequency[6];
        int32_t volcanism_frequency[6];
        void* ps;
        int32_t reveal_all_history;
        int32_t cull_historical_figures;
        int32_t erosion_cycle_count;
        int32_t periodically_erode_extremes;
        int32_t orographic_precipitation;
        int32_t playable_civilization_required;
        int32_t all_caves_visible;
        int32_t show_embark_tunnel;
        int32_t pole;
        bool anon_2;
        static struct_identity _identity;
      public:
        T_worldgen_parms();
      };
      T_worldgen_parms worldgen_parms;
      static struct_identity _identity;
    public:
      T_worldgen();
    };
    T_worldgen worldgen;
    df::world_history history;
    std::vector<df::entity_population* > entity_populations;
    std::vector<int32_t > unk_v40_6a[336]; /*!< v0.40.1 */
    std::vector<int32_t > unk_v40_6b[336]; /*!< v0.40.1 */
    std::vector<int32_t > unk_v40_6c[336]; /*!< v0.40.1 */
    std::vector<int32_t > unk_v40_6d[336]; /*!< v0.40.1 */
    std::vector<int32_t > unk_v40_6e[336]; /*!< v0.40.1 */
    std::vector<int32_t > unk_v40_6f[336]; /*!< v0.40.1 */
    std::vector<void* > unk_v40_7; /*!< v0.40.1 */
    bool reindex_pathfinding; /*!< forces map_block.passable to be recomputed */
    int32_t frame_counter; /*!< increases by 1 every time . is pressed */
    std::vector<df::flow_info* > orphaned_flows; /*!< flows that are not tied to a map_block */
    struct DFHACK_EXPORT T_pathfinder {
      struct DFHACK_EXPORT T_boundary_heap {
        int32_t total_cost;
        int32_t local_cost;
        int16_t x;
        int16_t y;
        int32_t z;
        static struct_identity _identity;
      public:
        T_boundary_heap();
      };
      /**
       * A heap of current boundary tiles.
       */
      T_boundary_heap boundary_heap[80000];
      int32_t heap_count;
      df::coord pos1;
      df::coord pos2;
      int32_t dist_x;
      int32_t dist_y;
      int32_t dist_z;
      int32_t next_path_cost;
      bool wipe_path_cost;
      uint16_t next_path_tag;
      bool wipe_path_tag;
      int16_t next_walkable_id;
      int16_t plant_update_step;
      bool anon_1;
      int32_t anon_2;
      static struct_identity _identity;
    public:
      T_pathfinder();
    };
    T_pathfinder pathfinder;
    struct DFHACK_EXPORT T_cur_savegame {
      std::string save_dir;
      char anon_1[4];
      int32_t unk_v40_1; /*!< v0.40.1 */
      int32_t unk_v40_2; /*!< v0.40.1 */
      int32_t unk_v40_3; /*!< v0.40.1 */
      int32_t unk_v40_4; /*!< v0.40.1 */
      std::vector<std::string* > unk_v40_5; /*!< v0.40.1 */
      int32_t unk_v40_6; /*!< v0.40.1 */
      int32_t unk_v40_7; /*!< v0.40.1 */
      static struct_identity _identity;
    public:
      T_cur_savegame();
    };
    T_cur_savegame cur_savegame;
    struct DFHACK_EXPORT T_features {
      std::vector<df::feature_init* > map_features;
      std::vector<int16_t > feature_x;
      std::vector<int16_t > feature_y;
      std::vector<int16_t > feature_local_idx; /*!< same as map_block.local_feature */
      std::vector<int32_t > feature_global_idx;
      std::vector<df::feature_init* > anon_1; /*!< from unk_9C */
      std::vector<int16_t > anon_2; /*!< unk_9C.region.x */
      std::vector<int16_t > anon_3; /*!< unk_9C.region.y */
      std::vector<int16_t > anon_4; /*!< unk_9C.embark.x */
      std::vector<int16_t > anon_5; /*!< unk_9C.embark.y */
      std::vector<int16_t > anon_6; /*!< unk_9C.local_feature_idx */
      std::vector<int32_t > anon_7; /*!< unk_9C.global_feature_idx */
      std::vector<int32_t > anon_8; /*!< unk_9C.unk10 */
      std::vector<int16_t > anon_9; /*!< unk_9C.unk14 */
      std::vector<int16_t > anon_10; /*!< unk_9C.local.x */
      std::vector<int16_t > anon_11; /*!< unk_9C.local.y */
      std::vector<int16_t > anon_12; /*!< unk_9C.z_min */
      std::vector<int16_t > anon_13; /*!< unk_9C.z_min; yes, seemingly duplicate */
      std::vector<int16_t > anon_14; /*!< unk_9C.z_max */
      std::vector<bool> anon_15; /*!< v0.40.11 */
      static struct_identity _identity;
    public:
      T_features();
    };
    T_features features;
    bool anon_4;
    bool anon_5;
    struct DFHACK_EXPORT T_arena_spawn {
      std::vector<int16_t > race;
      std::vector<int16_t > caste;
      int32_t type;
      std::string anon_1; /*!< v0.34.08 */
      struct DFHACK_EXPORT T_item_types {
        df::item_type item_type;
        int16_t item_subtype;
        int16_t mattype;
        int32_t matindex;
        bool anon_1;
        static struct_identity _identity;
      public:
        T_item_types();
      };
      std::vector<T_item_types* > item_types[107]; /*!< true array */
      std::vector<void* > anon_2;
      std::vector<void* > anon_3;
      std::vector<void* > anon_4;
      struct DFHACK_EXPORT T_equipment {
        std::vector<df::job_skill > skills;
        std::vector<int32_t > skill_levels;
        std::vector<df::item_type > item_types;
        std::vector<int16_t > item_subtypes;
        df::material_vec_ref item_materials;
        std::vector<int32_t > item_counts;
        static struct_identity _identity;
      public:
        T_equipment();
      };
      T_equipment equipment;
      int32_t side;
      int32_t interaction;
      std::vector<void* > interactions; /*!< v0.34.01 */
      std::vector<int32_t > creature_cnt;
      int32_t anon_5;
      int32_t conflict_level;
      bool morale_enable;
      int16_t anon_6;
      uint16_t temperature;
      int16_t time;
      int32_t weather_column;
      int32_t weather_row;
      std::vector<df::plant_raw* > tree_types;
      int32_t tree_cursor;
      int32_t tree_age;
      std::string tree_filter;
      std::string tree_age_str;
      static struct_identity _identity;
    public:
      T_arena_spawn();
    };
    T_arena_spawn arena_spawn;
    char anon_6[4];
    struct DFHACK_EXPORT T_unk_19325c {
      struct DFHACK_EXPORT T_anon_1 {
        int32_t anon_1;
        int32_t anon_2;
        int16_t anon_3;
        int32_t anon_4;
        int32_t anon_5;
        int32_t anon_6;
        static struct_identity _identity;
      public:
        T_anon_1();
      };
      std::vector<T_anon_1* > anon_1;
      struct DFHACK_EXPORT T_anon_2 {
        int32_t anon_1;
        int32_t anon_2;
        static struct_identity _identity;
      public:
        T_anon_2();
      };
      std::vector<T_anon_2* > anon_2;
      struct DFHACK_EXPORT T_anon_3 {
        int16_t anon_1;
        int32_t anon_2;
        int32_t anon_3;
        int32_t anon_4;
        static struct_identity _identity;
      public:
        T_anon_3();
      };
      std::vector<T_anon_3* > anon_3;
      int32_t anon_4;
      int32_t anon_5;
      int32_t anon_6;
      static struct_identity _identity;
    public:
      T_unk_19325c();
    };
    T_unk_19325c unk_19325c;
    int32_t anon_7; /*!< 0.40.01 */
    static struct_identity _identity;
  public:
    world();
  };
  template<> struct DFHACK_EXPORT bitfield_traits<world::T_status::T_flags> {
    typedef uint32_t base_type;
    typedef world::T_status::T_flags bitfield_type;
    static const int bit_count = sizeof(base_type)*8;
    static const bitfield_item_info bits[bit_count];
  };
  template<> struct DFHACK_EXPORT identity_traits<world::T_status::T_flags> {
    static bitfield_identity identity;
    static bitfield_identity *get() { return &identity; }
  };
  template<> struct DFHACK_EXPORT bitfield_traits<world::T_status::T_slots::T_flags> {
    typedef int32_t base_type;
    typedef world::T_status::T_slots::T_flags bitfield_type;
    static const int bit_count = sizeof(base_type)*8;
    static const bitfield_item_info bits[bit_count];
  };
  template<> struct DFHACK_EXPORT identity_traits<world::T_status::T_slots::T_flags> {
    static bitfield_identity identity;
    static bitfield_identity *get() { return &identity; }
  };
}
#endif
