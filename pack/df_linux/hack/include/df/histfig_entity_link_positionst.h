/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_HISTFIG_ENTITY_LINK_POSITIONST_H
#define DF_HISTFIG_ENTITY_LINK_POSITIONST_H
#ifndef DF_HISTFIG_ENTITY_LINK_H
#include "histfig_entity_link.h"
#endif
namespace df {
  struct DFHACK_EXPORT histfig_entity_link_positionst : histfig_entity_link {
    int32_t assignment_id;
    int32_t start_year;
    static virtual_identity _identity;
  protected:
    histfig_entity_link_positionst(virtual_identity *_id = &histfig_entity_link_positionst::_identity);
    friend void *df::allocator_fn<histfig_entity_link_positionst>(void*,const void*);
  };
}
#endif
