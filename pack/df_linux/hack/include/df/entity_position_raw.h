/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_ENTITY_POSITION_RAW_H
#define DF_ENTITY_POSITION_RAW_H
#ifndef DF_ENTITY_POSITION_RAW_FLAGS_H
#include "entity_position_raw_flags.h"
#endif
#ifndef DF_JOB_SKILL_H
#include "job_skill.h"
#endif
namespace df {
  struct DFHACK_EXPORT entity_position_raw {
    std::string code;
    int32_t id;
    BitArray<df::entity_position_raw_flags> flags;
    std::vector<std::string* > allowed_creature_str[2];
    std::vector<int32_t > allowed_creature;
    std::vector<std::string* > allowed_class;
    std::vector<std::string* > rejected_creature_str[2];
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
    std::vector<std::string* > commander_str;
    std::vector<int32_t > commander_id;
    std::vector<int16_t > commander_types;
    int16_t land_holder;
    int16_t number;
    df::job_skill execution_skill;
    int32_t precedence;
    std::string replaced_by_str;
    int32_t replaced_by;
    std::vector<std::string* > appointed_by_str;
    std::vector<int32_t > appointed_by;
    std::vector<std::string* > succession_by_position_str;
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
  public:
    entity_position_raw();
  };
}
#endif
