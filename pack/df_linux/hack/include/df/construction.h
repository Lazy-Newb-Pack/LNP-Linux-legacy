/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_CONSTRUCTION_H
#define DF_CONSTRUCTION_H
#ifndef DF_CONSTRUCTION_FLAGS_H
#include "construction_flags.h"
#endif
#ifndef DF_COORD_H
#include "coord.h"
#endif
#ifndef DF_ITEM_TYPE_H
#include "item_type.h"
#endif
#ifndef DF_TILETYPE_H
#include "tiletype.h"
#endif
namespace df {
  struct DFHACK_EXPORT construction {
    df::coord pos;
    df::item_type item_type;
    int16_t item_subtype;
    int16_t mat_type;
    int32_t mat_index;
    df::construction_flags flags;
    df::tiletype original_tile;
    static struct_identity _identity;
    typedef construction* key_pointer_type;
    typedef df::coord key_field_type;
    static int binsearch_index(const std::vector<construction*> &vec, key_field_type key, bool exact = true);
    static int binsearch_index(const std::vector<construction*> &vec, key_pointer_type key, bool exact = true);
    static std::vector<construction*> &get_vector();
    static construction *find(key_field_type id);
  public:
    construction();
  };
}
#endif
