/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_VIEWSCREEN_NEW_REGIONST_H
#define DF_VIEWSCREEN_NEW_REGIONST_H
#ifndef DF_VIEWSCREEN_H
#include "viewscreen.h"
#endif
namespace df {
  struct DFHACK_EXPORT viewscreen_new_regionst : viewscreen {
    std::vector<void* > worldgen_presets;
    int8_t unk_2;
    int8_t in_worldgen;
    int32_t cursor_paramset;
    std::string random_seed;
    int8_t editing_randseed;
    int8_t editing_customname;
    int8_t editing_title;
    int8_t popup_deleteset;
    int8_t popup_changedimensions;
    int8_t unk_11;
    uint16_t custom_size_x;
    uint16_t custom_size_y;
    int8_t popup_abort;
    int8_t popup_goon;
    int8_t unsaved_changes;
    int8_t simple_mode; /*!< 0=advanced params, 1=create new world */
    int8_t unk_20;
    int8_t unk_21;
    int16_t cursor_line;
    int32_t world_size;
    int32_t history;
    int32_t number_civs;
    int32_t number_sites;
    int32_t number_beasts;
    int32_t savagery;
    int32_t mineral_occurence;
    int8_t worldgen_paused;
    int8_t worldgen_rejected;
    std::vector<std::string* > unk_32; /*!< rejection related */
    std::vector<std::string* > unk_33; /*!< fullscreen popup */
    std::string unk_98;
    int8_t unk_b4;
    int32_t unk_b8;
    int32_t unk_bc;
    static virtual_identity _identity;
  protected:
    viewscreen_new_regionst(virtual_identity *_id = &viewscreen_new_regionst::_identity);
    friend void *df::allocator_fn<viewscreen_new_regionst>(void*,const void*);
  };
}
#endif
