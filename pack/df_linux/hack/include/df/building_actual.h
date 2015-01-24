/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_BUILDING_ACTUAL_H
#define DF_BUILDING_ACTUAL_H
#ifndef DF_BUILDING_H
#include "building.h"
#endif
namespace df {
  struct building_design;
  struct item;
  struct DFHACK_EXPORT building_actual : building {
    int16_t construction_stage; /*!< 0 not started, then 1 or 3 max depending on type */
    struct DFHACK_EXPORT T_contained_items {
      df::item* item;
      int16_t use_mode;
      static struct_identity _identity;
    public:
      T_contained_items();
    };
    std::vector<T_contained_items* > contained_items;
    df::building_design* design;
    static virtual_identity _identity;
  public:
    virtual bool isDestroyedByItemRemoval() { return bool(); /*95*/ };
  protected:
    virtual bool anon_vmethod_96() { return bool(); /*96*/ }; /*!< default false */
    virtual bool anon_vmethod_97() { return bool(); /*97*/ }; /*!< default false */
  protected:
    building_actual(virtual_identity *_id = &building_actual::_identity);
    friend void *df::allocator_fn<building_actual>(void*,const void*);
  };
}
#endif
