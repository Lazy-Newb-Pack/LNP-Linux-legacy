/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_WORLD_CONSTRUCTION_H
#define DF_WORLD_CONSTRUCTION_H
#ifndef DF_COORD2D_PATH_H
#include "coord2d_path.h"
#endif
#ifndef DF_WORLD_CONSTRUCTION_TYPE_H
#include "world_construction_type.h"
#endif
namespace df {
  struct file_compressorst;
  struct language_name;
  struct world_construction_square;
  struct DFHACK_EXPORT world_construction : virtual_class {
    int32_t id;
    std::vector<df::world_construction_square* > square_obj;
    df::coord2d_path square_pos;
    static virtual_identity _identity;
    typedef world_construction* key_pointer_type;
    typedef int32_t key_field_type;
    static int binsearch_index(const std::vector<world_construction*> &vec, key_field_type key, bool exact = true);
    static int binsearch_index(const std::vector<world_construction*> &vec, key_pointer_type key, bool exact = true);
    static std::vector<world_construction*> &get_vector();
    static world_construction *find(key_field_type id);
  public:
    virtual df::world_construction_type getType() { return df::world_construction_type(); /*0*/ };
    virtual df::language_name* getName() { return 0; /*1*/ };
    virtual void write_file(df::file_compressorst*) { /*2*/ };
    virtual void read_file(df::file_compressorst*, int32_t) { /*3*/ };
    virtual ~world_construction() { /*4*/ };
  protected:
    world_construction(virtual_identity *_id = &world_construction::_identity);
    friend void *df::allocator_fn<world_construction>(void*,const void*);
  };
}
#endif
