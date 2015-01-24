/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_HISTFIG_ENTITY_LINK_POSITION_CLAIMST_H
#define DF_HISTFIG_ENTITY_LINK_POSITION_CLAIMST_H
#ifndef DF_HISTFIG_ENTITY_LINK_H
#include "histfig_entity_link.h"
#endif
namespace df {
  struct DFHACK_EXPORT histfig_entity_link_position_claimst : histfig_entity_link {
    int32_t assignment_id;
    int32_t start_year;
    static virtual_identity _identity;
  protected:
    histfig_entity_link_position_claimst(virtual_identity *_id = &histfig_entity_link_position_claimst::_identity);
    friend void *df::allocator_fn<histfig_entity_link_position_claimst>(void*,const void*);
  };
}
#endif
