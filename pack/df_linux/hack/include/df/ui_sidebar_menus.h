/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_UI_SIDEBAR_MENUS_H
#define DF_UI_SIDEBAR_MENUS_H
#ifndef DF_JOB_MATERIAL_CATEGORY_H
#include "job_material_category.h"
#endif
#ifndef DF_SQUAD_USE_FLAGS_H
#include "squad_use_flags.h"
#endif
namespace df {
  struct building_civzonest;
  struct entity_position;
  struct entity_position_assignment;
  struct interface_button_buildingst;
  struct interface_button_constructionst;
  struct spatter;
  struct squad;
  struct unit_inventory_item;
  struct DFHACK_EXPORT ui_sidebar_menus {
    /**
     * v0.40.20
     */
    struct DFHACK_EXPORT T_designation {
      bool marker_only;
      bool priority_set; /*!< set to one if using +/- */
      int32_t priority; /*!< *1000 */
      enum T_mine_mode : int32_t {
        All,
        AutoMine,
        Economic,
        Gems
      };
      T_mine_mode mine_mode;
      static struct_identity _identity;
    public:
      T_designation();
    };
    T_designation designation; /*!< v0.40.20 */
    struct DFHACK_EXPORT T_workshop_job {
      std::vector<df::interface_button_buildingst* > choices_all;
      std::vector<df::interface_button_buildingst* > choices_visible;
      int32_t cursor;
      int32_t category_id; /*!< weapons, armor, etc */
      int16_t mat_type;
      int32_t mat_index;
      df::job_material_category material_category;
      static struct_identity _identity;
    public:
      T_workshop_job();
    };
    T_workshop_job workshop_job;
    struct DFHACK_EXPORT T_building {
      std::vector<df::interface_button_constructionst* > choices_all;
      std::vector<df::interface_button_constructionst* > choices_visible;
      int32_t category_id;
      int32_t cursor;
      static struct_identity _identity;
    public:
      T_building();
    };
    T_building building;
    struct DFHACK_EXPORT T_zone {
      bool remove;
      char anon_1[1];
      enum T_mode : int16_t {
        Rectangle,
        Flow,
        FloorFlow
      };
      T_mode mode;
      df::building_civzonest* selected;
      static struct_identity _identity;
    public:
      T_zone();
    };
    T_zone zone;
    struct DFHACK_EXPORT T_unit {
      std::vector<df::unit_inventory_item* > inv_items;
      std::vector<df::spatter* > inv_spatters;
      bool in_new_squad; /*!< v0.34.08 */
      int32_t cursor_uniform; /*!< v0.34.08 */
      int32_t unk_88n_cursor; /*!< v0.34.08 */
      std::vector<df::squad* > squads; /*!< v0.34.08 */
      std::vector<df::entity_position* > squad_pos; /*!< v0.34.08 */
      std::vector<df::entity_position_assignment* > squad_assn; /*!< v0.34.08 */
      std::vector<bool> squad_unk1; /*!< v0.34.08 */
      std::vector<void* > squad_unk2; /*!< v0.34.08 */
      df::entity_position* anon_1;
      df::entity_position_assignment* anon_2;
      df::entity_position* anon_3;
      int8_t in_squad;
      int8_t anon_4;
      int8_t anon_5;
      int8_t anon_6;
      int32_t anon_7;
      int32_t unk_80;
      int32_t unk_84;
      int32_t unk_88;
      int32_t unk_8c;
      int32_t unk_90;
      std::vector<int32_t > list;
      int8_t unk_a0;
      int8_t unk_a1;
      std::vector<int32_t > skills;
      bool show_combat;
      bool show_labor;
      bool show_misc;
      static struct_identity _identity;
    public:
      T_unit();
    };
    T_unit unit;
    struct DFHACK_EXPORT T_barracks {
      int32_t squad_cursor;
      std::vector<df::squad* > squads;
      std::vector<df::squad_use_flags > uses;
      bool in_rename;
      bool in_positions;
      df::squad* position_squad;
      int32_t position_cursor;
      bool in_position_squads;
      std::vector<df::squad* > position_squads;
      int32_t position_squad_cursor;
      static struct_identity _identity;
    public:
      T_barracks();
    };
    T_barracks barracks;
    struct DFHACK_EXPORT T_minimap {
      int32_t data[23][23];
      bool need_render;
      bool need_scan;
      int16_t z_level;
      uint8_t tile[23][23];
      int16_t tile_fg[23][23];
      int16_t tile_bg[23][23];
      int16_t tile_bold[23][23];
      static struct_identity _identity;
    public:
      T_minimap();
    };
    T_minimap minimap;
    struct DFHACK_EXPORT T_unk {
      std::string anon_1;
      std::vector<std::string* > anon_2;
      int32_t unk_17c0;
      int32_t unk_17c4;
      int8_t unk_17c8;
      std::string worldgen_param_set;
      int8_t unk_17d0;
      int32_t num_speech_tokens;
      int8_t unk_17d8;
      static struct_identity _identity;
    public:
      T_unk();
    };
    T_unk unk;
    static struct_identity _identity;
  public:
    ui_sidebar_menus();
  };
  template<> struct DFHACK_EXPORT identity_traits<ui_sidebar_menus::T_designation::T_mine_mode> {
    static enum_identity identity;
    static enum_identity *get() { return &identity; }
  };
  template<> struct DFHACK_EXPORT enum_traits<ui_sidebar_menus::T_designation::T_mine_mode> {
    typedef int32_t base_type;
    typedef ui_sidebar_menus::T_designation::T_mine_mode enum_type;
    static const base_type first_item_value = 0;
    static const base_type last_item_value = 3;
    static inline bool is_valid(enum_type value) {
      return (base_type(value) >= first_item_value && base_type(value) <= last_item_value);
    }
    static const enum_type first_item = (enum_type)first_item_value;
    static const enum_type last_item = (enum_type)last_item_value;
    static const char *const key_table[4];
  };
  template<> struct DFHACK_EXPORT identity_traits<ui_sidebar_menus::T_zone::T_mode> {
    static enum_identity identity;
    static enum_identity *get() { return &identity; }
  };
  template<> struct DFHACK_EXPORT enum_traits<ui_sidebar_menus::T_zone::T_mode> {
    typedef int16_t base_type;
    typedef ui_sidebar_menus::T_zone::T_mode enum_type;
    static const base_type first_item_value = 0;
    static const base_type last_item_value = 2;
    static inline bool is_valid(enum_type value) {
      return (base_type(value) >= first_item_value && base_type(value) <= last_item_value);
    }
    static const enum_type first_item = (enum_type)first_item_value;
    static const enum_type last_item = (enum_type)last_item_value;
    static const char *const key_table[3];
  };
}
#endif
