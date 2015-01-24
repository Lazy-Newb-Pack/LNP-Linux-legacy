/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_HISTFIG_HF_LINK_FATHERST_H
#define DF_HISTFIG_HF_LINK_FATHERST_H
#ifndef DF_HISTFIG_HF_LINK_H
#include "histfig_hf_link.h"
#endif
namespace df {
  struct DFHACK_EXPORT histfig_hf_link_fatherst : histfig_hf_link {
    static virtual_identity _identity;
  protected:
    histfig_hf_link_fatherst(virtual_identity *_id = &histfig_hf_link_fatherst::_identity);
    friend void *df::allocator_fn<histfig_hf_link_fatherst>(void*,const void*);
  };
}
#endif
