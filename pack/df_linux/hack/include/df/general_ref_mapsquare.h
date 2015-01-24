/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_GENERAL_REF_MAPSQUARE_H
#define DF_GENERAL_REF_MAPSQUARE_H
#ifndef DF_GENERAL_REF_H
#include "general_ref.h"
#endif
#ifndef DF_TILETYPE_H
#include "tiletype.h"
#endif
namespace df {
  struct DFHACK_EXPORT general_ref_mapsquare : general_ref {
    df::tiletype tiletype;
    int16_t mat_type;
    int32_t mat_index;
    static virtual_identity _identity;
  protected:
    general_ref_mapsquare(virtual_identity *_id = &general_ref_mapsquare::_identity);
    friend void *df::allocator_fn<general_ref_mapsquare>(void*,const void*);
  };
}
#endif
