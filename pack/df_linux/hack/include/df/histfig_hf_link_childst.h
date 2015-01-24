/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_HISTFIG_HF_LINK_CHILDST_H
#define DF_HISTFIG_HF_LINK_CHILDST_H
#ifndef DF_HISTFIG_HF_LINK_H
#include "histfig_hf_link.h"
#endif
namespace df {
  struct DFHACK_EXPORT histfig_hf_link_childst : histfig_hf_link {
    static virtual_identity _identity;
  protected:
    histfig_hf_link_childst(virtual_identity *_id = &histfig_hf_link_childst::_identity);
    friend void *df::allocator_fn<histfig_hf_link_childst>(void*,const void*);
  };
}
#endif
