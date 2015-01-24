/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_HISTORY_EVENT_BODY_ABUSEDST_H
#define DF_HISTORY_EVENT_BODY_ABUSEDST_H
#ifndef DF_COORD2D_H
#include "coord2d.h"
#endif
#ifndef DF_HISTORY_EVENT_H
#include "history_event.h"
#endif
#ifndef DF_ITEM_TYPE_H
#include "item_type.h"
#endif
namespace df {
  struct DFHACK_EXPORT history_event_body_abusedst : history_event {
    std::vector<int32_t > bodies;
    int32_t anon_1;
    int32_t civ;
    int32_t histfig;
    int32_t site;
    int32_t region;
    int32_t layer;
    df::coord2d region_pos;
    int16_t abuse_type;
    union DFHACK_EXPORT T_props {
      struct DFHACK_EXPORT T_item {
        df::item_type item_type;
        int32_t item_subtype;
        int16_t mat_type;
        int32_t mat_index;
      };
      T_item item;
      int32_t structure;
      int32_t pile_type;
    };
    T_props props;
    static virtual_identity _identity;
  protected:
    history_event_body_abusedst(virtual_identity *_id = &history_event_body_abusedst::_identity);
    friend void *df::allocator_fn<history_event_body_abusedst>(void*,const void*);
  };
  template<> struct DFHACK_EXPORT identity_traits<history_event_body_abusedst::T_props::T_item> {
    static struct_identity identity;
    static struct_identity *get() { return &identity; }
  };
  template<> struct DFHACK_EXPORT identity_traits<history_event_body_abusedst::T_props> {
    static struct_identity identity;
    static struct_identity *get() { return &identity; }
  };
}
#endif
