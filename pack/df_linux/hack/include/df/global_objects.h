/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_GLOBAL_OBJECTS_H
#define DF_GLOBAL_OBJECTS_H
#ifndef DF_GAME_MODE_H
#include "game_mode.h"
#endif
#ifndef DF_GAME_TYPE_H
#include "game_type.h"
#endif
#ifndef DF_ITEM_TYPE_H
#include "item_type.h"
#endif
#ifndef DF_WEATHER_TYPE_H
#include "weather_type.h"
#endif
namespace df {
  struct announcements;
  struct d_init;
  struct enabler;
  struct flow_info;
  struct graphic;
  struct init;
  struct interfacest;
  struct item;
  struct map_renderer;
  struct texture_handler;
  struct timed_event;
  struct ui;
  struct ui_advmode;
  struct ui_build_selector;
  struct ui_look_list;
  struct ui_sidebar_menus;
  struct ui_unit_view_mode;
  struct unit;
  struct world;
  namespace global {
    void InitGlobals();
    extern global_identity _identity;
    extern DFHACK_EXPORT int32_t *activity_next_id;
    extern DFHACK_EXPORT df::announcements *announcements;
    extern DFHACK_EXPORT int32_t *art_image_chunk_next_id;
    extern DFHACK_EXPORT int32_t *artifact_next_id;
    extern DFHACK_EXPORT int32_t *building_next_id;
    extern DFHACK_EXPORT std::vector<int32_t > *created_item_count;
    extern DFHACK_EXPORT std::vector<int16_t > *created_item_matindex;
    extern DFHACK_EXPORT std::vector<int16_t > *created_item_mattype;
    extern DFHACK_EXPORT std::vector<int16_t > *created_item_subtype;
    extern DFHACK_EXPORT std::vector<df::item_type > *created_item_type;
    extern DFHACK_EXPORT int32_t *crime_next_id;
    extern DFHACK_EXPORT int8_t *cur_season;
    extern DFHACK_EXPORT int32_t *cur_season_tick;
    extern DFHACK_EXPORT int32_t *cur_year;
    extern DFHACK_EXPORT int32_t *cur_year_tick;
    extern DFHACK_EXPORT int32_t *cur_year_tick_advmode;
    typedef df::weather_type T_current_weather[5][5];
    extern DFHACK_EXPORT T_current_weather *current_weather;
    struct DFHACK_EXPORT T_cursor {
      int32_t x;
      int32_t y;
      int32_t z;
      static struct_identity _identity;
    public:
      T_cursor();
    };
    extern DFHACK_EXPORT T_cursor *cursor;
    extern DFHACK_EXPORT df::d_init *d_init;
    extern DFHACK_EXPORT bool *debug_combat; /*!< Functionality unknown, combat-related */
    extern DFHACK_EXPORT bool *debug_fastmining; /*!< All dwarves mine as fast as a Legendary Miner */
    extern DFHACK_EXPORT bool *debug_noberserk; /*!< Insanity can only result in Crazed or Melancholy, never Berserk */
    extern DFHACK_EXPORT bool *debug_nodrink; /*!< Disables thirst on everything */
    extern DFHACK_EXPORT bool *debug_noeat; /*!< Disables hunger on everything */
    extern DFHACK_EXPORT bool *debug_nomoods; /*!< Same as ARTIFACTS:NO */
    extern DFHACK_EXPORT bool *debug_nopause; /*!< Prevents the game from being paused */
    extern DFHACK_EXPORT bool *debug_nosleep; /*!< Disables drowsiness on everything */
    extern DFHACK_EXPORT bool *debug_showambush; /*!< Makes hidden ambushers visible on-screen and in the units list (but not to your citizens) */
    extern DFHACK_EXPORT bool *debug_turbospeed; /*!< All units move and work at maximum speed */
    extern DFHACK_EXPORT bool *debug_wildlife; /*!< Functionality unknown, wildlife-related */
    extern DFHACK_EXPORT df::enabler *enabler;
    extern DFHACK_EXPORT int32_t *entity_next_id;
    extern DFHACK_EXPORT int32_t *flow_guide_next_id;
    extern DFHACK_EXPORT std::vector<df::flow_info* > *flows;
    extern DFHACK_EXPORT int32_t *formation_next_id;
    extern DFHACK_EXPORT df::game_mode *gamemode;
    extern DFHACK_EXPORT df::game_type *gametype;
    extern DFHACK_EXPORT df::graphic *gps;
    extern DFHACK_EXPORT df::interfacest *gview;
    extern DFHACK_EXPORT int32_t *hist_event_collection_next_id;
    extern DFHACK_EXPORT int32_t *hist_event_next_id;
    extern DFHACK_EXPORT int32_t *hist_figure_next_id;
    extern DFHACK_EXPORT int32_t *identity_next_id;
    extern DFHACK_EXPORT int32_t *incident_next_id;
    extern DFHACK_EXPORT df::init *init;
    extern DFHACK_EXPORT int32_t *interaction_instance_next_id;
    extern DFHACK_EXPORT int32_t *item_next_id;
    extern DFHACK_EXPORT int32_t *job_next_id;
    extern DFHACK_EXPORT int32_t *machine_next_id;
    extern DFHACK_EXPORT df::map_renderer *map_renderer;
    extern DFHACK_EXPORT int32_t *nemesis_next_id;
    extern DFHACK_EXPORT bool *pause_state;
    extern DFHACK_EXPORT bool *process_dig; /*!< Requests dig designations to be processed next frame. */
    extern DFHACK_EXPORT bool *process_jobs; /*!< Requests building jobs to be processed next frame. */
    extern DFHACK_EXPORT int32_t *proj_next_id;
    extern DFHACK_EXPORT bool *save_on_exit; /*!< Ending the game saves its state back to world.dat or world.sav */
    extern DFHACK_EXPORT int32_t *schedule_next_id;
    struct DFHACK_EXPORT T_selection_rect {
      int32_t start_x;
      int32_t start_y;
      int32_t start_z;
      int32_t end_x; /*!< only valid for an instant while its being completed */
      int32_t end_y;
      int32_t end_z;
      static struct_identity _identity;
    public:
      T_selection_rect();
    };
    extern DFHACK_EXPORT T_selection_rect *selection_rect;
    extern DFHACK_EXPORT int32_t *squad_next_id;
    extern DFHACK_EXPORT uint8_t *standing_orders_auto_butcher;
    extern DFHACK_EXPORT uint8_t *standing_orders_auto_collect_webs;
    extern DFHACK_EXPORT uint8_t *standing_orders_auto_fishery;
    extern DFHACK_EXPORT uint8_t *standing_orders_auto_kiln;
    extern DFHACK_EXPORT uint8_t *standing_orders_auto_kitchen;
    extern DFHACK_EXPORT uint8_t *standing_orders_auto_loom;
    extern DFHACK_EXPORT uint8_t *standing_orders_auto_other;
    extern DFHACK_EXPORT uint8_t *standing_orders_auto_slaughter;
    extern DFHACK_EXPORT uint8_t *standing_orders_auto_smelter;
    extern DFHACK_EXPORT uint8_t *standing_orders_auto_tan;
    extern DFHACK_EXPORT uint8_t *standing_orders_dump_bones;
    extern DFHACK_EXPORT uint8_t *standing_orders_dump_corpses;
    extern DFHACK_EXPORT uint8_t *standing_orders_dump_hair;
    extern DFHACK_EXPORT uint8_t *standing_orders_dump_other;
    extern DFHACK_EXPORT uint8_t *standing_orders_dump_shells;
    extern DFHACK_EXPORT uint8_t *standing_orders_dump_skins;
    extern DFHACK_EXPORT uint8_t *standing_orders_dump_skulls;
    extern DFHACK_EXPORT uint8_t *standing_orders_farmer_harvest;
    extern DFHACK_EXPORT uint8_t *standing_orders_forbid_other_dead_items;
    extern DFHACK_EXPORT uint8_t *standing_orders_forbid_other_nohunt;
    extern DFHACK_EXPORT uint8_t *standing_orders_forbid_own_dead;
    extern DFHACK_EXPORT uint8_t *standing_orders_forbid_own_dead_items;
    extern DFHACK_EXPORT uint8_t *standing_orders_forbid_used_ammo;
    extern DFHACK_EXPORT uint8_t *standing_orders_gather_animals;
    extern DFHACK_EXPORT uint8_t *standing_orders_gather_bodies;
    extern DFHACK_EXPORT uint8_t *standing_orders_gather_food;
    extern DFHACK_EXPORT uint8_t *standing_orders_gather_furniture;
    extern DFHACK_EXPORT uint8_t *standing_orders_gather_minerals;
    extern DFHACK_EXPORT uint8_t *standing_orders_gather_refuse;
    extern DFHACK_EXPORT uint8_t *standing_orders_gather_refuse_outside;
    extern DFHACK_EXPORT uint8_t *standing_orders_gather_vermin_remains;
    extern DFHACK_EXPORT uint8_t *standing_orders_gather_wood;
    extern DFHACK_EXPORT uint8_t *standing_orders_job_cancel_announce;
    extern DFHACK_EXPORT uint8_t *standing_orders_mix_food;
    extern DFHACK_EXPORT uint8_t *standing_orders_use_dyed_cloth;
    extern DFHACK_EXPORT uint8_t *standing_orders_zoneonly_drink;
    extern DFHACK_EXPORT uint8_t *standing_orders_zoneonly_fish;
    extern DFHACK_EXPORT int32_t *task_next_id;
    extern DFHACK_EXPORT df::texture_handler *texture;
    extern DFHACK_EXPORT std::vector<df::timed_event* > *timed_events;
    extern DFHACK_EXPORT df::ui *ui;
    extern DFHACK_EXPORT df::ui_advmode *ui_advmode;
    extern DFHACK_EXPORT int8_t *ui_area_map_width;
    extern DFHACK_EXPORT df::ui_build_selector *ui_build_selector;
    extern DFHACK_EXPORT std::vector<char > *ui_building_assign_is_marked;
    extern DFHACK_EXPORT std::vector<df::item* > *ui_building_assign_items;
    extern DFHACK_EXPORT std::vector<int8_t > *ui_building_assign_type;
    extern DFHACK_EXPORT std::vector<df::unit* > *ui_building_assign_units;
    extern DFHACK_EXPORT bool *ui_building_in_assign;
    extern DFHACK_EXPORT bool *ui_building_in_resize;
    extern DFHACK_EXPORT int32_t *ui_building_item_cursor;
    extern DFHACK_EXPORT int32_t *ui_look_cursor;
    extern DFHACK_EXPORT df::ui_look_list *ui_look_list;
    extern DFHACK_EXPORT int8_t *ui_menu_width;
    extern DFHACK_EXPORT int32_t *ui_selected_unit;
    extern DFHACK_EXPORT df::ui_sidebar_menus *ui_sidebar_menus;
    extern DFHACK_EXPORT df::ui_unit_view_mode *ui_unit_view_mode;
    extern DFHACK_EXPORT bool *ui_workshop_in_add;
    extern DFHACK_EXPORT int32_t *ui_workshop_job_cursor;
    extern DFHACK_EXPORT int32_t *unit_chunk_next_id;
    extern DFHACK_EXPORT int32_t *unit_next_id;
    extern DFHACK_EXPORT int32_t *vehicle_next_id;
    extern DFHACK_EXPORT int32_t *window_x;
    extern DFHACK_EXPORT int32_t *window_y;
    extern DFHACK_EXPORT int32_t *window_z;
    extern DFHACK_EXPORT df::world *world;
    extern DFHACK_EXPORT int32_t *written_content_next_id;
  }
}
#endif
