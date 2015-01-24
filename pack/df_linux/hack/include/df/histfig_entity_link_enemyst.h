/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_HISTFIG_ENTITY_LINK_ENEMYST_H
#define DF_HISTFIG_ENTITY_LINK_ENEMYST_H
#ifndef DF_HISTFIG_ENTITY_LINK_H
#include "histfig_entity_link.h"
#endif
namespace df {
  struct DFHACK_EXPORT histfig_entity_link_enemyst : histfig_entity_link {
    static virtual_identity _identity;
  protected:
    histfig_entity_link_enemyst(virtual_identity *_id = &histfig_entity_link_enemyst::_identity);
    friend void *df::allocator_fn<histfig_entity_link_enemyst>(void*,const void*);
  };
}
#endif
