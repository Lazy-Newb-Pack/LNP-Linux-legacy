/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_SITE_REALIZATION_BUILDING_INFO_TRENCHESST_H
#define DF_SITE_REALIZATION_BUILDING_INFO_TRENCHESST_H
#ifndef DF_SITE_REALIZATION_BUILDING_INFOST_H
#include "site_realization_building_infost.h"
#endif
namespace df {
  struct DFHACK_EXPORT site_realization_building_info_trenchesst : site_realization_building_infost {
    int32_t unk_4;
    struct DFHACK_EXPORT T_unk_8 {
      int32_t anon_1;
      int32_t anon_2;
      int32_t anon_3;
      int32_t anon_4;
      static struct_identity _identity;
    public:
      T_unk_8();
    };
    T_unk_8 unk_8[4];
    static virtual_identity _identity;
  protected:
    site_realization_building_info_trenchesst(virtual_identity *_id = &site_realization_building_info_trenchesst::_identity);
    friend void *df::allocator_fn<site_realization_building_info_trenchesst>(void*,const void*);
  };
}
#endif
