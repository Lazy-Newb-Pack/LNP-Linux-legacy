/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_NEMESIS_RECORD_H
#define DF_NEMESIS_RECORD_H
#ifndef DF_NEMESIS_FLAGS_H
#include "nemesis_flags.h"
#endif
namespace df {
  struct historical_figure;
  struct unit;
  struct DFHACK_EXPORT nemesis_record {
    int32_t id; /*!< sequential index in the array */
    int32_t unit_id;
    int32_t save_file_id; /*!< unit-*.dat */
    int16_t member_idx; /*!< index in the file */
    df::historical_figure* figure;
    df::unit* unit;
    int32_t group_leader_id;
    std::vector<int32_t > companions;
    int16_t unk10;
    int32_t unk11;
    int32_t unk12;
    BitArray<df::nemesis_flags> flags;
    static struct_identity _identity;
    typedef nemesis_record* key_pointer_type;
    typedef int32_t key_field_type;
    static int binsearch_index(const std::vector<nemesis_record*> &vec, key_field_type key, bool exact = true);
    static int binsearch_index(const std::vector<nemesis_record*> &vec, key_pointer_type key, bool exact = true);
    static std::vector<nemesis_record*> &get_vector();
    static nemesis_record *find(key_field_type id);
  public:
    nemesis_record();
  };
}
#endif
