/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_ENTITY_POSITION_H
#define DF_ENTITY_POSITION_H
#ifndef DF_ENTITY_POSITION_FLAGS_H
#include "entity_position_flags.h"
#endif
namespace df {
  struct DFHACK_EXPORT entity_position {
    std::string code;
    int32_t id;
    BitArray<df::entity_position_flags> flags;
    std::vector<int32_t > allowed_creature;
    std::vector<std::string* > allowed_class;
    std::vector<int32_t > rejected_creature;
    std::vector<std::string* > rejected_class;
    std::string name[2];
    std::string name_female[2];
    std::string name_male[2];
    std::string spouse[2];
    std::string spouse_female[2];
    std::string spouse_male[2];
    std::string squad[2];
    std::string land_name;
    int16_t squad_size;
    std::vector<int32_t > commander_id;
    std::vector<int32_t > commander_civ;
    std::vector<int16_t > commander_types;
    int16_t land_holder;
    int16_t requires_population;
    int16_t anon_1; /*!< v0.34.01 */
    int32_t precedence;
    int32_t replaced_by;
    int16_t number;
    std::vector<int32_t > appointed_by;
    std::vector<int32_t > appointed_by_civ;
    std::vector<int32_t > succession_by_position;
    bool responsibilities[25];
    int16_t color[3];
    int32_t required_boxes;
    int32_t required_cabinets;
    int32_t required_racks;
    int32_t required_stands;
    int32_t required_office;
    int32_t required_bedroom;
    int32_t required_dining;
    int32_t required_tomb;
    int32_t mandate_max;
    int32_t demand_max;
    static struct_identity _identity;
    typedef entity_position* key_pointer_type;
    typedef int32_t key_field_type;
    static int binsearch_index(const std::vector<entity_position*> &vec, key_field_type key, bool exact = true);
    static int binsearch_index(const std::vector<entity_position*> &vec, key_pointer_type key, bool exact = true);
  public:
    entity_position();
  };
}
#endif
