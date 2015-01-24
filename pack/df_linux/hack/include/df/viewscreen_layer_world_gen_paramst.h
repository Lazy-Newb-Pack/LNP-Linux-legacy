/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_VIEWSCREEN_LAYER_WORLD_GEN_PARAMST_H
#define DF_VIEWSCREEN_LAYER_WORLD_GEN_PARAMST_H
#ifndef DF_VIEWSCREEN_LAYER_H
#include "viewscreen_layer.h"
#endif
namespace df {
  struct DFHACK_EXPORT viewscreen_layer_world_gen_paramst : viewscreen_layer {
    int32_t anon_1;
    std::string anon_2;
    std::vector<void* > anon_3;
    struct DFHACK_EXPORT T_unk1 {
      int32_t anon_1;
      int32_t anon_2;
      int32_t anon_3;
      int32_t anon_4;
      int32_t anon_5;
      int32_t anon_6;
      int32_t anon_7;
      int32_t anon_8;
      int32_t anon_9;
      int32_t anon_10;
      int32_t anon_11;
      int32_t anon_12;
      int32_t anon_13;
      int32_t anon_14;
      int32_t anon_15;
      int32_t anon_16;
      int32_t anon_17;
      int32_t anon_18;
      int32_t anon_19;
      int32_t anon_20;
      int32_t anon_21;
      int32_t anon_22;
      int32_t anon_23;
      int32_t anon_24;
      int32_t anon_25;
      int32_t anon_26;
      static struct_identity _identity;
    public:
      T_unk1();
    };
    T_unk1 unk1;
    static virtual_identity _identity;
  protected:
    viewscreen_layer_world_gen_paramst(virtual_identity *_id = &viewscreen_layer_world_gen_paramst::_identity);
    friend void *df::allocator_fn<viewscreen_layer_world_gen_paramst>(void*,const void*);
  };
}
#endif
