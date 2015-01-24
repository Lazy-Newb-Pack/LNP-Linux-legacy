/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_FLOW_GUIDE_TRAILING_FLOWST_H
#define DF_FLOW_GUIDE_TRAILING_FLOWST_H
#ifndef DF_COORD_H
#include "coord.h"
#endif
#ifndef DF_FLOW_GUIDE_H
#include "flow_guide.h"
#endif
namespace df {
  struct DFHACK_EXPORT flow_guide_trailing_flowst : flow_guide {
    df::coord anon_1[15];
    static virtual_identity _identity;
  protected:
    flow_guide_trailing_flowst(virtual_identity *_id = &flow_guide_trailing_flowst::_identity);
    friend void *df::allocator_fn<flow_guide_trailing_flowst>(void*,const void*);
  };
}
#endif
