/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_ITEMIMPROVEMENT_SEWN_IMAGEST_H
#define DF_ITEMIMPROVEMENT_SEWN_IMAGEST_H
#ifndef DF_ART_IMAGE_REF_H
#include "art_image_ref.h"
#endif
#ifndef DF_DYE_INFO_H
#include "dye_info.h"
#endif
#ifndef DF_ITEMIMPROVEMENT_H
#include "itemimprovement.h"
#endif
namespace df {
  struct DFHACK_EXPORT itemimprovement_sewn_imagest : itemimprovement {
    df::art_image_ref image;
    struct DFHACK_EXPORT T_cloth {
      int32_t unit_id;
      int16_t quality;
      int16_t anon_1;
      static struct_identity _identity;
    public:
      T_cloth();
    };
    T_cloth cloth;
    df::dye_info dye;
    static virtual_identity _identity;
  protected:
    itemimprovement_sewn_imagest(virtual_identity *_id = &itemimprovement_sewn_imagest::_identity);
    friend void *df::allocator_fn<itemimprovement_sewn_imagest>(void*,const void*);
  };
}
#endif
