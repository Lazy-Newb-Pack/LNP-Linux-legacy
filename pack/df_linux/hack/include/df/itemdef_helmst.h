/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_ITEMDEF_HELMST_H
#define DF_ITEMDEF_HELMST_H
#ifndef DF_ARMOR_PROPERTIES_H
#include "armor_properties.h"
#endif
#ifndef DF_HELM_FLAGS_H
#include "helm_flags.h"
#endif
#ifndef DF_ITEMDEF_H
#include "itemdef.h"
#endif
namespace df {
  struct DFHACK_EXPORT itemdef_helmst : itemdef {
    std::string name;
    std::string name_plural;
    std::string adjective; /*!< v0.40.01 */
    int32_t value;
    int8_t armorlevel;
    BitArray<df::helm_flags> flags;
    int32_t material_size;
    df::armor_properties props;
    static virtual_identity _identity;
    static std::vector<itemdef_helmst*> &get_vector();
    static itemdef_helmst *find(int id);
  protected:
    itemdef_helmst(virtual_identity *_id = &itemdef_helmst::_identity);
    friend void *df::allocator_fn<itemdef_helmst>(void*,const void*);
  };
}
#endif
