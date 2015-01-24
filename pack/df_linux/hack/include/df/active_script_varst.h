/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_ACTIVE_SCRIPT_VARST_H
#define DF_ACTIVE_SCRIPT_VARST_H
namespace df {
  struct file_compressorst;
  struct meeting_variable;
  struct specific_ref;
  struct DFHACK_EXPORT active_script_varst : virtual_class {
    std::string name;
    static virtual_identity _identity;
  public:
    virtual void setColor() { /*0*/ };
    virtual void formatString(char*, std::string*) { /*1*/ };
    virtual void getValue(int32_t*, df::specific_ref*) { /*2*/ };
    virtual void setValue(df::meeting_variable*) { /*3*/ };
    virtual void removeUnit(df::specific_ref*) { /*4*/ };
    virtual void write_file(df::file_compressorst*) { /*5*/ };
    virtual void read_file(df::file_compressorst*, int32_t) { /*6*/ };
  protected:
    active_script_varst(virtual_identity *_id = &active_script_varst::_identity);
    friend void *df::allocator_fn<active_script_varst>(void*,const void*);
  };
}
#endif
