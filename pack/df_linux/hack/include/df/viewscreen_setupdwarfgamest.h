/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_VIEWSCREEN_SETUPDWARFGAMEST_H
#define DF_VIEWSCREEN_SETUPDWARFGAMEST_H
#ifndef DF_EMBARK_ITEM_CHOICE_H
#include "embark_item_choice.h"
#endif
#ifndef DF_EMBARK_LOCATION_H
#include "embark_location.h"
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
#ifndef DF_PROFESSION_H
#include "profession.h"
#endif
#ifndef DF_VIEWSCREEN_H
#include "viewscreen.h"
#endif
namespace df {
  struct item;
  struct unit;
  struct DFHACK_EXPORT viewscreen_setupdwarfgamest : viewscreen {
    char title[256];
    struct DFHACK_EXPORT T_dwarf_info {
      df::language_name name;
      char unk_6c[4];
      int32_t skills[118];
      int32_t unk_244;
      int16_t unk_248;
      char unk_24a[2];
      char unk_24c[8];
      int16_t levels_remaining;
      char unk_256[2];
      int32_t unk_258[19]; /*!< Value is 0x0 */
      int16_t unk_2a4;
      char unk_2a6[2];
      int32_t unk_2a8;
      int32_t unk_2ac;
      int32_t unk_2b0;
      char unk_2b4[4];
      static struct_identity _identity;
    public:
      T_dwarf_info();
    };
    std::vector<T_dwarf_info* > dwarf_info;
    std::vector<df::job_skill > embark_skills;
    std::vector<df::profession > reclaim_professions;
    int32_t mode;
    int32_t dwarf_cursor;
    int32_t dwarf_page_idx;
    int32_t item_cursor;
    int32_t skill_cursor;
    int32_t animal_cursor;
    int32_t dwarf_column;
    int32_t supply_column;
    int32_t display_row;
    int8_t show_play_now;
    std::vector<int8_t > anon_1;
    std::vector<int32_t > anon_2;
    int32_t choice;
    std::string profile_name;
    std::vector<void* > anon_3;
    int32_t anon_4;
    int8_t anon_5;
    int8_t in_save_profile;
    int8_t anon_6;
    df::embark_item_choice item_choice;
    struct DFHACK_EXPORT T_animals {
      std::vector<int32_t > race;
      std::vector<int16_t > caste;
      std::vector<df::profession > profession;
      std::vector<int16_t > count;
      static struct_identity _identity;
    public:
      T_animals();
    };
    T_animals animals;
    df::language_name fort_name;
    df::language_name group_name;
    int8_t anon_7;
    df::embark_location location;
    std::vector<df::unit* > units;
    std::vector<df::item* > items;
    int32_t anon_8;
    int32_t points_remaining;
    df::item_type add_item_type;
    int16_t add_item_subtype;
    int16_t add_mattype;
    int32_t add_matindex;
    int32_t adding_item;
    static virtual_identity _identity;
  protected:
    viewscreen_setupdwarfgamest(virtual_identity *_id = &viewscreen_setupdwarfgamest::_identity);
    friend void *df::allocator_fn<viewscreen_setupdwarfgamest>(void*,const void*);
  };
}
#endif
