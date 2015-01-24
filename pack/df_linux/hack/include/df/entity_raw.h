/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_ENTITY_RAW_H
#define DF_ENTITY_RAW_H
#ifndef DF_ENTITY_RAW_FLAGS_H
#include "entity_raw_flags.h"
#endif
#ifndef DF_ETHIC_RESPONSE_H
#include "ethic_response.h"
#endif
#ifndef DF_LANGUAGE_WORD_TABLE_H
#include "language_word_table.h"
#endif
#ifndef DF_SPHERE_TYPE_H
#include "sphere_type.h"
#endif
namespace df {
  struct entity_position_raw;
  struct DFHACK_EXPORT entity_raw {
    std::string code;
    int32_t anon_1; /*!< v0.40.01 */
    std::vector<void* > anon_2; /*!< v0.40.01 */
    std::vector<int16_t > creature_ids;
    std::vector<std::string* > creatures;
    struct DFHACK_EXPORT T_equipment {
      std::vector<int16_t > digger_id;
      std::vector<int16_t > weapon_id;
      std::vector<int16_t > armor_id;
      std::vector<int16_t > ammo_id;
      std::vector<int16_t > helm_id;
      std::vector<int16_t > gloves_id;
      std::vector<int16_t > shoes_id;
      std::vector<int16_t > pants_id;
      std::vector<int16_t > shield_id;
      std::vector<int16_t > trapcomp_id;
      std::vector<int16_t > toy_id;
      std::vector<int16_t > instrument_id;
      std::vector<int16_t > tool_id;
      std::vector<int16_t > siegeammo_id;
      std::vector<int8_t > armor_rarity;
      std::vector<int8_t > helm_rarity;
      std::vector<int8_t > gloves_rarity;
      std::vector<int8_t > shoes_rarity;
      std::vector<int8_t > pants_rarity;
      std::vector<std::string* > digger_str;
      std::vector<std::string* > weapon_str;
      std::vector<std::string* > armor_str;
      std::vector<std::string* > ammo_str;
      std::vector<std::string* > helm_str;
      std::vector<std::string* > gloves_str;
      std::vector<std::string* > shoes_str;
      std::vector<std::string* > pants_str;
      std::vector<std::string* > shield_str;
      std::vector<std::string* > trapcomp_str;
      std::vector<std::string* > toy_str;
      std::vector<std::string* > instrument_str;
      std::vector<std::string* > siegeammo_str;
      std::vector<std::string* > tool_str;
      static struct_identity _identity;
    public:
      T_equipment();
    };
    T_equipment equipment;
    std::vector<int32_t > currency_value;
    BitArray<df::entity_raw_flags> flags;
    std::string translation;
    struct DFHACK_EXPORT T_symbols {
      df::language_word_table symbols1[14];
      df::language_word_table symbols2[14];
      std::vector<std::string* > select_symbol[14];
      std::vector<std::string* > subselect_symbol[14];
      std::vector<std::string* > cull_symbol[14];
      static struct_identity _identity;
    public:
      T_symbols();
    };
    T_symbols symbols;
    int32_t sphere_alignment[130];
    int32_t art_facet_modifier[4];
    int32_t art_image_element_modifier[5];
    int32_t item_improvement_modifier[11];
    int32_t adventure_tier;
    int16_t friendly_color[3];
    int32_t default_site_type;
    int8_t likes_site[11];
    int8_t tolerates_site[11];
    int32_t biome_support[51];
    int8_t start_biome[51];
    int8_t settlement_biome[51];
    int8_t active_season[4];
    struct DFHACK_EXPORT T_progress_trigger {
      int16_t population;
      int16_t production;
      int16_t trade;
      int16_t pop_siege;
      int16_t prod_siege;
      int16_t trade_siege;
      static struct_identity _identity;
    public:
      T_progress_trigger();
    };
    T_progress_trigger progress_trigger;
    df::ethic_response ethic[22];
    int32_t values[32];
    int32_t max_site_pop_number;
    int32_t max_pop_number;
    int32_t max_starting_civ_number;
    std::vector<int16_t > religion;
    std::vector<enum_field<df::sphere_type,int16_t> > religion_sphere;
    struct DFHACK_EXPORT T_jobs {
      bool permitted_job[112];
      bool permitted_labor[94];
      bool permitted_skill[118];
      bool world_construction[4];
      static struct_identity _identity;
    public:
      T_jobs();
    };
    T_jobs jobs;
    std::vector<df::entity_position_raw* > positions;
    int8_t variable_positions[25];
    int8_t site_variable_positions[25];
    struct DFHACK_EXPORT T_tissue_styles {
      std::string name;
      std::vector<int16_t > preferred_shapings;
      int32_t maintain_length_min;
      int32_t maintain_length_max;
      static struct_identity _identity;
    public:
      T_tissue_styles();
    };
    std::vector<T_tissue_styles* > tissue_styles;
    struct DFHACK_EXPORT T_workshops {
      std::vector<std::string* > permitted_building_str;
      std::vector<int32_t > permitted_building_id;
      std::vector<std::string* > permitted_reaction_str;
      std::vector<int32_t > permitted_reaction_id;
      static struct_identity _identity;
    public:
      T_workshops();
    };
    T_workshops workshops;
    struct DFHACK_EXPORT T_land_holder_trigger {
      int32_t num[10];
      int32_t population[10];
      int32_t wealth[10];
      static struct_identity _identity;
    public:
      T_land_holder_trigger();
    };
    T_land_holder_trigger land_holder_trigger;
    int32_t banditry;
    std::vector<std::string* > gem_shapes_str;
    std::vector<std::string* > stone_shapes_str;
    std::vector<int32_t > gem_shapes;
    std::vector<int32_t > stone_shapes;
    int32_t source_hfid;
    std::vector<std::string* > currency_str1;
    std::vector<std::string* > currency_str2;
    static struct_identity _identity;
    static std::vector<entity_raw*> &get_vector();
    static entity_raw *find(int id);
  public:
    entity_raw();
  };
}
#endif
