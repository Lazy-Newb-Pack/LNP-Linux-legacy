/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_INTERACTION_TARGET_H
#define DF_INTERACTION_TARGET_H
#ifndef DF_INTERACTION_SOURCE_TYPE_H
#include "interaction_source_type.h"
#endif
#ifndef DF_INTERACTION_TARGET_LOCATION_TYPE_H
#include "interaction_target_location_type.h"
#endif
namespace df {
  struct DFHACK_EXPORT interaction_target : virtual_class {
    int32_t index;
    std::string anon_1;
    std::string manual_input;
    df::interaction_target_location_type location;
    static virtual_identity _identity;
  public:
    virtual df::interaction_source_type getType() { return df::interaction_source_type(); /*0*/ };
    virtual void write_file(void*) { /*1*/ };
    virtual void read_file(void*, int32_t) { /*2*/ };
    virtual ~interaction_target() { /*3*/ };
    virtual void parseRaws(int32_t, int32_t, int32_t, int32_t, int32_t) { /*4*/ };
  protected:
    virtual void anon_vmethod_5(int32_t) { /*5*/ };
    virtual bool anon_vmethod_6(int32_t, int32_t) { return bool(); /*6*/ };
    virtual bool anon_vmethod_7(int32_t, int32_t) { return bool(); /*7*/ };
    virtual bool anon_vmethod_8(int32_t, int32_t) { return bool(); /*8*/ };
    virtual bool anon_vmethod_9(int32_t, int32_t) { return bool(); /*9*/ };
  protected:
    interaction_target(virtual_identity *_id = &interaction_target::_identity);
    friend void *df::allocator_fn<interaction_target>(void*,const void*);
  };
}
#endif
