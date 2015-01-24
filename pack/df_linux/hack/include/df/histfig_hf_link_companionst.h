/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_HISTFIG_HF_LINK_COMPANIONST_H
#define DF_HISTFIG_HF_LINK_COMPANIONST_H
#ifndef DF_HISTFIG_HF_LINK_H
#include "histfig_hf_link.h"
#endif
namespace df {
  struct DFHACK_EXPORT histfig_hf_link_companionst : histfig_hf_link {
    int32_t anon_1;
    int32_t anon_2;
    static virtual_identity _identity;
  protected:
    histfig_hf_link_companionst(virtual_identity *_id = &histfig_hf_link_companionst::_identity);
    friend void *df::allocator_fn<histfig_hf_link_companionst>(void*,const void*);
  };
}
#endif
