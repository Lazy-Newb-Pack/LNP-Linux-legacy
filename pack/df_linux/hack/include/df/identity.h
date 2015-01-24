/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_IDENTITY_H
#define DF_IDENTITY_H
#ifndef DF_LANGUAGE_NAME_H
#include "language_name.h"
#endif
namespace df {
  struct DFHACK_EXPORT identity {
    int32_t id;
    df::language_name name;
    int32_t race;
    int16_t caste;
    int32_t histfig_id; /*!< when masquerading as another historical figure */
    int32_t unk_4c;
    int32_t birth_year; /*!< the fake one, that is */
    int32_t birth_second;
    static struct_identity _identity;
    typedef identity* key_pointer_type;
    typedef int32_t key_field_type;
    static int binsearch_index(const std::vector<identity*> &vec, key_field_type key, bool exact = true);
    static int binsearch_index(const std::vector<identity*> &vec, key_pointer_type key, bool exact = true);
    static std::vector<identity*> &get_vector();
    static identity *find(key_field_type id);
  public:
    identity();
  };
}
#endif
