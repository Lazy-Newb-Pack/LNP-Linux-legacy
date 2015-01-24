/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_BUILDING_DEF_H
#define DF_BUILDING_DEF_H
#ifndef DF_BUILDING_TYPE_H
#include "building_type.h"
#endif
#ifndef DF_UNIT_LABOR_H
#include "unit_labor.h"
#endif
namespace df {
  struct building_def_item;
  struct DFHACK_EXPORT building_def : virtual_class {
    std::string code;
    int32_t id;
    std::string name;
    df::building_type building_type;
    int32_t building_subtype;
    int16_t name_color[3];
    uint8_t tile[4][31][31];
    uint8_t tile_color[3][4][31][31];
    uint8_t tile_block[31][31];
    int32_t build_key;
    bool needs_magma;
    std::vector<df::building_def_item* > build_items;
    int32_t dim_x;
    int32_t dim_y;
    int32_t workloc_x;
    int32_t workloc_y;
    std::vector<df::unit_labor > build_labors;
    std::string labor_description;
    int32_t build_stages;
    static virtual_identity _identity;
    typedef building_def* key_pointer_type;
    typedef int32_t key_field_type;
    static int binsearch_index(const std::vector<building_def*> &vec, key_field_type key, bool exact = true);
    static int binsearch_index(const std::vector<building_def*> &vec, key_pointer_type key, bool exact = true);
    static std::vector<building_def*> &get_vector();
    static building_def *find(key_field_type id);
  public:
    virtual void parseRaws(void*, void*, void*, void*) { /*0*/ };
    virtual void categorize() { /*1*/ }; /*!< add to world.raws.buildings.whatever */
    virtual void finalize() { /*2*/ };
    virtual ~building_def() { /*3*/ };
  protected:
    building_def(virtual_identity *_id = &building_def::_identity);
    friend void *df::allocator_fn<building_def>(void*,const void*);
  };
}
#endif
