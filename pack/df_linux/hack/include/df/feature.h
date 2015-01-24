/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_FEATURE_H
#define DF_FEATURE_H
#ifndef DF_COORD2D_PATH_H
#include "coord2d_path.h"
#endif
#ifndef DF_FEATURE_TYPE_H
#include "feature_type.h"
#endif
namespace df {
  struct file_compressorst;
  struct world_population;
  struct DFHACK_EXPORT feature : virtual_class {
    std::vector<df::world_population* > population;
    int32_t anon_1;
    int16_t anon_2;
    df::coord2d_path embark_pos;
    std::vector<int16_t > min_map_z;
    std::vector<int16_t > max_map_z;
    static virtual_identity _identity;
  public:
    virtual df::feature_type getType() { return df::feature_type(); /*0*/ };
    virtual void write_file(df::file_compressorst*) { /*1*/ };
    virtual void read_file(df::file_compressorst*, int32_t) { /*2*/ };
  protected:
    virtual void anon_vmethod_3(int32_t, int32_t, int32_t) { /*3*/ };
    virtual void anon_vmethod_4() { /*4*/ };
  public:
    virtual ~feature() { /*5*/ };
  protected:
    feature(virtual_identity *_id = &feature::_identity);
    friend void *df::allocator_fn<feature>(void*,const void*);
  };
}
#endif
