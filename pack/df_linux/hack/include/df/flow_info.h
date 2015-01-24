/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_FLOW_INFO_H
#define DF_FLOW_INFO_H
#ifndef DF_COORD_H
#include "coord.h"
#endif
#ifndef DF_FLOW_TYPE_H
#include "flow_type.h"
#endif
namespace df {
  struct DFHACK_EXPORT flow_info {
    df::flow_type type;
    int16_t mat_type;
    int32_t mat_index;
    int16_t density;
    df::coord pos;
    df::coord dest;
    bool expanding;
    bool reuse;
    int32_t guide_id;
    static struct_identity _identity;
  public:
    flow_info();
  };
}
#endif
