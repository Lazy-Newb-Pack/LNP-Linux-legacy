/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_ITEMDEF_ARMORST_H
#define DF_ITEMDEF_ARMORST_H
#ifndef DF_ARMOR_FLAGS_H
#include "armor_flags.h"
#endif
#ifndef DF_ARMOR_PROPERTIES_H
#include "armor_properties.h"
#endif
#ifndef DF_ITEMDEF_H
#include "itemdef.h"
#endif
namespace df {
  struct DFHACK_EXPORT itemdef_armorst : itemdef {
    std::string name;
    std::string name_plural;
    std::string name_preplural;
    std::string material_placeholder;
    std::string adjective; /*!< v0.40.01 */
    int32_t value;
    int8_t armorlevel;
    int16_t ubstep;
    int16_t lbstep;
    int32_t material_size;
    df::armor_properties props;
    BitArray<df::armor_flags> flags;
    static virtual_identity _identity;
    static std::vector<itemdef_armorst*> &get_vector();
    static itemdef_armorst *find(int id);
  protected:
    itemdef_armorst(virtual_identity *_id = &itemdef_armorst::_identity);
    friend void *df::allocator_fn<itemdef_armorst>(void*,const void*);
  };
}
#endif
