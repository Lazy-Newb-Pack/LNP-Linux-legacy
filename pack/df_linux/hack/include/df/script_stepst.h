/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_SCRIPT_STEPST_H
#define DF_SCRIPT_STEPST_H
namespace df {
  struct meeting_context;
  struct DFHACK_EXPORT script_stepst : virtual_class {
    int32_t next_step_idx;
    static virtual_identity _identity;
  public:
    virtual bool setNextStep(int32_t) { return bool(); /*0*/ };
    virtual int32_t execute(df::meeting_context*) { return int32_t(); /*1*/ };
    virtual int32_t skip(df::meeting_context*) { return int32_t(); /*2*/ };
    virtual ~script_stepst() { /*3*/ };
  protected:
    script_stepst(virtual_identity *_id = &script_stepst::_identity);
    friend void *df::allocator_fn<script_stepst>(void*,const void*);
  };
}
#endif
