/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_ITEMDEF_SHOESST_H
#define DF_ITEMDEF_SHOESST_H
#ifndef DF_ARMOR_PROPERTIES_H
#include "armor_properties.h"
#endif
#ifndef DF_ITEMDEF_H
#include "itemdef.h"
#endif
#ifndef DF_SHOES_FLAGS_H
#include "shoes_flags.h"
#endif
namespace df {
  struct DFHACK_EXPORT itemdef_shoesst : itemdef {
    std::string name;
    std::string name_plural;
    std::string adjective; /*!< v0.40.01 */
    int32_t value;
    int8_t armorlevel;
    int16_t upstep;
    BitArray<df::shoes_flags> flags;
    int32_t material_size;
    df::armor_properties props;
    static virtual_identity _identity;
    static std::vector<itemdef_shoesst*> &get_vector();
    static itemdef_shoesst *find(int id);
  protected:
    itemdef_shoesst(virtual_identity *_id = &itemdef_shoesst::_identity);
    friend void *df::allocator_fn<itemdef_shoesst>(void*,const void*);
  };
}
#endif
