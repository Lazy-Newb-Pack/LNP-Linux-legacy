/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_VIEWSCREEN_DWARFMODEST_H
#define DF_VIEWSCREEN_DWARFMODEST_H
#ifndef DF_UNIT_LABOR_H
#include "unit_labor.h"
#endif
#ifndef DF_VIEWSCREEN_H
#include "viewscreen.h"
#endif
namespace df {
  struct unit;
  struct DFHACK_EXPORT viewscreen_dwarfmodest : viewscreen {
    int8_t shown_site_name;
    int16_t jeweler_mat_count;
    std::vector<int32_t > jeweler_cutgem;
    std::vector<int32_t > jeweler_encrust;
    std::vector<df::unit_labor > unit_labors_sidemenu;
    std::vector<df::unit_labor > unit_labors_sidemenu_uplevel;
    int32_t unit_labors_sidemenu_uplevel_idx;
    int8_t sideSubmenu;
    int8_t keyRepeat;
    std::vector<df::unit* > trained_animals;
    int32_t trained_animal_idx;
    int32_t number_assigned_hunt;
    int32_t number_assigned_war;
    static virtual_identity _identity;
  protected:
    viewscreen_dwarfmodest(virtual_identity *_id = &viewscreen_dwarfmodest::_identity);
    friend void *df::allocator_fn<viewscreen_dwarfmodest>(void*,const void*);
  };
}
#endif
