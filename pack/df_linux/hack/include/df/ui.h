/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_UI_H
#define DF_UI_H
#ifndef DF_COORD_H
#include "coord.h"
#endif
#ifndef DF_ENTITY_ACTIVITY_STATISTICS_H
#include "entity_activity_statistics.h"
#endif
#ifndef DF_GHOST_TYPE_H
#include "ghost_type.h"
#endif
#ifndef DF_ITEM_TYPE_H
#include "item_type.h"
#endif
#ifndef DF_STOCKPILE_SETTINGS_H
#include "stockpile_settings.h"
#endif
#ifndef DF_UI_HOTKEY_H
#include "ui_hotkey.h"
#endif
#ifndef DF_UI_SIDEBAR_MODE_H
#include "ui_sidebar_mode.h"
#endif
namespace df {
  struct activity_info;
  struct burrow;
  struct caravan_state;
  struct dipscript_info;
  struct dipscript_popup;
  struct hauling_route;
  struct hauling_stop;
  struct historical_entity;
  struct invasion_info;
  struct item;
  struct meeting_diplomat_info;
  struct party_info;
  struct punishment;
  struct room_rent_info;
  struct route_stockpile_link;
  struct squad;
  struct squad_ammo_spec;
  struct stop_depart_condition;
  struct training_assignment;
  struct unit;
  struct vehicle;
  struct DFHACK_EXPORT ui {
    int16_t game_state; /*!< 2 running, 1 lost to siege, 0 lost */
    int32_t lost_to_siege_civ;
    struct DFHACK_EXPORT T_tax_collection {
      int16_t state;
      int32_t check_timer;
      std::vector<int32_t > rooms;
      int32_t reach_room_timer;
      int32_t tc_protect_timer;
      int32_t guard1_reach_tc_timer;
      int32_t guard2_reach_tc_timer;
      int16_t collected;
      int16_t quota;
      df::coord collector_pos;
      int16_t guard_pos_x[2];
      int16_t guard_pos_y[2];
      int16_t guard_pos_z[2];
      df::unit* collector;
      df::unit* guard1;
      df::unit* guard2;
      int8_t guard_lack_complained;
      static struct_identity _identity;
    public:
      T_tax_collection();
    };
    T_tax_collection tax_collection;
    int32_t anon_1;
    int32_t manager_cooldown; /*!< 0-1008 */
    int32_t bookkeeper_cooldown; /*!< 0-1008 */
    int32_t bookkeeper_precision;
    int16_t bookkeeper_settings;
    std::vector<df::caravan_state* > caravans;
    int8_t anon_2;
    int16_t fortress_rank;
    int16_t progress_population; /*!< ? */
    int16_t progress_trade; /*!< ? */
    int16_t progress_production; /*!< ? */
    bool king_arrived;
    bool king_hasty;
    bool economy_active;
    bool ignore_labor_shortage;
    bool justice_active;
    uint16_t anon_3;
    uint16_t anon_4;
    int16_t manager_timer;
    struct DFHACK_EXPORT T_becoming_capital {
      int32_t desired_architecture;
      int32_t desired_offerings;
      static struct_identity _identity;
    public:
      T_becoming_capital();
    };
    T_becoming_capital becoming_capital;
    int16_t units_killed[152];
    int32_t guild_wages[6];
    int16_t guild_happiness[6];
    int16_t labor_slowdown_timer[6];
    std::vector<int32_t > currency_value;
    int32_t trees_removed;
    int32_t anon_5;
    int32_t fortress_age; /*!< ?; +1 per 10; used in first 2 migrant waves etc */
    df::entity_activity_statistics tasks;
    std::vector<int32_t > meeting_requests; /*!< guild complaints and diplomats */
    std::vector<df::activity_info* > activities;
    std::vector<df::meeting_diplomat_info* > dip_meeting_info;
    std::vector<int32_t > aid_requesters;
    bool game_over;
    struct DFHACK_EXPORT T_invasions {
      std::vector<df::invasion_info* > list;
      int32_t next_id;
      static struct_identity _identity;
    public:
      T_invasions();
    };
    T_invasions invasions;
    std::vector<void* > crimes; /*!< no longer used */
    std::vector<df::punishment* > punishments;
    std::vector<df::party_info* > parties;
    std::vector<df::room_rent_info* > room_rent;
    std::vector<df::dipscript_info* > dipscripts;
    std::vector<df::dipscript_popup* > dipscript_popups; /*!< cause viewscreen_meetingst to pop up */
    struct DFHACK_EXPORT T_kitchen {
      std::vector<df::item_type > item_types;
      std::vector<int16_t > item_subtypes;
      std::vector<int16_t > mat_types;
      std::vector<int32_t > mat_indices;
      std::vector<int8_t > exc_types;
      static struct_identity _identity;
    public:
      T_kitchen();
    };
    T_kitchen kitchen;
    std::vector<char > economic_stone;
    union T_unk23c8_flags {
      uint32_t whole;
      struct {
        uint32_t anon_1 : 1;
        uint32_t recheck_aid_requests : 1;
      } bits;
      enum Shift {
        shift_anon_1 = 0,
        shift_recheck_aid_requests = 1
      };
      enum Mask : uint32_t {
        mask_anon_1 = 0x1U,
        mask_recheck_aid_requests = 0x2U
      };
      T_unk23c8_flags(uint32_t whole_ = 0) : whole(whole_) {};
    };
    T_unk23c8_flags unk23c8_flags;
    int16_t mood_cooldown;
    int32_t civ_id;
    int32_t site_id;
    int32_t group_id; /*!< i.e. specifically the fortress dwarves */
    int16_t race_id;
    std::vector<int16_t > farm_crops;
    std::vector<int8_t > farm_seasons;
    struct DFHACK_EXPORT T_economy_prices {
      struct DFHACK_EXPORT T_price_adjustment {
        std::vector<int32_t > general_items;
        std::vector<int32_t > weapons;
        std::vector<int32_t > armor;
        std::vector<int32_t > handwear;
        std::vector<int32_t > footwear;
        std::vector<int32_t > headwear;
        std::vector<int32_t > legwear;
        std::vector<int32_t > prepared_food;
        std::vector<int32_t > wood;
        std::vector<int32_t > thread_cloth;
        std::vector<int32_t > bone;
        std::vector<int32_t > tooth;
        std::vector<int32_t > horn;
        std::vector<int32_t > pearl;
        std::vector<int32_t > shell;
        std::vector<int32_t > leather;
        std::vector<int32_t > silk;
        std::vector<int32_t > yarn;
        std::vector<int32_t > inorganic;
        std::vector<int32_t > meat;
        std::vector<int32_t > fish;
        std::vector<int32_t > plants;
        std::vector<int32_t > drinks;
        std::vector<int32_t > extract_animal;
        std::vector<int32_t > extract_plant;
        std::vector<int32_t > mill_animal;
        std::vector<int32_t > mill_plant;
        std::vector<int32_t > cheese_animal;
        std::vector<int32_t > cheese_plant;
        std::vector<int32_t > pets;
        static struct_identity _identity;
      public:
        T_price_adjustment();
      };
      T_price_adjustment price_adjustment;
      struct DFHACK_EXPORT T_price_setter {
        std::vector<df::unit* > general_items;
        std::vector<df::unit* > weapons;
        std::vector<df::unit* > armor;
        std::vector<df::unit* > handwear;
        std::vector<df::unit* > footwear;
        std::vector<df::unit* > headwear;
        std::vector<df::unit* > legwear;
        std::vector<df::unit* > prepared_food;
        std::vector<df::unit* > wood;
        std::vector<df::unit* > thread_cloth;
        std::vector<df::unit* > bone;
        std::vector<df::unit* > tooth;
        std::vector<df::unit* > horn;
        std::vector<df::unit* > pearl;
        std::vector<df::unit* > shell;
        std::vector<df::unit* > leather;
        std::vector<df::unit* > silk;
        std::vector<df::unit* > yarn;
        std::vector<df::unit* > inorganic;
        std::vector<df::unit* > meat;
        std::vector<df::unit* > fish;
        std::vector<df::unit* > plants;
        std::vector<df::unit* > drinks;
        std::vector<df::unit* > extract_animal;
        std::vector<df::unit* > extract_plant;
        std::vector<df::unit* > mill_animal;
        std::vector<df::unit* > mill_plant;
        std::vector<df::unit* > cheese_animal;
        std::vector<df::unit* > cheese_plant;
        std::vector<df::unit* > pets;
        static struct_identity _identity;
      public:
        T_price_setter();
      };
      T_price_setter price_setter;
      static struct_identity _identity;
    public:
      T_economy_prices();
    };
    T_economy_prices economy_prices;
    struct DFHACK_EXPORT T_stockpile {
      int32_t reserved_bins;
      int32_t reserved_barrels;
      df::stockpile_settings custom_settings;
      static struct_identity _identity;
    public:
      T_stockpile();
    };
    T_stockpile stockpile;
    struct DFHACK_EXPORT T_unk2a8c {
      int16_t unk1;
      int16_t unk2;
      static struct_identity _identity;
    public:
      T_unk2a8c();
    };
    T_unk2a8c unk2a8c[4][768];
    std::vector<int16_t > unk_mapedge_x;
    std::vector<int16_t > unk_mapedge_y;
    std::vector<int16_t > unk_mapedge_z;
    struct DFHACK_EXPORT T_map_edge {
      std::vector<int16_t > layer_x[5];
      std::vector<int16_t > surface_x;
      std::vector<int16_t > layer_y[5];
      std::vector<int16_t > surface_y;
      std::vector<int16_t > layer_z[5];
      std::vector<int16_t > surface_z;
      static struct_identity _identity;
    public:
      T_map_edge();
    };
    T_map_edge map_edge;
    std::vector<void* > unk5b88[7];
    struct DFHACK_EXPORT T_waypoints {
      struct DFHACK_EXPORT T_points {
        int32_t id;
        uint8_t tile;
        int16_t fg_color;
        int16_t bg_color;
        std::string name;
        std::string comment;
        df::coord pos;
        static struct_identity _identity;
      public:
        T_points();
      };
      std::vector<T_points* > points;
      struct DFHACK_EXPORT T_routes {
        int32_t id;
        std::string name;
        std::vector<int32_t > points;
        static struct_identity _identity;
      public:
        T_routes();
      };
      std::vector<T_routes* > routes;
      int16_t sym_selector;
      int16_t anon_1;
      int32_t cur_point_index;
      bool in_edit_name_mode;
      int8_t anon_2;
      uint8_t sym_tile;
      int16_t sym_fg_color;
      int16_t sym_bg_color;
      std::vector<std::string* > unk5c04;
      int32_t next_point_id;
      int32_t next_route_id;
      int32_t sel_route_idx;
      int32_t sel_route_waypt_idx;
      bool in_edit_waypts_mode;
      static struct_identity _identity;
    public:
      T_waypoints();
    };
    T_waypoints waypoints;
    struct DFHACK_EXPORT T_burrows {
      std::vector<df::burrow* > list;
      int32_t next_id;
      int32_t sel_index;
      int32_t sel_id;
      bool in_confirm_delete;
      bool in_add_units_mode;
      std::vector<df::unit* > list_units;
      std::vector<bool> sel_units;
      int32_t unit_cursor_pos;
      bool in_define_mode;
      df::coord rect_start;
      int16_t brush_mode;
      bool in_edit_name_mode;
      int16_t sym_selector;
      int16_t sym_tile;
      int16_t sym_fg_color;
      int16_t sym_bg_color;
      static struct_identity _identity;
    public:
      T_burrows();
    };
    T_burrows burrows;
    struct DFHACK_EXPORT T_alerts {
      struct DFHACK_EXPORT T_list {
        int32_t id;
        std::string name;
        std::vector<int32_t > burrows;
        static struct_identity _identity;
      public:
        T_list();
      };
      std::vector<T_list* > list;
      int32_t next_id;
      int32_t civ_alert_idx;
      static struct_identity _identity;
    public:
      T_alerts();
    };
    T_alerts alerts;
    struct DFHACK_EXPORT T_equipment {
      std::vector<df::item* > items_by_type1[112];
      std::vector<df::item* > items_unassigned[112];
      std::vector<df::item* > items_assigned[112];
      union T_update {
        uint32_t whole;
        struct {
          uint32_t weapon : 1;
          uint32_t armor : 1;
          uint32_t shoes : 1;
          uint32_t shield : 1;
          uint32_t helm : 1;
          uint32_t gloves : 1;
          uint32_t ammo : 1;
          uint32_t pants : 1;
          uint32_t backpack : 1;
          uint32_t quiver : 1;
          uint32_t flask : 1;
          uint32_t anon_1 : 1;
          uint32_t buildings : 1;
        } bits;
        enum Shift {
          shift_weapon = 0,
          shift_armor = 1,
          shift_shoes = 2,
          shift_shield = 3,
          shift_helm = 4,
          shift_gloves = 5,
          shift_ammo = 6,
          shift_pants = 7,
          shift_backpack = 8,
          shift_quiver = 9,
          shift_flask = 10,
          shift_anon_1 = 11,
          shift_buildings = 12
        };
        enum Mask : uint32_t {
          mask_weapon = 0x1U,
          mask_armor = 0x2U,
          mask_shoes = 0x4U,
          mask_shield = 0x8U,
          mask_helm = 0x10U,
          mask_gloves = 0x20U,
          mask_ammo = 0x40U,
          mask_pants = 0x80U,
          mask_backpack = 0x100U,
          mask_quiver = 0x200U,
          mask_flask = 0x400U,
          mask_anon_1 = 0x800U,
          mask_buildings = 0x1000U
        };
        T_update(uint32_t whole_ = 0) : whole(whole_) {};
      };
      T_update update;
      std::vector<int32_t > work_weapons; /*!< i.e. woodcutter axes, and miner picks */
      std::vector<int32_t > work_units;
      std::vector<df::squad_ammo_spec* > hunter_ammunition;
      std::vector<int32_t > ammo_items;
      std::vector<int32_t > ammo_units;
      std::vector<df::training_assignment* > training_assignments; /*!< v0.34.06, sorted by animal_id */
      static struct_identity _identity;
    public:
      T_equipment();
    };
    T_equipment equipment;
    /**
     * v0.34.08
     */
    struct DFHACK_EXPORT T_hauling {
      std::vector<df::hauling_route* > routes;
      int32_t next_id;
      std::vector<df::hauling_route* > view_routes;
      std::vector<df::hauling_stop* > view_stops;
      std::vector<int32_t > view_bad;
      int32_t cursor_top;
      bool in_stop;
      int32_t cursor_stop;
      std::vector<df::stop_depart_condition* > stop_conditions;
      std::vector<df::route_stockpile_link* > stop_links;
      bool in_advanced_cond;
      bool in_assign_vehicle;
      int32_t cursor_vehicle;
      std::vector<df::vehicle* > vehicles;
      bool in_name;
      std::string old_name;
      static struct_identity _identity;
    public:
      T_hauling();
    };
    T_hauling hauling; /*!< v0.34.08 */
    struct DFHACK_EXPORT T_main {
      df::ui_hotkey hotkeys[16];
      int32_t traffic_cost_high;
      int32_t traffic_cost_normal;
      int32_t traffic_cost_low;
      int32_t traffic_cost_restricted;
      struct DFHACK_EXPORT T_dead_citizens {
        int32_t unit_id;
        int32_t histfig_id;
        int32_t death_year;
        int32_t death_time;
        int32_t timer; /*!< +1 per 10 */
        df::ghost_type ghost_type;
        static struct_identity _identity;
      public:
        T_dead_citizens();
      };
      std::vector<T_dead_citizens* > dead_citizens; /*!< ? */
      df::historical_entity* fortress_entity; /*!< entity pointed to by group_id */
      enum_field<df::ui_sidebar_mode,int16_t> mode;
      int16_t unk1;
      int16_t selected_traffic_cost; /*!< For changing the above costs. */
      bool autosave_request;
      bool autosave_unk; /*!< set to 0 when a_rq set to 1 */
      int32_t unk6df4;
      int16_t selected_hotkey;
      bool in_rename_hotkey;
      static struct_identity _identity;
    public:
      T_main();
    };
    T_main main;
    struct DFHACK_EXPORT T_squads {
      std::vector<df::squad* > list; /*!< valid only when ui is displayed */
      std::vector<void* > unk6e08;
      std::vector<bool> sel_squads;
      std::vector<int32_t > indiv_selected;
      bool in_select_indiv;
      int32_t sel_indiv_squad;
      char anon_1[8];
      int32_t unk48;
      df::squad* unk4c;
      bool in_move_order;
      int32_t point_list_scroll;
      bool in_kill_order;
      std::vector<df::unit* > kill_rect_targets;
      char anon_2[4];
      bool in_kill_list;
      std::vector<df::unit* > kill_targets;
      std::vector<bool> sel_kill_targets;
      char anon_3[4];
      bool in_kill_rect;
      df::coord rect_start;
      static struct_identity _identity;
    public:
      T_squads();
    };
    T_squads squads;
    int32_t follow_unit;
    int32_t follow_item;
    std::vector<int16_t > selected_farm_crops; /*!< valid for the currently queried farm plot */
    std::vector<bool> available_seeds;
    static struct_identity _identity;
  public:
    ui();
  };
  template<> struct DFHACK_EXPORT bitfield_traits<ui::T_unk23c8_flags> {
    typedef uint32_t base_type;
    typedef ui::T_unk23c8_flags bitfield_type;
    static const int bit_count = sizeof(base_type)*8;
    static const bitfield_item_info bits[bit_count];
  };
  template<> struct DFHACK_EXPORT identity_traits<ui::T_unk23c8_flags> {
    static bitfield_identity identity;
    static bitfield_identity *get() { return &identity; }
  };
  template<> struct DFHACK_EXPORT bitfield_traits<ui::T_equipment::T_update> {
    typedef uint32_t base_type;
    typedef ui::T_equipment::T_update bitfield_type;
    static const int bit_count = sizeof(base_type)*8;
    static const bitfield_item_info bits[bit_count];
  };
  template<> struct DFHACK_EXPORT identity_traits<ui::T_equipment::T_update> {
    static bitfield_identity identity;
    static bitfield_identity *get() { return &identity; }
  };
}
#endif
