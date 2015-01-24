/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_HISTORICAL_ENTITY_H
#define DF_HISTORICAL_ENTITY_H
#ifndef DF_COORD2D_PATH_H
#include "coord2d_path.h"
#endif
#ifndef DF_ETHIC_RESPONSE_H
#include "ethic_response.h"
#endif
#ifndef DF_HISTORICAL_ENTITY_TYPE_H
#include "historical_entity_type.h"
#endif
#ifndef DF_ITEM_TYPE_H
#include "item_type.h"
#endif
#ifndef DF_LANGUAGE_NAME_H
#include "language_name.h"
#endif
#ifndef DF_MATERIAL_VEC_REF_H
#include "material_vec_ref.h"
#endif
#ifndef DF_TRAINING_KNOWLEDGE_LEVEL_H
#include "training_knowledge_level.h"
#endif
namespace df {
  struct army;
  struct army_controller;
  struct entity_activity_statistics;
  struct entity_entity_link;
  struct entity_event;
  struct entity_position;
  struct entity_position_assignment;
  struct entity_raw;
  struct entity_recipe;
  struct entity_site_link;
  struct entity_tissue_style;
  struct entity_uniform;
  struct historical_figure;
  struct item;
  struct meeting_event;
  struct nemesis_record;
  struct resource_allotment_data;
  struct DFHACK_EXPORT historical_entity {
    enum_field<df::historical_entity_type,int16_t> type;
    int32_t id; /*!< index in the array */
    df::entity_raw* entity_raw;
    int32_t save_file_id; /*!< changes once has 100 entries */
    int16_t next_member_idx;
    df::language_name name;
    int16_t race;
    union T_flags {
      uint32_t whole;
      struct {
        uint32_t foreign_civ : 1; /*!< ? */
        uint32_t named_civ : 1; /*!< ? */
        uint32_t unk2 : 1;
        uint32_t unk3 : 1;
        uint32_t unk4 : 1; /*!< ? */
        uint32_t worshipping : 1;
      } bits;
      enum Shift {
        shift_foreign_civ = 0,
        shift_named_civ = 1,
        shift_unk2 = 2,
        shift_unk3 = 3,
        shift_unk4 = 4,
        shift_worshipping = 5
      };
      enum Mask : uint32_t {
        mask_foreign_civ = 0x1U,
        mask_named_civ = 0x2U,
        mask_unk2 = 0x4U,
        mask_unk3 = 0x8U,
        mask_unk4 = 0x10U,
        mask_worshipping = 0x20U
      };
      T_flags(uint32_t whole_ = 0) : whole(whole_) {};
    };
    T_flags flags;
    std::vector<df::entity_entity_link* > entity_links;
    std::vector<df::entity_site_link* > site_links;
    std::vector<int32_t > histfig_ids;
    std::vector<int32_t > populations; /*!< 1st entry copies to unit.population_id for Adventurer? */
    std::vector<int32_t > nemesis_ids;
    struct DFHACK_EXPORT T_resources {
      std::vector<int16_t > digger_type;
      std::vector<int16_t > weapon_type;
      std::vector<int16_t > training_weapon_type;
      std::vector<int16_t > armor_type;
      std::vector<int16_t > ammo_type;
      std::vector<int16_t > helm_type;
      std::vector<int16_t > gloves_type;
      std::vector<int16_t > shoes_type;
      std::vector<int16_t > pants_type;
      std::vector<int16_t > shield_type;
      std::vector<int16_t > trapcomp_type;
      std::vector<int16_t > toy_type;
      std::vector<int16_t > instrument_type;
      std::vector<int16_t > siegeammo_type;
      std::vector<int16_t > tool_type;
      struct DFHACK_EXPORT T_metal {
        df::material_vec_ref pick;
        df::material_vec_ref weapon;
        df::material_vec_ref ranged;
        df::material_vec_ref ammo;
        df::material_vec_ref ammo2; /*!< maybe intended for siege ammo */
        df::material_vec_ref armor; /*!< also instruments, toys, and tools */
        df::material_vec_ref anvil;
        static struct_identity _identity;
      public:
        T_metal();
      };
      T_metal metal;
      struct DFHACK_EXPORT T_organic {
        df::material_vec_ref leather;
        df::material_vec_ref fiber;
        df::material_vec_ref silk;
        df::material_vec_ref wool;
        df::material_vec_ref wood;
        static struct_identity _identity;
      public:
        T_organic();
      };
      T_organic organic;
      std::vector<int32_t > metals; /*!< bars */
      std::vector<int32_t > stones; /*!< boulders and blocks */
      std::vector<int32_t > gems; /*!< small and large cut */
      struct DFHACK_EXPORT T_refuse {
        df::material_vec_ref bone;
        df::material_vec_ref shell;
        df::material_vec_ref pearl;
        df::material_vec_ref ivory;
        df::material_vec_ref horn;
        static struct_identity _identity;
      public:
        T_refuse();
      };
      T_refuse refuse;
      struct DFHACK_EXPORT T_misc_mat {
        df::material_vec_ref others; /*!< amber and coral */
        df::material_vec_ref glass;
        df::material_vec_ref sand;
        df::material_vec_ref clay;
        df::material_vec_ref crafts;
        df::material_vec_ref glass_unused; /*!< used for vial extracts on embark */
        df::material_vec_ref barrels; /*!< also buckets, splints, and crutches */
        df::material_vec_ref flasks;
        df::material_vec_ref quivers;
        df::material_vec_ref backpacks;
        df::material_vec_ref cages;
        df::material_vec_ref wood2; /*!< v0.34.01 */
        df::material_vec_ref rock_metal; /*!< v0.34.01 */
        df::material_vec_ref booze;
        df::material_vec_ref cheese;
        df::material_vec_ref powders;
        df::material_vec_ref extracts;
        df::material_vec_ref meat;
        static struct_identity _identity;
      public:
        T_misc_mat();
      };
      T_misc_mat misc_mat;
      std::vector<int32_t > fish_races;
      std::vector<int16_t > fish_castes;
      std::vector<int32_t > egg_races;
      std::vector<int16_t > egg_castes;
      df::material_vec_ref plants;
      std::vector<int32_t > tree_fruit_plants;
      std::vector<int16_t > tree_fruit_growths;
      std::vector<int32_t > shrub_fruit_plants;
      std::vector<int16_t > shrub_fruit_growths;
      df::material_vec_ref seeds;
      /**
       * lye, charcoal, potash, pearlash, and coke
       */
      struct DFHACK_EXPORT T_wood_products {
        std::vector<df::item_type > item_type;
        std::vector<int16_t > item_subtype;
        df::material_vec_ref material;
        static struct_identity _identity;
      public:
        T_wood_products();
      };
      T_wood_products wood_products; /*!< lye, charcoal, potash, pearlash, and coke */
      struct DFHACK_EXPORT T_animals {
        std::vector<int32_t > pet_races;
        std::vector<int32_t > wagon_races;
        std::vector<int32_t > pack_animal_races;
        std::vector<int32_t > wagon_puller_races;
        std::vector<int32_t > mount_races;
        std::vector<int32_t > minion_races;
        std::vector<int32_t > exotic_pet_races;
        std::vector<int16_t > pet_castes;
        std::vector<int16_t > wagon_castes;
        std::vector<int16_t > pack_animal_castes;
        std::vector<int16_t > wagon_puller_castes;
        std::vector<int16_t > mount_castes;
        std::vector<int16_t > minion_castes;
        std::vector<int16_t > exotic_pet_castes;
        static struct_identity _identity;
      public:
        T_animals();
      };
      T_animals animals;
      std::vector<df::entity_recipe* > meat_fish_recipes;
      std::vector<df::entity_recipe* > other_recipes;
      struct DFHACK_EXPORT T_unk13 {
        int16_t unk1;
        int32_t unk2;
        static struct_identity _identity;
      public:
        T_unk13();
      };
      T_unk13 unk13[3];
      std::vector<df::item* > unk14;
      int16_t unk15a;
      int16_t unk15b;
      df::ethic_response ethic[22];
      int32_t values[32];
      std::vector<int16_t > art_image_types; /*!< 0 = civilization symbol */
      std::vector<int32_t > art_image_ids;
      std::vector<int16_t > art_image_subids;
      std::vector<char > discovered_creature_foods;
      std::vector<char > discovered_creatures;
      std::vector<char > discovered_plant_foods;
      std::vector<char > discovered_plants;
      std::vector<int16_t > unk23;
      std::vector<int16_t > unk24;
      static struct_identity _identity;
    public:
      T_resources();
    };
    T_resources resources;
    std::vector<df::entity_uniform* > uniforms;
    int32_t next_uniform_id;
    struct DFHACK_EXPORT T_unknown1b {
      std::vector<int32_t > unk32b;
      std::vector<int32_t > worship;
      std::vector<int32_t > unk32d;
      struct DFHACK_EXPORT T_unk32e {
        std::vector<int16_t > anon_1;
        std::vector<int16_t > anon_2;
        int32_t anon_3;
        int32_t anon_4;
        std::vector<int32_t > anon_5;
        int16_t anon_6;
        int16_t anon_7;
        static struct_identity _identity;
      public:
        T_unk32e();
      };
      std::vector<T_unk32e* > unk32e;
      struct DFHACK_EXPORT T_diplomacy {
        int32_t group_id;
        int16_t relation;
        int32_t anon_1;
        std::vector<int32_t > anon_2;
        std::vector<int32_t > anon_3;
        int32_t anon_4;
        static struct_identity _identity;
      public:
        T_diplomacy();
      };
      std::vector<T_diplomacy* > diplomacy;
      int16_t unk33;
      std::vector<int16_t > unk34a;
      std::vector<int16_t > unk34b;
      std::vector<int32_t > unk34c;
      std::vector<int32_t > unk34d; /*!< empty */
      std::vector<int32_t > unk34e; /*!< empty */
      static struct_identity _identity;
    public:
      T_unknown1b();
    };
    T_unknown1b unknown1b;
    struct DFHACK_EXPORT T_positions {
      std::vector<df::entity_position* > own;
      std::vector<df::entity_position* > site;
      std::vector<df::entity_position* > conquered_site;
      int32_t next_position_id;
      std::vector<df::entity_position_assignment* > assignments;
      int32_t next_assignment_id;
      std::vector<df::entity_position_assignment* > unk_v40_1; /*!< v0.40.01 */
      std::vector<df::entity_position_assignment* > unk_v40_2; /*!< v0.40.01 */
      std::vector<df::entity_position_assignment* > unk_v40_3; /*!< v0.40.01 */
      std::vector<int32_t > unk_v40_4; /*!< v0.40.01 */
      std::vector<int32_t > unk_v40_5; /*!< v0.40.01 */
      static struct_identity _identity;
    public:
      T_positions();
    };
    T_positions positions;
    struct DFHACK_EXPORT T_tissue_styles {
      std::vector<df::entity_tissue_style* > all;
      int32_t next_style_id;
      static struct_identity _identity;
    public:
      T_tissue_styles();
    };
    T_tissue_styles tissue_styles;
    std::vector<int32_t > squads;
    struct DFHACK_EXPORT T_unknown1d {
      int32_t unk42;
      std::vector<int32_t > unk43; /*!< empty */
      int32_t unk44;
      int32_t unk44a; /*!< v0.34.01 */
      int32_t unk44b[15]; /*!< v0.34.01 */
      static struct_identity _identity;
    public:
      T_unknown1d();
    };
    T_unknown1d unknown1d;
    struct DFHACK_EXPORT T_training_knowledge {
      std::vector<df::training_knowledge_level > level;
      std::vector<int32_t > unk_10;
      static struct_identity _identity;
    public:
      T_training_knowledge();
    };
    T_training_knowledge* training_knowledge; /*!< v0.34.06 */
    std::vector<df::entity_event* > events;
    int32_t unk_v40_1a; /*!< v0.40.01 */
    int32_t unk_v40_1b; /*!< v0.40.01 */
    int32_t unk_v40_1c; /*!< v0.40.01 */
    int32_t unk_v40_1d; /*!< v0.40.01 */
    int32_t unk_v40_1e; /*!< v0.40.01 */
    std::vector<df::meeting_event* > meeting_events;
    df::entity_activity_statistics* activity_stats;
    struct DFHACK_EXPORT T_unknown1e {
      int16_t unk47;
      int32_t unk48;
      int32_t unk49a;
      int32_t unk49b;
      int32_t unk49c;
      int32_t unk49d[10];
      int32_t unk49e;
      int32_t unk49f;
      int32_t anon_1; /*!< v0.40.01 */
      static struct_identity _identity;
    public:
      T_unknown1e();
    };
    T_unknown1e unknown1e;
    std::vector<df::army* > armies; /*!< v0.40.01 */
    std::vector<df::army_controller* > army_controllers; /*!< v0.40.01 */
    std::vector<df::historical_figure* > hist_figures;
    std::vector<df::nemesis_record* > nemesis;
    struct DFHACK_EXPORT T_derived_resources {
      df::material_vec_ref mill_cookable;
      df::material_vec_ref mill_dye;
      std::vector<int16_t > armor_leather;
      std::vector<int16_t > armor_chain;
      std::vector<int16_t > armor_plate;
      std::vector<int16_t > armor_under;
      std::vector<int16_t > armor_over;
      std::vector<int16_t > armor_cover;
      std::vector<int16_t > pants_leather;
      std::vector<int16_t > pants_chain;
      std::vector<int16_t > pants_plate;
      std::vector<int16_t > pants_under;
      std::vector<int16_t > pants_over;
      std::vector<int16_t > pants_cover;
      std::vector<int16_t > helm_leather;
      std::vector<int16_t > helm_chain;
      std::vector<int16_t > helm_plate;
      std::vector<int16_t > helm_under;
      std::vector<int16_t > helm_over;
      std::vector<int16_t > helm_cover;
      std::vector<int16_t > shoes_leather;
      std::vector<int16_t > shoes_chain;
      std::vector<int16_t > shoes_plate;
      std::vector<int16_t > shoes_under;
      std::vector<int16_t > shoes_over;
      std::vector<int16_t > shoes_cover;
      std::vector<int16_t > gloves_leather;
      std::vector<int16_t > gloves_chain;
      std::vector<int16_t > gloves_plate;
      std::vector<int16_t > gloves_under;
      std::vector<int16_t > gloves_over;
      std::vector<int16_t > gloves_cover;
      static struct_identity _identity;
    public:
      T_derived_resources();
    };
    T_derived_resources derived_resources;
    std::vector<df::entity_position_assignment* > assignments_by_type[25];
    struct DFHACK_EXPORT T_claims {
      df::coord2d_path areas; /*!< in world_data.entity_claims1 */
      df::coord2d_path unk1;
      df::coord2d_path unk2;
      static struct_identity _identity;
    public:
      T_claims();
    };
    T_claims claims;
    std::vector<int32_t > children; /*!< includes self */
    struct DFHACK_EXPORT T_unknown2 {
      int32_t metal_proficiency; /*!< best IMPACT_FRACTURE/10000 + MAX_EDGE/1000 for weapon mats plus best IMPACT_FRACTURE/10000 for armor mats */
      std::vector<int16_t > unk10;
      df::resource_allotment_data* resource_allotment;
      int16_t unk12a;
      int16_t unk12b; /*!< uninitialized */
      bool unk13;
      int32_t unk14;
      int32_t unk15; /*!< uninitialized */
      int32_t unk16; /*!< uninitialized */
      int16_t unk17;
      std::vector<void* > unk18; /*!< empty */
      std::vector<void* > unk19; /*!< empty */
      int16_t unk20;
      int32_t unk21;
      int32_t unk22;
      int32_t unk23;
      std::vector<void* > unk24; /*!< empty */
      std::vector<void* > unk25; /*!< empty */
      int32_t unk26[177]; /*!< Uninitialized */
      std::vector<void* > unk28; /*!< empty */
      std::vector<void* > unk29; /*!< v0.34.01 */
      static struct_identity _identity;
    public:
      T_unknown2();
    };
    T_unknown2 unknown2;
    static struct_identity _identity;
    typedef historical_entity* key_pointer_type;
    typedef int32_t key_field_type;
    static int binsearch_index(const std::vector<historical_entity*> &vec, key_field_type key, bool exact = true);
    static int binsearch_index(const std::vector<historical_entity*> &vec, key_pointer_type key, bool exact = true);
    static std::vector<historical_entity*> &get_vector();
    static historical_entity *find(key_field_type id);
  public:
    historical_entity();
  };
  template<> struct DFHACK_EXPORT bitfield_traits<historical_entity::T_flags> {
    typedef uint32_t base_type;
    typedef historical_entity::T_flags bitfield_type;
    static const int bit_count = sizeof(base_type)*8;
    static const bitfield_item_info bits[bit_count];
  };
  template<> struct DFHACK_EXPORT identity_traits<historical_entity::T_flags> {
    static bitfield_identity identity;
    static bitfield_identity *get() { return &identity; }
  };
}
#endif
