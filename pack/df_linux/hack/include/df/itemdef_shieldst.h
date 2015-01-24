/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_ITEMDEF_SHIELDST_H
#define DF_ITEMDEF_SHIELDST_H
#ifndef DF_ITEMDEF_H
#include "itemdef.h"
#endif
namespace df {
  struct DFHACK_EXPORT itemdef_shieldst : itemdef {
    std::string name;
    std::string name_plural;
    std::string adjective; /*!< v0.40.01 */
    int32_t value;
    int32_t blockchance;
    int8_t armorlevel;
    int16_t upstep;
    int32_t material_size;
    static virtual_identity _identity;
    static std::vector<itemdef_shieldst*> &get_vector();
    static itemdef_shieldst *find(int id);
  protected:
    itemdef_shieldst(virtual_identity *_id = &itemdef_shieldst::_identity);
    friend void *df::allocator_fn<itemdef_shieldst>(void*,const void*);
  };
}
#endif
