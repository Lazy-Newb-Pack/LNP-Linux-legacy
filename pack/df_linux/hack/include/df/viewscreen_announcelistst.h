/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_VIEWSCREEN_ANNOUNCELISTST_H
#define DF_VIEWSCREEN_ANNOUNCELISTST_H
#ifndef DF_UNIT_REPORT_TYPE_H
#include "unit_report_type.h"
#endif
#ifndef DF_VIEWSCREEN_H
#include "viewscreen.h"
#endif
namespace df {
  struct report;
  struct unit;
  struct DFHACK_EXPORT viewscreen_announcelistst : viewscreen {
    df::unit* unit;
    df::unit_report_type report_type;
    int32_t sel_idx;
    std::vector<df::report* > reports;
    static virtual_identity _identity;
  protected:
    viewscreen_announcelistst(virtual_identity *_id = &viewscreen_announcelistst::_identity);
    friend void *df::allocator_fn<viewscreen_announcelistst>(void*,const void*);
  };
}
#endif
