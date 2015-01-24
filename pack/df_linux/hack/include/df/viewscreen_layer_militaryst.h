/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_VIEWSCREEN_LAYER_MILITARYST_H
#define DF_VIEWSCREEN_LAYER_MILITARYST_H
#ifndef DF_ENTITY_MATERIAL_CATEGORY_H
#include "entity_material_category.h"
#endif
#ifndef DF_ITEM_TYPE_H
#include "item_type.h"
#endif
#ifndef DF_JOB_SKILL_H
#include "job_skill.h"
#endif
#ifndef DF_MATERIAL_VEC_REF_H
#include "material_vec_ref.h"
#endif
#ifndef DF_PROFESSION_H
#include "profession.h"
#endif
#ifndef DF_UNIFORM_CATEGORY_H
#include "uniform_category.h"
#endif
#ifndef DF_VIEWSCREEN_LAYER_H
#include "viewscreen_layer.h"
#endif
namespace df {
  struct entity_position;
  struct entity_position_assignment;
  struct entity_uniform;
  struct entity_uniform_item;
  struct item;
  struct squad;
  struct squad_uniform_spec;
  struct unit;
  struct DFHACK_EXPORT viewscreen_layer_militaryst : viewscreen_layer {
    struct DFHACK_EXPORT T_squads {
      std::vector<df::squad* > list;
      std::vector<df::entity_position* > leader_positions;
      std::vector<df::entity_position_assignment* > leader_assignments;
      std::vector<bool> can_appoint;
      static struct_identity _identity;
    public:
      T_squads();
    };
    T_squads squads;
    struct DFHACK_EXPORT T_positions {
      std::vector<df::unit* > assigned;
      std::vector<df::job_skill > skill;
      std::vector<int32_t > unk_84;
      std::vector<df::unit* > candidates;
      static struct_identity _identity;
    public:
      T_positions();
    };
    T_positions positions;
    enum T_page : int32_t {
      Positions,
      Alerts,
      Equip,
      Uniforms,
      Supplies,
      Ammunition
    };
    T_page page;
    int32_t num_squads;
    int32_t num_soldiers;
    int32_t num_active;
    struct DFHACK_EXPORT T_squad_members {
      std::vector<df::profession > profession;
      std::vector<int32_t > count;
      std::vector<int32_t > max_count;
      static struct_identity _identity;
    public:
      T_squad_members();
    };
    T_squad_members squad_members;
    bool in_create_squad;
    bool in_new_squad;
    bool unk_e6;
    std::vector<df::entity_position* > captain_positions;
    df::entity_position* new_position;
    bool unk_fc;
    bool in_rename_alert;
    bool in_delete_alert;
    std::vector<df::squad* > alert_squads;
    struct DFHACK_EXPORT T_equip {
      enum T_mode : int32_t {
        Customize,
        Uniform,
        Priority
      };
      T_mode mode;
      std::vector<df::squad* > squads;
      std::vector<df::unit* > units;
      std::vector<df::item* > specific_items;
      int32_t prio_in_move;
      struct DFHACK_EXPORT T_assigned {
        std::vector<df::squad_uniform_spec* > spec;
        std::vector<df::uniform_category > category;
        std::vector<int32_t > index; /*!< spec in category vector */
        static struct_identity _identity;
      public:
        T_assigned();
      };
      T_assigned assigned;
      std::vector<void* > unk_178;
      df::squad_uniform_spec* edit_spec;
      std::vector<df::entity_uniform* > uniforms;
      struct DFHACK_EXPORT T_uniform {
        std::vector<df::item_type > type;
        std::vector<int16_t > subtype;
        std::vector<df::uniform_category > category;
        std::vector<int16_t > index;
        std::vector<df::entity_uniform_item* > info;
        static struct_identity _identity;
      public:
        T_uniform();
      };
      T_uniform uniform;
      enum T_edit_mode : int32_t {
        Armor,
        Helm,
        Legs,
        Gloves,
        Boots,
        Shield,
        Weapon,
        Material,
        Color,
        SpecificArmor,
        SpecificHelm,
        SpecificLegs,
        SpecificGloves,
        SpecificBoots,
        SpecificShield,
        SpecificWeapon
      };
      T_edit_mode edit_mode;
      char unk_1ec[4];
      struct DFHACK_EXPORT T_add_item {
        std::vector<df::item_type > type;
        std::vector<int16_t > subtype;
        std::vector<void* > unk_214;
        std::vector<bool> foreign;
        static struct_identity _identity;
      public:
        T_add_item();
      };
      T_add_item add_item;
      struct DFHACK_EXPORT T_material {
        std::vector<df::entity_material_category > generic;
        df::material_vec_ref specific;
        static struct_identity _identity;
      public:
        T_material();
      };
      T_material material;
      struct DFHACK_EXPORT T_color {
        std::vector<int32_t > id;
        std::vector<bool> dye;
        static struct_identity _identity;
      public:
        T_color();
      };
      T_color color;
      bool in_name_uniform;
      static struct_identity _identity;
    public:
      T_equip();
    };
    T_equip equip;
    struct DFHACK_EXPORT T_ammo {
      std::vector<df::squad* > squads; /*!< null for hunters */
      bool in_add_item;
      bool in_set_material;
      struct DFHACK_EXPORT T_add_item {
        std::vector<df::item_type > type;
        std::vector<int16_t > subtype;
        std::vector<bool> foreign;
        static struct_identity _identity;
      public:
        T_add_item();
      };
      T_add_item add_item;
      struct DFHACK_EXPORT T_material {
        std::vector<df::entity_material_category > generic;
        df::material_vec_ref specific;
        static struct_identity _identity;
      public:
        T_material();
      };
      T_material material;
      static struct_identity _identity;
    public:
      T_ammo();
    };
    T_ammo ammo;
    std::vector<df::squad* > supplies_squads;
    static virtual_identity _identity;
  protected:
    viewscreen_layer_militaryst(virtual_identity *_id = &viewscreen_layer_militaryst::_identity);
    friend void *df::allocator_fn<viewscreen_layer_militaryst>(void*,const void*);
  };
  template<> struct DFHACK_EXPORT identity_traits<viewscreen_layer_militaryst::T_page> {
    static enum_identity identity;
    static enum_identity *get() { return &identity; }
  };
  template<> struct DFHACK_EXPORT enum_traits<viewscreen_layer_militaryst::T_page> {
    typedef int32_t base_type;
    typedef viewscreen_layer_militaryst::T_page enum_type;
    static const base_type first_item_value = 0;
    static const base_type last_item_value = 5;
    static inline bool is_valid(enum_type value) {
      return (base_type(value) >= first_item_value && base_type(value) <= last_item_value);
    }
    static const enum_type first_item = (enum_type)first_item_value;
    static const enum_type last_item = (enum_type)last_item_value;
    static const char *const key_table[6];
  };
  template<> struct DFHACK_EXPORT identity_traits<viewscreen_layer_militaryst::T_equip::T_mode> {
    static enum_identity identity;
    static enum_identity *get() { return &identity; }
  };
  template<> struct DFHACK_EXPORT enum_traits<viewscreen_layer_militaryst::T_equip::T_mode> {
    typedef int32_t base_type;
    typedef viewscreen_layer_militaryst::T_equip::T_mode enum_type;
    static const base_type first_item_value = 0;
    static const base_type last_item_value = 2;
    static inline bool is_valid(enum_type value) {
      return (base_type(value) >= first_item_value && base_type(value) <= last_item_value);
    }
    static const enum_type first_item = (enum_type)first_item_value;
    static const enum_type last_item = (enum_type)last_item_value;
    static const char *const key_table[3];
  };
  template<> struct DFHACK_EXPORT identity_traits<viewscreen_layer_militaryst::T_equip::T_edit_mode> {
    static enum_identity identity;
    static enum_identity *get() { return &identity; }
  };
  template<> struct DFHACK_EXPORT enum_traits<viewscreen_layer_militaryst::T_equip::T_edit_mode> {
    typedef int32_t base_type;
    typedef viewscreen_layer_militaryst::T_equip::T_edit_mode enum_type;
    static const base_type first_item_value = 0;
    static const base_type last_item_value = 15;
    static inline bool is_valid(enum_type value) {
      return (base_type(value) >= first_item_value && base_type(value) <= last_item_value);
    }
    static const enum_type first_item = (enum_type)first_item_value;
    static const enum_type last_item = (enum_type)last_item_value;
    static const char *const key_table[16];
  };
}
#endif
