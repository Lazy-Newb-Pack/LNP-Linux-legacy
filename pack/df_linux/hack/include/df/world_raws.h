/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_WORLD_RAWS_H
#define DF_WORLD_RAWS_H
#ifndef DF_LANGUAGE_WORD_TABLE_H
#include "language_word_table.h"
#endif
#ifndef DF_SPECIAL_MAT_TABLE_H
#include "special_mat_table.h"
#endif
namespace df {
  struct body_detail_plan;
  struct body_template;
  struct building_def;
  struct building_def_furnacest;
  struct building_def_workshopst;
  struct creature_interaction_effect;
  struct creature_raw;
  struct creature_variation;
  struct descriptor_color;
  struct descriptor_pattern;
  struct descriptor_shape;
  struct entity_raw;
  struct inorganic_raw;
  struct interaction;
  struct itemdef;
  struct itemdef_ammost;
  struct itemdef_armorst;
  struct itemdef_foodst;
  struct itemdef_glovesst;
  struct itemdef_helmst;
  struct itemdef_instrumentst;
  struct itemdef_pantsst;
  struct itemdef_shieldst;
  struct itemdef_shoesst;
  struct itemdef_siegeammost;
  struct itemdef_toolst;
  struct itemdef_toyst;
  struct itemdef_trapcompst;
  struct itemdef_weaponst;
  struct language_symbol;
  struct language_translation;
  struct language_word;
  struct material_template;
  struct plant_raw;
  struct reaction;
  struct syndrome;
  struct tissue_template;
  struct DFHACK_EXPORT world_raws {
    std::vector<df::material_template* > material_templates;
    std::vector<df::inorganic_raw* > inorganics;
    std::vector<df::inorganic_raw* > inorganics_subset; /*!< all inorganics with value less than 4 */
    struct DFHACK_EXPORT T_plants {
      std::vector<df::plant_raw* > all;
      std::vector<df::plant_raw* > bushes;
      std::vector<int32_t > bushes_idx;
      std::vector<df::plant_raw* > trees;
      std::vector<int32_t > trees_idx;
      std::vector<df::plant_raw* > grasses;
      std::vector<int32_t > grasses_idx;
      static struct_identity _identity;
    public:
      T_plants();
    };
    T_plants plants;
    std::vector<df::tissue_template* > tissue_templates;
    std::vector<df::body_detail_plan* > body_detail_plans;
    std::vector<df::body_template* > body_templates;
    struct DFHACK_EXPORT T_bodyglosses {
      std::string id;
      std::string old_singular;
      std::string new_singular;
      std::string old_plural;
      std::string new_plural;
      static struct_identity _identity;
    public:
      T_bodyglosses();
    };
    std::vector<T_bodyglosses* > bodyglosses;
    std::vector<df::creature_variation* > creature_variations;
    struct DFHACK_EXPORT T_creatures {
      std::vector<df::creature_raw* > alphabetic;
      std::vector<df::creature_raw* > all;
      int32_t num_caste; /*!< seems equal to length of vectors below */
      std::vector<int32_t > list_creature; /*!< Together with list_caste, a list of all caste indexes in order. */
      std::vector<int32_t > list_caste;
      std::vector<std::string* > action_strings; /*!< v0.40.01 */
      static struct_identity _identity;
    public:
      T_creatures();
    };
    T_creatures creatures;
    struct DFHACK_EXPORT T_itemdefs {
      std::vector<df::itemdef* > all;
      std::vector<df::itemdef_weaponst* > weapons;
      std::vector<df::itemdef_trapcompst* > trapcomps;
      std::vector<df::itemdef_toyst* > toys;
      std::vector<df::itemdef_toolst* > tools;
      std::vector<df::itemdef_toolst* > tools_by_type[18];
      std::vector<df::itemdef_instrumentst* > instruments;
      std::vector<df::itemdef_armorst* > armor;
      std::vector<df::itemdef_ammost* > ammo;
      std::vector<df::itemdef_siegeammost* > siege_ammo;
      std::vector<df::itemdef_glovesst* > gloves;
      std::vector<df::itemdef_shoesst* > shoes;
      std::vector<df::itemdef_shieldst* > shields;
      std::vector<df::itemdef_helmst* > helms;
      std::vector<df::itemdef_pantsst* > pants;
      std::vector<df::itemdef_foodst* > food;
      static struct_identity _identity;
    public:
      T_itemdefs();
    };
    T_itemdefs itemdefs;
    std::vector<df::entity_raw* > entities;
    struct DFHACK_EXPORT T_language {
      std::vector<df::language_word* > words;
      std::vector<df::language_symbol* > symbols;
      std::vector<df::language_translation* > translations;
      df::language_word_table word_table[2][60];
      std::vector<df::descriptor_color* > colors;
      std::vector<df::descriptor_shape* > shapes;
      std::vector<df::descriptor_pattern* > patterns;
      static struct_identity _identity;
    public:
      T_language();
    };
    T_language language;
    std::vector<df::reaction* > reactions;
    struct DFHACK_EXPORT T_buildings {
      std::vector<df::building_def* > all;
      std::vector<df::building_def_workshopst* > workshops;
      std::vector<df::building_def_furnacest* > furnaces;
      int32_t next_id;
      static struct_identity _identity;
    public:
      T_buildings();
    };
    T_buildings buildings;
    std::vector<df::interaction* > interactions; /*!< v0.34.01 */
    df::special_mat_table mat_table;
    struct DFHACK_EXPORT T_syndromes {
      std::vector<int16_t > mat_types;
      std::vector<int32_t > mat_indexes;
      std::vector<int32_t > interactions;
      std::vector<df::syndrome* > all; /*!< v0.34.01 */
      static struct_identity _identity;
    public:
      T_syndromes();
    };
    T_syndromes syndromes;
    struct DFHACK_EXPORT T_effects {
      std::vector<int16_t > mat_types;
      std::vector<int32_t > mat_indexes;
      std::vector<int32_t > interactions;
      std::vector<df::creature_interaction_effect* > all; /*!< v0.34.01 */
      static struct_identity _identity;
    public:
      T_effects();
    };
    T_effects effects;
    int32_t anon_1; /*!< v0.34.01 */
    int32_t anon_2; /*!< v0.34.01 */
    int32_t anon_3; /*!< v0.34.01 */
    static struct_identity _identity;
  public:
    world_raws();
  };
}
#endif
