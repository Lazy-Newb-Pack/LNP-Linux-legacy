/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_VIEWSCREEN_JUSTICEST_H
#define DF_VIEWSCREEN_JUSTICEST_H
#ifndef DF_VIEWSCREEN_H
#include "viewscreen.h"
#endif
namespace df {
  struct crime;
  struct punishment;
  struct unit;
  struct DFHACK_EXPORT viewscreen_justicest : viewscreen {
    int16_t jails_needed;
    int16_t jails_present;
    int32_t cur_column;
    std::vector<df::unit* > convicts;
    std::vector<df::crime* > recent_cases;
    int32_t anon_1;
    int32_t anon_2;
    int32_t anon_3;
    bool cold_cases;
    int32_t anon_4;
    int32_t anon_5;
    int32_t cursor_right;
    std::vector<df::crime* > convictions;
    df::punishment* punishment;
    std::vector<df::unit* > anon_6;
    static virtual_identity _identity;
  protected:
    viewscreen_justicest(virtual_identity *_id = &viewscreen_justicest::_identity);
    friend void *df::allocator_fn<viewscreen_justicest>(void*,const void*);
  };
}
#endif
