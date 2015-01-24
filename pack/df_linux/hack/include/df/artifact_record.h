/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_ARTIFACT_RECORD_H
#define DF_ARTIFACT_RECORD_H
#ifndef DF_LANGUAGE_NAME_H
#include "language_name.h"
#endif
namespace df {
  struct item;
  struct DFHACK_EXPORT artifact_record {
    int32_t id;
    df::language_name name;
    BitArray<int> flags;
    df::item* item;
    int32_t anon_1; /*!< v0.34.01 */
    int32_t anon_2; /*!< v0.34.01 */
    int32_t anon_3; /*!< v0.34.01 */
    static struct_identity _identity;
    typedef artifact_record* key_pointer_type;
    typedef int32_t key_field_type;
    static int binsearch_index(const std::vector<artifact_record*> &vec, key_field_type key, bool exact = true);
    static int binsearch_index(const std::vector<artifact_record*> &vec, key_pointer_type key, bool exact = true);
    static std::vector<artifact_record*> &get_vector();
    static artifact_record *find(key_field_type id);
  public:
    artifact_record();
  };
}
#endif
