/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_VIEWSCREEN_EXPORT_REGIONST_H
#define DF_VIEWSCREEN_EXPORT_REGIONST_H
#ifndef DF_VIEWSCREEN_H
#include "viewscreen.h"
#endif
namespace df {
  struct DFHACK_EXPORT viewscreen_export_regionst : viewscreen {
    int8_t anon_1;
    std::vector<void* > anon_2;
    std::vector<void* > anon_3;
    std::vector<void* > anon_4;
    int32_t anon_5;
    int32_t anon_6;
    int32_t anon_7;
    static virtual_identity _identity;
  protected:
    viewscreen_export_regionst(virtual_identity *_id = &viewscreen_export_regionst::_identity);
    friend void *df::allocator_fn<viewscreen_export_regionst>(void*,const void*);
  };
}
#endif
