/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_VIEWSCREEN_LEGENDSST_H
#define DF_VIEWSCREEN_LEGENDSST_H
#ifndef DF_VIEWSCREEN_H
#include "viewscreen.h"
#endif
namespace df {
  struct DFHACK_EXPORT viewscreen_legendsst : viewscreen {
    int32_t anon_1;
    int32_t init_step;
    int32_t init_era;
    int32_t anon_2;
    int32_t anon_3;
    int32_t init_progress;
    std::vector<int32_t > histfigs;
    std::vector<int32_t > sites;
    std::vector<int32_t > artifacts;
    std::vector<int32_t > regions;
    std::vector<int32_t > layers;
    std::vector<int32_t > entities;
    std::vector<int32_t > structures_1;
    std::vector<int32_t > structures_2;
    std::vector<int32_t > unk_a8;
    std::vector<void* > anon_4;
    std::vector<void* > anon_5;
    std::vector<bool> anon_6;
    std::vector<void* > anon_7;
    std::vector<void* > anon_8;
    std::vector<void* > anon_9;
    std::vector<void* > anon_10;
    std::string era_name;
    int16_t cur_page;
    int32_t anon_11;
    int32_t main_cursor;
    std::vector<int16_t > main_row_type;
    std::vector<int32_t > main_row_arg1;
    std::vector<int32_t > main_row_arg2;
    std::vector<int32_t > main_row_arg3;
    int32_t sub_cursor;
    int8_t anon_12;
    std::vector<void* > anon_13;
    int16_t map_x;
    int16_t map_y;
    int16_t hide_territories;
    int16_t civ_site_mode;
    int16_t anon_14;
    std::string filter_text;
    int8_t filter_editing;
    std::vector<int32_t > anon_15; /*!< index into histfigs */
    std::vector<int32_t > anon_16; /*!< index into sites */
    std::vector<int32_t > anon_17; /*!< index into artifacts */
    std::vector<int32_t > anon_18; /*!< index into regions */
    std::vector<int32_t > anon_19; /*!< index into layers */
    std::vector<int32_t > anon_20; /*!< index into unk_a8 */
    std::vector<int32_t > anon_21; /*!< index into entities */
    std::vector<int32_t > anon_22; /*!< index into structures */
    static virtual_identity _identity;
  protected:
    viewscreen_legendsst(virtual_identity *_id = &viewscreen_legendsst::_identity);
    friend void *df::allocator_fn<viewscreen_legendsst>(void*,const void*);
  };
}
#endif
