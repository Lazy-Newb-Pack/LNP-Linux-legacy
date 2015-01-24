/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_UNIT_H
#define DF_UNIT_H
#ifndef DF_ANIMAL_TRAINING_LEVEL_H
#include "animal_training_level.h"
#endif
#ifndef DF_BODY_COMPONENT_INFO_H
#include "body_component_info.h"
#endif
#ifndef DF_BODY_SIZE_INFO_H
#include "body_size_info.h"
#endif
#ifndef DF_CIE_ADD_TAG_MASK1_H
#include "cie_add_tag_mask1.h"
#endif
#ifndef DF_CIE_ADD_TAG_MASK2_H
#include "cie_add_tag_mask2.h"
#endif
#ifndef DF_COORD_H
#include "coord.h"
#endif
#ifndef DF_COORD_PATH_H
#include "coord_path.h"
#endif
#ifndef DF_DEATH_TYPE_H
#include "death_type.h"
#endif
#ifndef DF_ENTITY_POSITION_RESPONSIBILITY_H
#include "entity_position_responsibility.h"
#endif
#ifndef DF_HISTORY_HIT_ITEM_H
#include "history_hit_item.h"
#endif
#ifndef DF_ITEM_TYPE_H
#include "item_type.h"
#endif
#ifndef DF_JOB_SKILL_H
#include "job_skill.h"
#endif
#ifndef DF_LANGUAGE_NAME_H
#include "language_name.h"
#endif
#ifndef DF_MATERIAL_VEC_REF_H
#include "material_vec_ref.h"
#endif
#ifndef DF_MOOD_TYPE_H
#include "mood_type.h"
#endif
#ifndef DF_PROFESSION_H
#include "profession.h"
#endif
#ifndef DF_TILE_DESIGNATION_H
#include "tile_designation.h"
#endif
#ifndef DF_UNIT_ATTRIBUTE_H
#include "unit_attribute.h"
#endif
#ifndef DF_UNIT_FLAGS1_H
#include "unit_flags1.h"
#endif
#ifndef DF_UNIT_FLAGS2_H
#include "unit_flags2.h"
#endif
#ifndef DF_UNIT_FLAGS3_H
#include "unit_flags3.h"
#endif
#ifndef DF_UNIT_GENES_H
#include "unit_genes.h"
#endif
#ifndef DF_UNIT_PATH_GOAL_H
#include "unit_path_goal.h"
#endif
#ifndef DF_UNIT_STATION_TYPE_H
#include "unit_station_type.h"
#endif
#ifndef DF_WORLD_POPULATION_REF_H
#include "world_population_ref.h"
#endif
namespace df {
  struct building;
  struct caste_body_info;
  struct curse_attr_change;
  struct entity_event;
  struct general_ref;
  struct job;
  struct spatter;
  struct specific_ref;
  struct temperaturest;
  struct unit_action;
  struct unit_coin_debt;
  struct unit_complaint;
  struct unit_demand;
  struct unit_ghost_info;
  struct unit_health_info;
  struct unit_inventory_item;
  struct unit_item_use;
  struct unit_item_wrestle;
  struct unit_misc_trait;
  struct unit_request;
  struct unit_soul;
  struct unit_syndrome;
  struct unit_wound;
  struct DFHACK_EXPORT unit {
    df::language_name name;
    std::string custom_profession;
    df::profession profession;
    df::profession profession2;
    int32_t race;
    df::coord pos;
    /**
     * E.g. for a dead miner, holds the place where he
     * was likely hanging around when he got the command
     * to mine in an aquifer.
     */
    df::coord idle_area;
    int32_t idle_area_threshold;
    df::unit_station_type idle_area_type;
    int32_t follow_distance;
    struct DFHACK_EXPORT T_path {
      df::coord dest;
      df::unit_path_goal goal;
      df::coord_path path;
      static struct_identity _identity;
    public:
      T_path();
    };
    T_path path;
    df::unit_flags1 flags1;
    df::unit_flags2 flags2;
    df::unit_flags3 flags3;
    struct DFHACK_EXPORT T_meeting {
      enum T_state : int8_t {
        SelectNoble = 0,
        FollowNoble = 1,
        DoMeeting = 2,
        LeaveMap = 3
      };
      T_state state;
      int32_t target_entity;
      enum_field<df::entity_position_responsibility,int16_t> target_role;
      char anon_1[2];
      static struct_identity _identity;
    public:
      T_meeting();
    };
    T_meeting meeting;
    int16_t caste;
    int8_t sex; /*!< -1 n/a, 0 female, 1 male */
    int32_t id;
    int16_t unk_100;
    df::animal_training_level training_level;
    int32_t schedule_id;
    int32_t civ_id;
    int32_t population_id;
    int32_t unk_c0; /*!< v0.34.01 */
    int32_t cultural_identity; /*!< v0.40.01 */
    int32_t invasion_id;
    df::coord_path patrol_route; /*!< used by necromancers for corpse locations, siegers etc */
    int32_t patrol_index; /*!< from 23a */
    std::vector<df::specific_ref* > specific_refs;
    std::vector<df::general_ref* > general_refs;
    struct DFHACK_EXPORT T_military {
      int32_t squad_id;
      int32_t squad_position;
      int32_t patrol_cooldown;
      int32_t patrol_timer;
      int16_t cur_uniform;
      std::vector<int32_t > unk_items; /*!< v0.34.06 */
      std::vector<int32_t > uniforms[4];
      union T_pickup_flags {
        uint32_t whole;
        struct {
          uint32_t update : 1;
        } bits;
        enum Shift {
          shift_update = 0
        };
        enum Mask : uint32_t {
          mask_update = 0x1U
        };
        T_pickup_flags(uint32_t whole_ = 0) : whole(whole_) {};
      };
      T_pickup_flags pickup_flags;
      std::vector<int32_t > uniform_pickup;
      std::vector<int32_t > uniform_drop;
      std::vector<int32_t > individual_drills;
      static struct_identity _identity;
    public:
      T_military();
    };
    T_military military;
    std::vector<void* > anon_1; /*!< v0.40.01 */
    std::vector<int32_t > anon_2; /*!< v0.40.01 */
    std::vector<int32_t > anon_3;
    std::vector<int32_t > anon_4; /*!< v0.40.01 */
    struct DFHACK_EXPORT T_animal {
      df::world_population_ref population;
      int32_t leave_countdown; /*!< once 0, it heads for the edge and leaves */
      int32_t vanish_countdown; /*!< once 0, it vanishes in a puff of smoke */
      static struct_identity _identity;
    public:
      T_animal();
    };
    T_animal animal;
    struct DFHACK_EXPORT T_opponent {
      int32_t unit_id; /*!< v0.40.01 */
      df::coord unit_pos; /*!< v0.40.01 */
      int32_t anon_1; /*!< v0.40.01 */
      static struct_identity _identity;
    public:
      T_opponent();
    };
    T_opponent opponent;
    df::mood_type mood;
    int16_t unk_18e;
    struct DFHACK_EXPORT T_relations {
      uint32_t pregnancy_timer;
      df::unit_genes* pregnancy_genes; /*!< genes from mate */
      int16_t pregnancy_caste; /*!< caste of mate */
      int32_t pregnancy_spouse;
      df::mood_type mood_copy; /*!< copied from mood type upon entering strange mood */
      df::unit_ghost_info* ghost_info;
      int32_t anon_1; /*!< v0.34.01 */
      int32_t birth_year;
      int32_t birth_time;
      int32_t curse_year; /*!< v0.34.01 */
      int32_t curse_time; /*!< v0.34.01 */
      int32_t birth_year_bias; /*!< v0.34.01 */
      int32_t birth_time_bias; /*!< v0.34.01 */
      int32_t old_year; /*!< could there be a death of old age time?? */
      int32_t old_time;
      df::unit* following;
      uint16_t unk_238; /*!< invalid unless following */
      int32_t pet_owner_id;
      int32_t spouse_id; /*!< not used in relationship screen.. */
      int32_t mother_id;
      int32_t father_id;
      int32_t last_attacker_id;
      int32_t group_leader_id; /*!< used by goblins, adv mode companions etc */
      int32_t draggee_id; /*!< unit being dragged by this one */
      int32_t dragger_id; /*!< unit that drags this one */
      int32_t rider_mount_id;
      int32_t lover_id;
      int16_t mount_type; /*!< 0 = riding, 1 = being carried, 2/3 = wagon horses, 4 = wagon merchant */
      static struct_identity _identity;
    public:
      T_relations();
    };
    T_relations relations;
    df::history_hit_item last_hit;
    int32_t riding_item_id; /*!< v0.34.08 */
    std::vector<df::unit_inventory_item* > inventory;
    std::vector<int32_t > owned_items;
    std::vector<int32_t > traded_items; /*!< items brought to trade depot */
    std::vector<df::building* > owned_buildings;
    std::vector<int32_t > corpse_parts; /*!< entries remain even when items are destroyed */
    struct DFHACK_EXPORT T_job {
      int32_t account;
      int32_t satisfaction; /*!< amount earned recently for jobs */
      df::unit* hunt_target;
      df::building* destroy_target;
      int32_t anon_1; /*!< v0.40.01 */
      int32_t anon_2; /*!< v0.40.01 */
      int32_t anon_3; /*!< v0.40.01 */
      int32_t anon_4; /*!< v0.40.01 */
      int8_t anon_5; /*!< v0.40.01 */
      int32_t gait_buildup;
      df::coord climb_hold;
      int32_t unk_v4014_1; /*!< v0.40.14 */
      df::job* current_job; /*!< df_job */
      df::job_skill mood_skill;
      int32_t mood_timeout; /*!< counts down from 50000, insanity upon reaching zero */
      int32_t unk_39c;
      static struct_identity _identity;
    public:
      T_job();
    };
    T_job job;
    struct DFHACK_EXPORT T_body {
      df::body_component_info components;
      std::vector<df::unit_wound* > wounds;
      int32_t wound_next_id;
      int32_t unk_39c[10];
      df::caste_body_info* body_plan;
      int16_t weapon_bp;
      df::unit_attribute physical_attrs[6];
      df::body_size_info size_info;
      uint32_t blood_max;
      uint32_t blood_count;
      int32_t infection_level; /*!< GETS_INFECTIONS_FROM_ROT sets; DISEASE_RESISTANCE reduces; >=300 causes bleeding */
      std::vector<df::spatter* > spatters;
      static struct_identity _identity;
    public:
      T_body();
    };
    T_body body;
    struct DFHACK_EXPORT T_appearance {
      std::vector<int32_t > body_modifiers;
      std::vector<int32_t > bp_modifiers;
      int32_t size_modifier; /*!< product of all H/B/LENGTH body modifiers, in % */
      std::vector<int16_t > tissue_style;
      std::vector<int32_t > tissue_style_civ_id;
      std::vector<int32_t > tissue_style_id;
      std::vector<int32_t > tissue_style_type;
      std::vector<int32_t > tissue_length; /*!< description uses bp_modifiers[style_list_idx[index]] */
      df::unit_genes genes;
      std::vector<int32_t > colors;
      static struct_identity _identity;
    public:
      T_appearance();
    };
    T_appearance appearance;
    std::vector<df::unit_action* > actions;
    int32_t next_action_id;
    struct DFHACK_EXPORT T_counters {
      int32_t think_counter;
      int32_t job_counter;
      int32_t swap_counter; /*!< dec per job_counter reroll, can_swap if 0 */
      enum_field<df::death_type,int16_t> death_cause;
      int32_t death_id;
      int16_t winded;
      int16_t stunned;
      int16_t unconscious;
      int16_t suffocation; /*!< counts up while winded, results in death */
      int16_t webbed;
      df::coord guts_trail1;
      df::coord guts_trail2;
      int16_t soldier_mood_countdown; /*!< plus a random amount */
      enum T_soldier_mood : int16_t {
        None = -1,
        MartialTrance,
        Enranged,
        Tantrum,
        Depressed,
        Oblivious
      };
      T_soldier_mood soldier_mood;
      uint32_t pain;
      uint32_t nausea;
      uint32_t dizziness;
      int32_t anon_1; /*!< v0.40.01 */
      static struct_identity _identity;
    public:
      T_counters();
    };
    T_counters counters;
    struct DFHACK_EXPORT T_curse {
      df::cie_add_tag_mask1 add_tags1;
      df::cie_add_tag_mask1 rem_tags1;
      df::cie_add_tag_mask2 add_tags2;
      df::cie_add_tag_mask2 rem_tags2;
      bool name_visible; /*!< v0.34.01 */
      std::string name; /*!< v0.34.01 */
      std::string name_plural; /*!< v0.34.01 */
      std::string name_adjective; /*!< v0.34.01 */
      uint32_t sym_and_color1; /*!< v0.34.01 */
      uint32_t sym_and_color2; /*!< v0.34.01 */
      uint32_t flash_period; /*!< v0.34.01 */
      uint32_t flash_time2; /*!< v0.34.01 */
      std::vector<int32_t > body_appearance;
      std::vector<int32_t > bp_appearance; /*!< v0.34.01; guess! */
      uint32_t speed_add; /*!< v0.34.01 */
      uint32_t speed_mul_percent; /*!< v0.34.01 */
      df::curse_attr_change* attr_change; /*!< v0.34.01 */
      uint32_t luck_mul_percent; /*!< v0.34.01 */
      std::vector<int32_t > interaction_id; /*!< v0.34.01 */
      std::vector<int32_t > interaction_time; /*!< v0.34.01 */
      std::vector<int32_t > interaction_delay; /*!< v0.34.01 */
      int32_t time_on_site; /*!< v0.34.01 */
      std::vector<int32_t > own_interaction; /*!< v0.34.01 */
      std::vector<int32_t > own_interaction_delay; /*!< v0.34.01 */
      static struct_identity _identity;
    public:
      T_curse();
    };
    T_curse curse;
    struct DFHACK_EXPORT T_counters2 {
      uint32_t paralysis;
      uint32_t numbness;
      uint32_t fever;
      uint32_t exhaustion;
      uint32_t hunger_timer;
      uint32_t thirst_timer;
      uint32_t sleepiness_timer;
      uint32_t stomach_content;
      uint32_t stomach_food;
      uint32_t vomit_timeout; /*!< blocks nausea causing vomit */
      uint32_t stored_fat; /*!< hunger leads to death only when 0 */
      static struct_identity _identity;
    public:
      T_counters2();
    };
    T_counters2 counters2;
    struct DFHACK_EXPORT T_status {
      std::vector<df::unit_misc_trait* > misc_traits;
      struct DFHACK_EXPORT T_eat_history {
        struct DFHACK_EXPORT T_food {
          std::vector<df::item_type > item_type;
          std::vector<int16_t > item_subtype;
          df::material_vec_ref material;
          std::vector<int32_t > year;
          std::vector<int32_t > year_time;
          static struct_identity _identity;
        public:
          T_food();
        };
        T_food food;
        struct DFHACK_EXPORT T_drink {
          std::vector<df::item_type > item_type;
          std::vector<int16_t > item_subtype;
          df::material_vec_ref material;
          std::vector<int32_t > year;
          std::vector<int32_t > year_time;
          static struct_identity _identity;
        public:
          T_drink();
        };
        T_drink drink;
        static struct_identity _identity;
      public:
        T_eat_history();
      };
      T_eat_history* eat_history;
      int32_t demand_timeout;
      int32_t mandate_timeout;
      std::vector<int32_t > attacker_ids;
      std::vector<int16_t > attacker_cntdn;
      uint8_t face_direction; /*!< for wagons */
      df::language_name artifact_name;
      std::vector<df::unit_soul* > souls;
      df::unit_soul* current_soul;
      std::vector<df::unit_demand* > demands;
      bool labors[94];
      std::vector<df::unit_item_wrestle* > wrestle_items;
      std::vector<int32_t > observed_traps;
      std::vector<df::unit_complaint* > complaints;
      std::vector<df::unit_request* > requests;
      std::vector<df::unit_coin_debt* > coin_debts;
      int16_t adv_sleep_timer;
      df::coord recent_job_area;
      df::coord_path recent_jobs;
      static struct_identity _identity;
    public:
      T_status();
    };
    T_status status;
    int32_t hist_figure_id;
    int32_t hist_figure_id2; /*!< used for ghost in AttackedByDead thought */
    struct DFHACK_EXPORT T_status2 {
      int16_t limbs_stand_max;
      int16_t limbs_stand_count;
      int16_t limbs_grasp_max;
      int16_t limbs_grasp_count;
      int16_t limbs_fly_max;
      int16_t limbs_fly_count;
      std::vector<df::temperaturest* > body_part_temperature;
      uint32_t add_path_flags; /*!< pathing flags to OR, set to 0 after move */
      df::tile_designation liquid_type;
      uint8_t liquid_depth;
      int32_t unk_7c0;
      static struct_identity _identity;
    public:
      T_status2();
    };
    T_status2 status2;
    struct DFHACK_EXPORT T_unknown7 {
      std::vector<void* > unk_7c4;
      std::vector<void* > anon_1; /*!< v0.34.01 */
      static struct_identity _identity;
    public:
      T_unknown7();
    };
    T_unknown7 unknown7;
    struct DFHACK_EXPORT T_syndromes {
      std::vector<df::unit_syndrome* > active;
      std::vector<int32_t > reinfection_type;
      std::vector<int16_t > reinfection_count;
      static struct_identity _identity;
    public:
      T_syndromes();
    };
    T_syndromes syndromes;
    struct DFHACK_EXPORT T_reports {
      std::vector<int32_t > log[3];
      int32_t last_year[3];
      int32_t last_year_tick[3];
      static struct_identity _identity;
    public:
      T_reports();
    };
    T_reports reports;
    df::unit_health_info* health;
    std::vector<df::unit_item_use* > used_items; /*!< Contains worn clothes, armor, weapons, arrows fired by archers */
    struct DFHACK_EXPORT T_enemy {
      std::vector<int32_t > sound_cooldown; /*!< v0.34.01 */
      struct DFHACK_EXPORT T_undead {
        int32_t anon_1;
        int32_t anon_2;
        int32_t anon_3;
        int32_t anon_4;
        int32_t anon_5;
        int16_t anon_6;
        std::string anon_7;
        static struct_identity _identity;
      public:
        T_undead();
      };
      T_undead* undead; /*!< v0.34.01 */
      int32_t were_race;
      int32_t were_caste;
      int32_t normal_race;
      int32_t normal_caste;
      int32_t interaction; /*!< v0.34.01 */
      std::vector<void* > unk_850;
      struct DFHACK_EXPORT T_witness_reports {
        int32_t death_id;
        int32_t crime_id;
        int32_t unk1; /*!< 0 accuses, 1 corpse */
        int32_t year;
        int32_t year_tick;
        int32_t unk2; /*!< bit 0 accuses */
        static struct_identity _identity;
      public:
        T_witness_reports();
      };
      std::vector<T_witness_reports* > witness_reports;
      std::vector<df::entity_event* > unk_a5c;
      int32_t gait_index[5];
      int32_t unk_v40_1a[10]; /*!< v0.40.01 */
      int32_t unk_v40_1b[10]; /*!< v0.40.01 */
      int32_t unk_v40_1c[10]; /*!< v0.40.01 */
      int32_t unk_v40_1d[10]; /*!< v0.40.01 */
      int32_t unk_v40_1e[10]; /*!< v0.40.01 */
      int32_t unk_v40_2[20]; /*!< v0.40.01 */
      int32_t anon_1[180]; /*!< v0.40.24 */
      int32_t unk_v40_2_count; /*!< v0.40.01 */
      void* anon_2; /*!< v0.40.01 */
      void* anon_3; /*!< v0.40.01 */
      int32_t anon_4; /*!< v0.40.01 */
      int32_t anon_5; /*!< v0.40.01 */
      int32_t anon_6; /*!< v0.40.01 */
      int32_t anon_7; /*!< v0.40.01 */
      void* anon_8; /*!< v0.40.01 */
      std::vector<void* > anon_9; /*!< v0.40.01 */
      std::vector<void* > anon_10; /*!< v0.40.01 */
      std::vector<int32_t > anon_11; /*!< v0.40.01 */
      struct DFHACK_EXPORT T_anon_12 {
        std::vector<int32_t > unk_0;
        std::vector<int32_t > unk_10;
        static struct_identity _identity;
      public:
        T_anon_12();
      };
      T_anon_12* anon_12;
      int32_t enemy_status_slot;
      int32_t unk_874_cntr;
      std::vector<uint8_t > body_part_878;
      std::vector<uint8_t > body_part_888;
      std::vector<int32_t > body_part_relsize; /*!< with modifiers */
      std::vector<uint8_t > body_part_8a8;
      std::vector<uint16_t > body_part_base_ins;
      std::vector<uint16_t > body_part_clothing_ins;
      std::vector<uint16_t > body_part_8d8;
      std::vector<void* > unk_8e8;
      std::vector<uint16_t > unk_8f8;
      static struct_identity _identity;
    public:
      T_enemy();
    };
    T_enemy enemy;
    struct DFHACK_EXPORT T_recuperation {
      std::vector<int32_t > healing_rate;
      int32_t effective_rate;
      int32_t tendons_heal;
      int32_t ligaments_heal;
      static struct_identity _identity;
    public:
      T_recuperation();
    };
    T_recuperation recuperation;
    int32_t weight;
    int32_t weight_fraction; /*!< 1e-6 */
    std::vector<int32_t > burrows;
    int32_t combat_side_id;
    int32_t anon_5; /*!< v0.40.01 */
    static struct_identity _identity;
    typedef unit* key_pointer_type;
    typedef int32_t key_field_type;
    static int binsearch_index(const std::vector<unit*> &vec, key_field_type key, bool exact = true);
    static int binsearch_index(const std::vector<unit*> &vec, key_pointer_type key, bool exact = true);
    static std::vector<unit*> &get_vector();
    static unit *find(key_field_type id);
  public:
    unit();
  };
  template<> struct DFHACK_EXPORT identity_traits<unit::T_meeting::T_state> {
    static enum_identity identity;
    static enum_identity *get() { return &identity; }
  };
  template<> struct DFHACK_EXPORT bitfield_traits<unit::T_military::T_pickup_flags> {
    typedef uint32_t base_type;
    typedef unit::T_military::T_pickup_flags bitfield_type;
    static const int bit_count = sizeof(base_type)*8;
    static const bitfield_item_info bits[bit_count];
  };
  template<> struct DFHACK_EXPORT identity_traits<unit::T_military::T_pickup_flags> {
    static bitfield_identity identity;
    static bitfield_identity *get() { return &identity; }
  };
  template<> struct DFHACK_EXPORT identity_traits<unit::T_counters::T_soldier_mood> {
    static enum_identity identity;
    static enum_identity *get() { return &identity; }
  };
  template<> struct DFHACK_EXPORT enum_traits<unit::T_counters::T_soldier_mood> {
    typedef int16_t base_type;
    typedef unit::T_counters::T_soldier_mood enum_type;
    static const base_type first_item_value = -1;
    static const base_type last_item_value = 4;
    static inline bool is_valid(enum_type value) {
      return (base_type(value) >= first_item_value && base_type(value) <= last_item_value);
    }
    static const enum_type first_item = (enum_type)first_item_value;
    static const enum_type last_item = (enum_type)last_item_value;
    static const char *const key_table[6];
  };
}
#endif
