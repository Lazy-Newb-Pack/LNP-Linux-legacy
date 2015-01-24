/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_VIEWSCREEN_BARTERST_H
#define DF_VIEWSCREEN_BARTERST_H
#ifndef DF_VIEWSCREEN_H
#include "viewscreen.h"
#endif
namespace df {
  struct DFHACK_EXPORT viewscreen_barterst : viewscreen {
    void* anon_1;
    void* anon_2;
    void* anon_3;
    void* anon_4;
    std::vector<void* > anon_5[2];
    std::vector<void* > anon_6[2];
    std::vector<void* > anon_7[2];
    std::vector<void* > anon_8;
    std::vector<void* > anon_9;
    int32_t anon_10[2];
    int8_t anon_11;
    int16_t anon_12;
    int8_t anon_13;
    int32_t max_ask;
    int32_t max_offer;
    int32_t cur_ask;
    int32_t cur_offer;
    int16_t anon_14;
    int8_t anon_15;
    std::string anon_16;
    static virtual_identity _identity;
  protected:
    viewscreen_barterst(virtual_identity *_id = &viewscreen_barterst::_identity);
    friend void *df::allocator_fn<viewscreen_barterst>(void*,const void*);
  };
}
#endif
