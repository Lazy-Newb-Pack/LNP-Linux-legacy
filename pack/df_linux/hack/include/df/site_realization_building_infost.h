/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_SITE_REALIZATION_BUILDING_INFOST_H
#define DF_SITE_REALIZATION_BUILDING_INFOST_H
#ifndef DF_SITE_REALIZATION_BUILDING_TYPE_H
#include "site_realization_building_type.h"
#endif
namespace df {
  struct file_compressorst;
  struct DFHACK_EXPORT site_realization_building_infost : virtual_class {
    static virtual_identity _identity;
  public:
    virtual df::site_realization_building_type getType() { return df::site_realization_building_type(); /*0*/ };
    virtual void write_file(df::file_compressorst*) { /*1*/ };
    virtual void read_file(df::file_compressorst*, int32_t) { /*2*/ };
    virtual ~site_realization_building_infost() { /*3*/ };
  protected:
    site_realization_building_infost(virtual_identity *_id = &site_realization_building_infost::_identity);
    friend void *df::allocator_fn<site_realization_building_infost>(void*,const void*);
  };
}
#endif
