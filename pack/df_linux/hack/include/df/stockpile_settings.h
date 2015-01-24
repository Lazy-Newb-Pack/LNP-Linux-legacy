/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_STOCKPILE_SETTINGS_H
#define DF_STOCKPILE_SETTINGS_H
#ifndef DF_STOCKPILE_GROUP_SET_H
#include "stockpile_group_set.h"
#endif
namespace df {
  struct DFHACK_EXPORT stockpile_settings {
    df::stockpile_group_set flags;
    struct DFHACK_EXPORT T_animals {
      bool empty_cages;
      bool empty_traps;
      std::vector<char > enabled;
      static struct_identity _identity;
    public:
      T_animals();
    };
    T_animals animals;
    struct DFHACK_EXPORT T_food {
      std::vector<char > meat;
      std::vector<char > fish;
      std::vector<char > unprepared_fish;
      std::vector<char > egg;
      std::vector<char > plants;
      std::vector<char > drink_plant;
      std::vector<char > drink_animal;
      std::vector<char > cheese_plant;
      std::vector<char > cheese_animal;
      std::vector<char > seeds;
      std::vector<char > leaves;
      std::vector<char > powder_plant;
      std::vector<char > powder_creature;
      std::vector<char > glob;
      std::vector<char > glob_paste;
      std::vector<char > glob_pressed;
      std::vector<char > liquid_plant;
      std::vector<char > liquid_animal;
      std::vector<char > liquid_misc;
      bool prepared_meals;
      static struct_identity _identity;
    public:
      T_food();
    };
    T_food food;
    struct DFHACK_EXPORT T_furniture {
      std::vector<char > type;
      std::vector<char > other_mats;
      std::vector<char > mats;
      bool quality_core[7];
      bool quality_total[7];
      bool sand_bags;
      static struct_identity _identity;
    public:
      T_furniture();
    };
    T_furniture furniture;
    int32_t unk1;
    struct DFHACK_EXPORT T_refuse {
      std::vector<char > type;
      std::vector<char > corpses;
      std::vector<char > body_parts;
      std::vector<char > skulls;
      std::vector<char > bones;
      std::vector<char > hair;
      std::vector<char > shells;
      std::vector<char > teeth;
      std::vector<char > horns;
      bool fresh_raw_hide;
      bool rotten_raw_hide;
      static struct_identity _identity;
    public:
      T_refuse();
    };
    T_refuse refuse;
    struct DFHACK_EXPORT T_stone {
      std::vector<char > mats;
      static struct_identity _identity;
    public:
      T_stone();
    };
    T_stone stone;
    struct DFHACK_EXPORT T_ore {
      std::vector<char > mats; /*!< unused */
      static struct_identity _identity;
    public:
      T_ore();
    };
    T_ore ore;
    struct DFHACK_EXPORT T_ammo {
      std::vector<char > type;
      std::vector<char > other_mats;
      std::vector<char > mats;
      bool quality_core[7];
      bool quality_total[7];
      static struct_identity _identity;
    public:
      T_ammo();
    };
    T_ammo ammo;
    struct DFHACK_EXPORT T_coins {
      std::vector<char > mats;
      static struct_identity _identity;
    public:
      T_coins();
    };
    T_coins coins;
    struct DFHACK_EXPORT T_bars_blocks {
      std::vector<char > bars_other_mats;
      std::vector<char > blocks_other_mats;
      std::vector<char > bars_mats;
      std::vector<char > blocks_mats;
      static struct_identity _identity;
    public:
      T_bars_blocks();
    };
    T_bars_blocks bars_blocks;
    struct DFHACK_EXPORT T_gems {
      std::vector<char > rough_other_mats;
      std::vector<char > cut_other_mats;
      std::vector<char > rough_mats;
      std::vector<char > cut_mats;
      static struct_identity _identity;
    public:
      T_gems();
    };
    T_gems gems;
    struct DFHACK_EXPORT T_finished_goods {
      std::vector<char > type;
      std::vector<char > other_mats;
      std::vector<char > mats;
      bool quality_core[7];
      bool quality_total[7];
      static struct_identity _identity;
    public:
      T_finished_goods();
    };
    T_finished_goods finished_goods;
    struct DFHACK_EXPORT T_leather {
      std::vector<char > mats;
      static struct_identity _identity;
    public:
      T_leather();
    };
    T_leather leather;
    struct DFHACK_EXPORT T_cloth {
      std::vector<char > thread_silk;
      std::vector<char > thread_plant;
      std::vector<char > thread_yarn;
      std::vector<char > thread_metal;
      std::vector<char > cloth_silk;
      std::vector<char > cloth_plant;
      std::vector<char > cloth_yarn;
      std::vector<char > cloth_metal;
      static struct_identity _identity;
    public:
      T_cloth();
    };
    T_cloth cloth;
    struct DFHACK_EXPORT T_wood {
      std::vector<char > mats;
      static struct_identity _identity;
    public:
      T_wood();
    };
    T_wood wood;
    struct DFHACK_EXPORT T_weapons {
      std::vector<char > weapon_type;
      std::vector<char > trapcomp_type;
      std::vector<char > other_mats;
      std::vector<char > mats;
      bool quality_core[7];
      bool quality_total[7];
      bool usable;
      bool unusable;
      static struct_identity _identity;
    public:
      T_weapons();
    };
    T_weapons weapons;
    struct DFHACK_EXPORT T_armor {
      std::vector<char > body;
      std::vector<char > head;
      std::vector<char > feet;
      std::vector<char > hands;
      std::vector<char > legs;
      std::vector<char > shield;
      std::vector<char > other_mats;
      std::vector<char > mats;
      bool quality_core[7];
      bool quality_total[7];
      bool usable;
      bool unusable;
      static struct_identity _identity;
    public:
      T_armor();
    };
    T_armor armor;
    bool allow_organic;
    bool allow_inorganic;
    static struct_identity _identity;
  public:
    stockpile_settings();
  };
}
#endif
