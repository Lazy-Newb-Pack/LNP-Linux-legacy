/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_VIEWSCREEN_REPORTLISTST_H
#define DF_VIEWSCREEN_REPORTLISTST_H
#ifndef DF_UNIT_REPORT_TYPE_H
#include "unit_report_type.h"
#endif
#ifndef DF_VIEWSCREEN_H
#include "viewscreen.h"
#endif
namespace df {
  struct unit;
  struct DFHACK_EXPORT viewscreen_reportlistst : viewscreen {
    std::vector<df::unit* > units;
    std::vector<df::unit_report_type > types;
    std::vector<int32_t > last_id;
    int32_t cursor;
    static virtual_identity _identity;
  protected:
    viewscreen_reportlistst(virtual_identity *_id = &viewscreen_reportlistst::_identity);
    friend void *df::allocator_fn<viewscreen_reportlistst>(void*,const void*);
  };
}
#endif
