/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_SPECIFIC_REF_H
#define DF_SPECIFIC_REF_H
#ifndef DF_SPECIFIC_REF_TYPE_H
#include "specific_ref_type.h"
#endif
namespace df {
  struct activity_info;
  struct effect_info;
  struct job;
  struct unit;
  struct unit_item_wrestle;
  struct vermin;
  struct viewscreen;
  struct DFHACK_EXPORT specific_ref {
    df::specific_ref_type type;
    union DFHACK_EXPORT {
      void* object;
      df::unit* unit;
      df::activity_info* activity;
      df::viewscreen* screen;
      df::vermin* vermin;
      df::effect_info* effect;
      df::job* job;
    };
    union DFHACK_EXPORT T_arg2 {
      df::unit_item_wrestle* wrestle;
    };
    T_arg2 arg2;
    static struct_identity _identity;
  public:
    specific_ref();
  };
  template<> struct DFHACK_EXPORT identity_traits<specific_ref::T_arg2> {
    static struct_identity identity;
    static struct_identity *get() { return &identity; }
  };
}
#endif
