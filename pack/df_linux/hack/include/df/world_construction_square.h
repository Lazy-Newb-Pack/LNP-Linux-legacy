/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_WORLD_CONSTRUCTION_SQUARE_H
#define DF_WORLD_CONSTRUCTION_SQUARE_H
#ifndef DF_COORD2D_H
#include "coord2d.h"
#endif
#ifndef DF_WORLD_CONSTRUCTION_TYPE_H
#include "world_construction_type.h"
#endif
namespace df {
  struct file_compressorst;
  struct DFHACK_EXPORT world_construction_square : virtual_class {
    df::coord2d region_pos;
    int32_t construction_id;
    std::vector<int16_t > embark_x;
    std::vector<int16_t > embark_y;
    std::vector<int16_t > embark_unk;
    std::vector<int16_t > embark_z;
    static virtual_identity _identity;
  public:
    virtual df::world_construction_type getType() { return df::world_construction_type(); /*0*/ };
    virtual void write_file(df::file_compressorst*) { /*1*/ };
    virtual void read_file(df::file_compressorst*, int32_t) { /*2*/ };
    virtual ~world_construction_square() { /*3*/ };
  protected:
    world_construction_square(virtual_identity *_id = &world_construction_square::_identity);
    friend void *df::allocator_fn<world_construction_square>(void*,const void*);
  };
}
#endif
