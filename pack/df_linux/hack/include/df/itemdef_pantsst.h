/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_ITEMDEF_PANTSST_H
#define DF_ITEMDEF_PANTSST_H
#ifndef DF_ARMOR_PROPERTIES_H
#include "armor_properties.h"
#endif
#ifndef DF_ITEMDEF_H
#include "itemdef.h"
#endif
#ifndef DF_PANTS_FLAGS_H
#include "pants_flags.h"
#endif
namespace df {
  struct DFHACK_EXPORT itemdef_pantsst : itemdef {
    std::string name;
    std::string name_plural;
    std::string name_preplural;
    std::string material_placeholder;
    std::string adjective; /*!< v0.40.01 */
    int32_t value;
    int8_t armorlevel;
    BitArray<df::pants_flags> flags;
    int32_t material_size;
    int16_t lbstep;
    df::armor_properties props;
    static virtual_identity _identity;
    static std::vector<itemdef_pantsst*> &get_vector();
    static itemdef_pantsst *find(int id);
  protected:
    itemdef_pantsst(virtual_identity *_id = &itemdef_pantsst::_identity);
    friend void *df::allocator_fn<itemdef_pantsst>(void*,const void*);
  };
}
#endif
