/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_CASTE_RAW_H
#define DF_CASTE_RAW_H
#ifndef DF_CASTE_BODY_INFO_H
#include "caste_body_info.h"
#endif
#ifndef DF_CASTE_RAW_FLAGS_H
#include "caste_raw_flags.h"
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
#ifndef DF_MATTER_STATE_H
#include "matter_state.h"
#endif
#ifndef DF_SKILL_RATING_H
#include "skill_rating.h"
#endif
namespace df {
  struct body_appearance_modifier;
  struct bp_appearance_modifier;
  struct color_modifier_raw;
  struct tissue_style_raw;
  struct DFHACK_EXPORT caste_raw {
    std::string caste_id;
    std::string caste_name[3];
    std::string vermin_bite_txt;
    std::string gnawer_txt;
    std::string baby_name[2];
    std::string child_name[2];
    std::string itemcorpse_str[5];
    std::string remains[2];
    std::string description;
    /**
     * fingers[2], nose, ear, head, eyes, mouth, hair, knuckles, lips, cheek, nails, f eet, arms, hands, tongue, leg
     */
    std::string mannerisms[17];
    uint8_t caste_tile;
    uint8_t caste_soldier_tile;
    uint8_t caste_alttile;
    uint8_t caste_soldier_alttile;
    uint8_t caste_glowtile;
    uint16_t homeotherm;
    uint16_t min_temp;
    uint16_t max_temp;
    uint16_t fixed_temp;
    int16_t caste_color[3];
    struct DFHACK_EXPORT T_misc {
      int16_t litter_size_min;
      int16_t litter_size_max;
      int16_t penetratepower;
      int16_t vermin_bite_chance;
      int16_t grasstrample;
      int16_t buildingdestroyer;
      df::item_type itemcorpse_itemtype;
      int16_t itemcorpse_itemsubtype;
      int16_t itemcorpse_materialtype;
      int16_t itemcorpse_materialindex;
      int16_t itemcorpse_quality;
      int16_t remains_color[3];
      int16_t difficulty;
      int16_t caste_glowcolor[3];
      int16_t beach_frequency;
      int16_t clutch_size_min;
      int16_t clutch_size_max;
      int16_t vision_arc_min;
      int16_t vision_arc_max;
      int32_t speed; /*!< no longer used */
      int32_t modvalue;
      int32_t petvalue;
      int32_t milkable;
      int32_t viewrange;
      int32_t maxage_min;
      int32_t maxage_max;
      int32_t baby_age;
      int32_t child_age;
      int32_t swim_speed; /*!< no longer used */
      int32_t trade_capacity;
      int32_t unk4;
      int32_t pop_ratio;
      int32_t adult_size;
      int32_t bone_mat;
      int32_t bone_matidx;
      int32_t fish_mat_index;
      int32_t egg_mat_index;
      int32_t attack_trigger[3];
      int32_t egg_size;
      int32_t grazer;
      int32_t petvalue_divisor;
      int32_t prone_to_rage;
      int32_t unk6[29];
      static struct_identity _identity;
    public:
      T_misc();
    };
    T_misc misc;
    struct DFHACK_EXPORT T_personality {
      int16_t a[50];
      int16_t b[50];
      int16_t c[50];
      static struct_identity _identity;
    public:
      T_personality();
    };
    T_personality personality;
    BitArray<df::caste_raw_flags> flags;
    int32_t index; /*!< global across creatures */
    df::caste_body_info body_info;
    std::vector<void* > caste_speech_1;
    std::vector<void* > caste_speech_2;
    int32_t skill_rates[4][118];
    struct DFHACK_EXPORT T_attributes {
      int32_t phys_att_range[6][7];
      int32_t ment_att_range[13][7];
      int32_t phys_att_rates[6][4];
      int32_t ment_att_rates[13][4];
      int32_t phys_att_cap_perc[6];
      int32_t ment_att_cap_perc[13];
      static struct_identity _identity;
    public:
      T_attributes();
    };
    T_attributes attributes;
    int8_t gender;
    int32_t orientation_male[3]; /*!< v0.40.1 */
    int32_t orientation_female[3]; /*!< v0.40.1 */
    std::vector<int32_t > body_size_1;
    std::vector<int32_t > body_size_2;
    std::vector<df::body_appearance_modifier* > body_appearance_modifiers;
    struct DFHACK_EXPORT T_bp_appearance {
      std::vector<df::bp_appearance_modifier* > modifiers;
      std::vector<int32_t > modifier_idx;
      std::vector<int16_t > part_idx;
      std::vector<int16_t > layer_idx;
      std::vector<int16_t > style_part_idx;
      std::vector<int16_t > style_layer_idx;
      std::vector<int32_t > style_list_idx;
      static struct_identity _identity;
    public:
      T_bp_appearance();
    };
    T_bp_appearance bp_appearance;
    std::vector<df::color_modifier_raw* > color_modifiers;
    std::vector<df::tissue_style_raw* > tissue_styles;
    struct DFHACK_EXPORT T_shearable_tissue_layer {
      int8_t unk_0;
      int8_t unk_1;
      int32_t length;
      std::vector<int16_t > part_idx;
      std::vector<int16_t > layer_idx;
      std::vector<int32_t > bp_modifiers_idx;
      static struct_identity _identity;
    public:
      T_shearable_tissue_layer();
    };
    std::vector<T_shearable_tissue_layer* > shearable_tissue_layer;
    std::vector<void* > unk16a[4];
    std::vector<void* > unk16b[4];
    int32_t unk18[2];
    std::vector<df::job_skill > natural_skill_id;
    std::vector<int32_t > natural_skill_exp;
    std::vector<df::skill_rating > natural_skill_lvl;
    struct DFHACK_EXPORT T_caste_profession_name {
      std::string singular[112];
      std::string plural[112];
      static struct_identity _identity;
    public:
      T_caste_profession_name();
    };
    T_caste_profession_name caste_profession_name;
    struct DFHACK_EXPORT T_extracts {
      std::vector<int16_t > extract_mat;
      std::vector<int32_t > extract_matidx;
      std::vector<std::string* > extract_str[3];
      int16_t milkable_mat;
      int32_t milkable_matidx;
      std::string milkable_str[3];
      int16_t webber_mat;
      int32_t webber_matidx;
      std::string webber_str[3];
      int16_t vermin_bite_mat;
      int32_t vermin_bite_matidx;
      int16_t vermin_bite_chance;
      std::string vermin_bite_str[3];
      int16_t tendons_mat;
      int32_t tendons_matidx;
      std::string tendons_str[3];
      int32_t tendons_heal;
      int16_t ligaments_mat;
      int32_t ligaments_matidx;
      std::string ligaments_str[3];
      int32_t ligaments_heal;
      int16_t blood_state;
      int16_t blood_mat;
      int32_t blood_matidx;
      std::string blood_str[3];
      int16_t pus_state;
      int16_t pus_mat;
      int32_t pus_matidx;
      std::string pus_str[3];
      std::vector<int16_t > egg_material_mattype;
      std::vector<int32_t > egg_material_matindex;
      std::vector<std::string* > egg_material_str[3];
      std::vector<df::item_type > lays_unusual_eggs_itemtype;
      std::vector<void* > lays_unusual_eggs_itemsubtype;
      std::vector<int16_t > lays_unusual_eggs_mattype;
      std::vector<int32_t > lays_unusual_eggs_matindex;
      std::vector<std::string* > lays_unusual_eggs_str[5];
      static struct_identity _identity;
    public:
      T_extracts();
    };
    T_extracts extracts;
    struct DFHACK_EXPORT T_secretion {
      int16_t mat_type;
      int32_t mat_index;
      df::matter_state mat_state;
      std::string mat_type_str;
      std::string mat_index_str;
      std::string unk_44;
      std::vector<int16_t > body_part_id;
      std::vector<int16_t > layer_id;
      int32_t cause; /*!< v0.40.01; 2 EXERTION, 1 EXTREME_EMOTION, 0 always? */
      static struct_identity _identity;
    public:
      T_secretion();
    };
    std::vector<T_secretion* > secretion;
    std::vector<std::string* > creature_class;
    struct DFHACK_EXPORT T_unknown2 {
      std::vector<std::string* > gobble_vermin_class;
      std::vector<std::string* > gobble_vermin_creature_1;
      std::vector<std::string* > gobble_vermin_creature_2;
      std::vector<int32_t > infect_all; /*!< v0.34.01; for spatter applied to all bp */
      std::vector<int32_t > infect_local; /*!< v0.34.01; for spatter applied to one bp */
      std::vector<int32_t > unk23f; /*!< v0.34.01 */
      std::vector<int32_t > unk23g; /*!< v0.34.01 */
      BitArray<int> unk24_flags;
      BitArray<int> unk25_flags;
      int32_t armor_sizes[4][4]; /*!< index by UBSTEP */
      int32_t pants_sizes[4]; /*!< index by LBSTEP */
      int32_t helm_size;
      int32_t shield_sizes[4]; /*!< index by UPSTEP */
      int32_t shoes_sizes[4]; /*!< index by UPSTEP */
      int32_t gloves_sizes[4]; /*!< index by UPSTEP */
      df::material_vec_ref materials;
      std::vector<int16_t > unk_2f20;
      std::vector<int8_t > unk_2f30;
      std::vector<int32_t > unk_2f40;
      std::vector<int16_t > unk_2f50; /*!< v0.34.01 */
      int16_t mat_type;
      int32_t mat_index;
      static struct_identity _identity;
    public:
      T_unknown2();
    };
    T_unknown2 unknown2;
    int32_t habit_num[2];
    std::vector<int16_t > habit_1;
    std::vector<int32_t > habit_2;
    std::vector<int16_t > lair_1;
    std::vector<int32_t > lair_2;
    std::vector<int16_t > lair_characteristic_1;
    std::vector<int32_t > lair_characteristic_2;
    std::vector<void* > lair_hunter_speech[2];
    std::vector<void* > unk29[2];
    std::vector<void* > specific_food[2];
    std::vector<void* > sound;
    std::vector<int32_t > sound_alert;
    std::vector<int32_t > sound_peaceful_intermittent;
    std::vector<void* > anon_1; /*!< v0.34.01 */
    int32_t smell_trigger;
    int32_t odor_level;
    std::string odor_string;
    int32_t low_light_vision;
    std::vector<std::string* > sense_creature_class_1;
    std::vector<int8_t > sense_creature_class_2;
    std::vector<int16_t > sense_creature_class_3;
    std::vector<int16_t > sense_creature_class_4;
    std::vector<int16_t > sense_creature_class_5;
    static struct_identity _identity;
  public:
    caste_raw();
  };
}
#endif
