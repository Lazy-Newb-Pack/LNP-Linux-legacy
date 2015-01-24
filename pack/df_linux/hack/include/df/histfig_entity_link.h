/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_HISTFIG_ENTITY_LINK_H
#define DF_HISTFIG_ENTITY_LINK_H
#ifndef DF_HISTFIG_ENTITY_LINK_TYPE_H
#include "histfig_entity_link_type.h"
#endif
namespace df {
  struct file_compressorst;
  struct DFHACK_EXPORT histfig_entity_link : virtual_class {
    int32_t entity_id;
    int16_t link_strength;
    static virtual_identity _identity;
  public:
    virtual df::histfig_entity_link_type getType() { return df::histfig_entity_link_type(); /*0*/ };
    virtual ~histfig_entity_link() { /*1*/ };
    virtual void write_file(df::file_compressorst*) { /*2*/ };
    virtual void read_file(df::file_compressorst*, int32_t) { /*3*/ };
  protected:
    virtual void anon_vmethod_4() { /*4*/ };
    virtual void anon_vmethod_5() { /*5*/ };
  public:
    virtual int32_t getPosition() { return int32_t(); /*6*/ };
    virtual int32_t getPositionStartYear() { return int32_t(); /*7*/ };
    virtual int32_t getPositionEndYear() { return int32_t(); /*8*/ };
    virtual void generate_xml(void*, void*) { /*9*/ };
  protected:
    histfig_entity_link(virtual_identity *_id = &histfig_entity_link::_identity);
    friend void *df::allocator_fn<histfig_entity_link>(void*,const void*);
  };
}
#endif
