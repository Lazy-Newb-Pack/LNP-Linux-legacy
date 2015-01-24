/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_ENTITY_POPULATION_H
#define DF_ENTITY_POPULATION_H
#ifndef DF_LANGUAGE_NAME_H
#include "language_name.h"
#endif
namespace df {
  struct entity_population_unk4;
  struct DFHACK_EXPORT entity_population {
    df::language_name name;
    std::vector<int16_t > races;
    std::vector<int32_t > counts;
    std::vector<int32_t > unk3;
    std::vector<df::entity_population_unk4* > unk4;
    int32_t unk5;
    int32_t unk6;
    int32_t id;
    int32_t flags; /*!< ?; unk6 == -1 */
    int32_t civ_id;
    static struct_identity _identity;
    typedef entity_population* key_pointer_type;
    typedef int32_t key_field_type;
    static int binsearch_index(const std::vector<entity_population*> &vec, key_field_type key, bool exact = true);
    static int binsearch_index(const std::vector<entity_population*> &vec, key_pointer_type key, bool exact = true);
    static std::vector<entity_population*> &get_vector();
    static entity_population *find(key_field_type id);
  public:
    entity_population();
  };
}
#endif
