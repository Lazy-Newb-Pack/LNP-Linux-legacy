/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_ENTITY_UNIFORM_H
#define DF_ENTITY_UNIFORM_H
#ifndef DF_ITEM_TYPE_H
#include "item_type.h"
#endif
#ifndef DF_UNIFORM_FLAGS_H
#include "uniform_flags.h"
#endif
namespace df {
  struct entity_uniform_item;
  struct DFHACK_EXPORT entity_uniform {
    int32_t id;
    int16_t unk_4;
    std::vector<df::item_type > uniform_item_types[7];
    std::vector<int16_t > uniform_item_subtypes[7];
    std::vector<df::entity_uniform_item* > uniform_item_info[7];
    std::string name;
    df::uniform_flags flags;
    static struct_identity _identity;
    typedef entity_uniform* key_pointer_type;
    typedef int32_t key_field_type;
    static int binsearch_index(const std::vector<entity_uniform*> &vec, key_field_type key, bool exact = true);
    static int binsearch_index(const std::vector<entity_uniform*> &vec, key_pointer_type key, bool exact = true);
  public:
    entity_uniform();
  };
}
#endif
