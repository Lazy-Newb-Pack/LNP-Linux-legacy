/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_CREATURE_RAW_H
#define DF_CREATURE_RAW_H
#ifndef DF_CREATURE_RAW_FLAGS_H
#include "creature_raw_flags.h"
#endif
#ifndef DF_ITEM_TYPE_H
#include "item_type.h"
#endif
#ifndef DF_MATERIAL_VEC_REF_H
#include "material_vec_ref.h"
#endif
namespace df {
  struct caste_raw;
  struct creature_graphics_appointment;
  struct material;
  struct tissue;
  struct DFHACK_EXPORT creature_raw {
    std::string creature_id;
    std::string name[3];
    std::string general_baby_name[2];
    std::string general_child_name[2];
    uint8_t creature_tile;
    uint8_t creature_soldier_tile;
    uint8_t alttile;
    uint8_t soldier_alttile;
    uint8_t glowtile;
    uint16_t temperature1;
    uint16_t temperature2;
    int16_t frequency;
    int16_t population_number[2];
    int16_t cluster_number[2];
    int16_t triggerable_group[2];
    int16_t color[3];
    int16_t glowcolor[3];
    int32_t adultsize;
    std::vector<std::string* > prefstring;
    std::vector<int16_t > sphere;
    std::vector<df::caste_raw* > caste;
    std::vector<int32_t > pop_ratio;
    BitArray<df::creature_raw_flags> flags;
    struct DFHACK_EXPORT T_graphics {
      int32_t texpos[6];
      int32_t texpos_gs[6];
      int32_t entity_link_texpos[6][15];
      int32_t entity_link_texpos_gs[6][15];
      int32_t site_link_texpos[6][7];
      int32_t site_link_texpos_gs[6][7];
      int32_t profession_texpos[6][112];
      int32_t profession_texpos_gs[6][112];
      bool add_color[6];
      bool entity_link_add_color[6][15];
      bool site_link_add_color[6][7];
      bool profession_add_color[6][112];
      std::vector<df::creature_graphics_appointment* > appointments;
      static struct_identity _identity;
    public:
      T_graphics();
    };
    T_graphics graphics;
    std::vector<int8_t > speech1;
    std::vector<int32_t > speech2;
    std::vector<void* > speech3;
    std::vector<df::material* > material;
    std::vector<df::tissue* > tissue;
    struct DFHACK_EXPORT T_profession_name {
      std::string singular[112];
      std::string plural[112];
      static struct_identity _identity;
    public:
      T_profession_name();
    };
    T_profession_name profession_name;
    int32_t underground_layer_min;
    int32_t underground_layer_max;
    std::vector<int32_t > modifier_class;
    std::vector<int32_t > modifier_num_patterns; /*!< for color modifiers, == number of items in their pattern_* vectors */
    struct DFHACK_EXPORT T_hive_product {
      std::vector<int32_t > number;
      std::vector<int32_t > time;
      std::vector<df::item_type > item_type;
      std::vector<int16_t > item_subtype;
      df::material_vec_ref material;
      std::vector<std::string* > tmpstr[5];
      static struct_identity _identity;
    public:
      T_hive_product();
    };
    T_hive_product hive_product;
    int32_t source_hfid;
    int32_t next_modifier_id;
    std::vector<std::string* > raws;
    static struct_identity _identity;
    static std::vector<creature_raw*> &get_vector();
    static creature_raw *find(int id);
  public:
    creature_raw();
  };
}
#endif
