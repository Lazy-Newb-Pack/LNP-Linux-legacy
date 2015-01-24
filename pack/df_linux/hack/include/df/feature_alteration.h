/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_FEATURE_ALTERATION_H
#define DF_FEATURE_ALTERATION_H
#ifndef DF_FEATURE_ALTERATION_TYPE_H
#include "feature_alteration_type.h"
#endif
namespace df {
  struct file_compressorst;
  struct DFHACK_EXPORT feature_alteration : virtual_class {
    static virtual_identity _identity;
  public:
    virtual df::feature_alteration_type getType() { return df::feature_alteration_type(); /*0*/ };
    virtual void write_file(df::file_compressorst*) { /*1*/ };
    virtual void read_file(df::file_compressorst*, int32_t) { /*2*/ };
    virtual ~feature_alteration() { /*3*/ };
  protected:
    feature_alteration(virtual_identity *_id = &feature_alteration::_identity);
    friend void *df::allocator_fn<feature_alteration>(void*,const void*);
  };
}
#endif
