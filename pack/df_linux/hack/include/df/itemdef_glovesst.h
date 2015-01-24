/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_ITEMDEF_GLOVESST_H
#define DF_ITEMDEF_GLOVESST_H
#ifndef DF_ARMOR_PROPERTIES_H
#include "armor_properties.h"
#endif
#ifndef DF_GLOVES_FLAGS_H
#include "gloves_flags.h"
#endif
#ifndef DF_ITEMDEF_H
#include "itemdef.h"
#endif
namespace df {
  struct DFHACK_EXPORT itemdef_glovesst : itemdef {
    std::string name;
    std::string name_plural;
    std::string adjective; /*!< v0.40.01 */
    int32_t value;
    int8_t armorlevel;
    int16_t upstep;
    BitArray<df::gloves_flags> flags;
    int32_t material_size;
    df::armor_properties props;
    static virtual_identity _identity;
    static std::vector<itemdef_glovesst*> &get_vector();
    static itemdef_glovesst *find(int id);
  protected:
    itemdef_glovesst(virtual_identity *_id = &itemdef_glovesst::_identity);
    friend void *df::allocator_fn<itemdef_glovesst>(void*,const void*);
  };
}
#endif
