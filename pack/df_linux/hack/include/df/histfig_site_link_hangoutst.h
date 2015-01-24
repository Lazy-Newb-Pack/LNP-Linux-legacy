/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_HISTFIG_SITE_LINK_HANGOUTST_H
#define DF_HISTFIG_SITE_LINK_HANGOUTST_H
#ifndef DF_HISTFIG_SITE_LINK_H
#include "histfig_site_link.h"
#endif
namespace df {
  struct DFHACK_EXPORT histfig_site_link_hangoutst : histfig_site_link {
    static virtual_identity _identity;
  protected:
    histfig_site_link_hangoutst(virtual_identity *_id = &histfig_site_link_hangoutst::_identity);
    friend void *df::allocator_fn<histfig_site_link_hangoutst>(void*,const void*);
  };
}
#endif
