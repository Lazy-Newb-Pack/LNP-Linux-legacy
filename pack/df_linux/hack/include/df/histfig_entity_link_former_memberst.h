/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_HISTFIG_ENTITY_LINK_FORMER_MEMBERST_H
#define DF_HISTFIG_ENTITY_LINK_FORMER_MEMBERST_H
#ifndef DF_HISTFIG_ENTITY_LINK_H
#include "histfig_entity_link.h"
#endif
namespace df {
  struct DFHACK_EXPORT histfig_entity_link_former_memberst : histfig_entity_link {
    static virtual_identity _identity;
  protected:
    histfig_entity_link_former_memberst(virtual_identity *_id = &histfig_entity_link_former_memberst::_identity);
    friend void *df::allocator_fn<histfig_entity_link_former_memberst>(void*,const void*);
  };
}
#endif
