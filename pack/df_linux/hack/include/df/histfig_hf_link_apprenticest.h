/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_HISTFIG_HF_LINK_APPRENTICEST_H
#define DF_HISTFIG_HF_LINK_APPRENTICEST_H
#ifndef DF_HISTFIG_HF_LINK_H
#include "histfig_hf_link.h"
#endif
namespace df {
  struct DFHACK_EXPORT histfig_hf_link_apprenticest : histfig_hf_link {
    static virtual_identity _identity;
  protected:
    histfig_hf_link_apprenticest(virtual_identity *_id = &histfig_hf_link_apprenticest::_identity);
    friend void *df::allocator_fn<histfig_hf_link_apprenticest>(void*,const void*);
  };
}
#endif
