/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_FLOW_GUIDE_H
#define DF_FLOW_GUIDE_H
#ifndef DF_FLOW_GUIDE_TYPE_H
#include "flow_guide_type.h"
#endif
namespace df {
  struct file_compressorst;
  struct flow_info;
  struct DFHACK_EXPORT flow_guide : virtual_class {
    int32_t id;
    int8_t unk_8;
    static virtual_identity _identity;
    typedef flow_guide* key_pointer_type;
    typedef int32_t key_field_type;
    static int binsearch_index(const std::vector<flow_guide*> &vec, key_field_type key, bool exact = true);
    static int binsearch_index(const std::vector<flow_guide*> &vec, key_pointer_type key, bool exact = true);
    static std::vector<flow_guide*> &get_vector();
    static flow_guide *find(key_field_type id);
  public:
    virtual df::flow_guide_type getType() { return df::flow_guide_type(); /*0*/ };
  protected:
    virtual void anon_vmethod_1(int16_t, int16_t, int16_t) { /*1*/ };
  public:
    virtual void write_file(df::file_compressorst*) { /*2*/ };
    virtual void read_file(df::file_compressorst*, int32_t) { /*3*/ };
  protected:
    virtual void anon_vmethod_4(df::flow_info*) { /*4*/ };
  public:
    virtual ~flow_guide() { /*5*/ };
  protected:
    flow_guide(virtual_identity *_id = &flow_guide::_identity);
    friend void *df::allocator_fn<flow_guide>(void*,const void*);
  };
}
#endif
