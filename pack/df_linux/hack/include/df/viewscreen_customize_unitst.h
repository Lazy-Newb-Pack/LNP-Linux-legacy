/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_VIEWSCREEN_CUSTOMIZE_UNITST_H
#define DF_VIEWSCREEN_CUSTOMIZE_UNITST_H
#ifndef DF_VIEWSCREEN_H
#include "viewscreen.h"
#endif
namespace df {
  struct unit;
  struct DFHACK_EXPORT viewscreen_customize_unitst : viewscreen {
    df::unit* unit;
    int8_t editing_nickname;
    int8_t editing_profession;
    std::string previous_name;
    int8_t has_name;
    static virtual_identity _identity;
  protected:
    viewscreen_customize_unitst(virtual_identity *_id = &viewscreen_customize_unitst::_identity);
    friend void *df::allocator_fn<viewscreen_customize_unitst>(void*,const void*);
  };
}
#endif
