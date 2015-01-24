/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_RESOURCE_ALLOTMENT_SPECIFIER_H
#define DF_RESOURCE_ALLOTMENT_SPECIFIER_H
#ifndef DF_RESOURCE_ALLOTMENT_SPECIFIER_TYPE_H
#include "resource_allotment_specifier_type.h"
#endif
namespace df {
  struct file_compressorst;
  struct DFHACK_EXPORT resource_allotment_specifier : virtual_class {
    int32_t anon_1;
    int32_t anon_2; /*!< v0.34.01-04 */
    int32_t anon_3; /*!< v0.34.01-04 */
    static virtual_identity _identity;
  public:
    virtual df::resource_allotment_specifier_type getType() { return df::resource_allotment_specifier_type(); /*0*/ };
    virtual void write_file(df::file_compressorst*) { /*1*/ };
    virtual void read_file(df::file_compressorst*, int32_t) { /*2*/ };
    virtual ~resource_allotment_specifier() { /*3*/ };
  protected:
    resource_allotment_specifier(virtual_identity *_id = &resource_allotment_specifier::_identity);
    friend void *df::allocator_fn<resource_allotment_specifier>(void*,const void*);
  };
}
#endif
