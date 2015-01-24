/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_INTERACTION_SOURCE_H
#define DF_INTERACTION_SOURCE_H
#ifndef DF_INTERACTION_SOURCE_TYPE_H
#include "interaction_source_type.h"
#endif
namespace df {
  struct DFHACK_EXPORT interaction_source : virtual_class {
    int32_t anon_1;
    int32_t frequency;
    std::string name;
    std::string hist_string_1;
    std::string hist_string_2;
    static virtual_identity _identity;
  public:
    virtual df::interaction_source_type getType() { return df::interaction_source_type(); /*0*/ };
    virtual void write_file(void*) { /*1*/ };
    virtual void read_file(void*, int32_t) { /*2*/ };
    virtual ~interaction_source() { /*3*/ };
    virtual void parseRaws(int32_t, int32_t, int32_t, int32_t, int32_t) { /*4*/ };
  protected:
    virtual void anon_vmethod_5(int32_t, int32_t) { /*5*/ };
    virtual bool anon_vmethod_6(int32_t) { return bool(); /*6*/ };
    virtual bool anon_vmethod_7(int32_t) { return bool(); /*7*/ };
  protected:
    interaction_source(virtual_identity *_id = &interaction_source::_identity);
    friend void *df::allocator_fn<interaction_source>(void*,const void*);
  };
}
#endif
