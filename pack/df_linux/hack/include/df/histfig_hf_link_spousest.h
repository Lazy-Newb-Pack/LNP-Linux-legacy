/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_HISTFIG_HF_LINK_SPOUSEST_H
#define DF_HISTFIG_HF_LINK_SPOUSEST_H
#ifndef DF_HISTFIG_HF_LINK_H
#include "histfig_hf_link.h"
#endif
namespace df {
  struct DFHACK_EXPORT histfig_hf_link_spousest : histfig_hf_link {
    static virtual_identity _identity;
  protected:
    histfig_hf_link_spousest(virtual_identity *_id = &histfig_hf_link_spousest::_identity);
    friend void *df::allocator_fn<histfig_hf_link_spousest>(void*,const void*);
  };
}
#endif
