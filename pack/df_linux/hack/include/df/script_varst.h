/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_SCRIPT_VARST_H
#define DF_SCRIPT_VARST_H
namespace df {
  struct active_script_varst;
  struct DFHACK_EXPORT script_varst : virtual_class {
    std::string name;
    static virtual_identity _identity;
  public:
    virtual df::active_script_varst* instantiate() { return 0; /*0*/ };
  protected:
    script_varst(virtual_identity *_id = &script_varst::_identity);
    friend void *df::allocator_fn<script_varst>(void*,const void*);
  };
}
#endif
