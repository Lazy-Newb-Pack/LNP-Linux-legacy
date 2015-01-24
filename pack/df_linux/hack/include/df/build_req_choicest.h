/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_BUILD_REQ_CHOICEST_H
#define DF_BUILD_REQ_CHOICEST_H
#ifndef DF_BUILD_REQ_CHOICE_TYPE_H
#include "build_req_choice_type.h"
#endif
namespace df {
  /**
   * One choice in the build item selector.
   */
  struct DFHACK_EXPORT build_req_choicest : virtual_class {
    int32_t distance;
    static virtual_identity _identity;
  public:
    virtual df::build_req_choice_type getType() { return df::build_req_choice_type(); /*0*/ };
    virtual void getName(std::string*) { /*1*/ };
  protected:
    virtual int32_t anon_vmethod_2() { return int32_t(); /*2*/ };
  public:
    virtual bool isCandidate(int32_t) { return bool(); /*3*/ };
  protected:
    virtual bool anon_vmethod_4() { return bool(); /*4*/ };
  public:
    virtual int32_t getUsedCount() { return int32_t(); /*5*/ };
    virtual int32_t getNumCandidates() { return int32_t(); /*6*/ };
  protected:
    virtual void anon_vmethod_7() { /*7*/ };
  protected:
    build_req_choicest(virtual_identity *_id = &build_req_choicest::_identity);
    friend void *df::allocator_fn<build_req_choicest>(void*,const void*);
  };
}
#endif
