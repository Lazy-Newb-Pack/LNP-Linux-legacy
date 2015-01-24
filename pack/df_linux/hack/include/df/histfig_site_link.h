/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_HISTFIG_SITE_LINK_H
#define DF_HISTFIG_SITE_LINK_H
#ifndef DF_HISTFIG_SITE_LINK_TYPE_H
#include "histfig_site_link_type.h"
#endif
namespace df {
  struct file_compressorst;
  struct DFHACK_EXPORT histfig_site_link : virtual_class {
    int32_t site;
    int32_t sub_id; /*!< from XML */
    int32_t entity;
    static virtual_identity _identity;
  public:
    virtual df::histfig_site_link_type getType() { return df::histfig_site_link_type(); /*0*/ };
    virtual ~histfig_site_link() { /*1*/ };
    virtual void write_file(df::file_compressorst*) { /*2*/ };
    virtual void read_file(df::file_compressorst*, int32_t) { /*3*/ };
  protected:
    virtual void anon_vmethod_4(void*, void*) { /*4*/ }; /*!< generate_xml */
  protected:
    histfig_site_link(virtual_identity *_id = &histfig_site_link::_identity);
    friend void *df::allocator_fn<histfig_site_link>(void*,const void*);
  };
}
#endif
