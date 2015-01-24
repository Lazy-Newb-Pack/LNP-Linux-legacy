/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_ENTITY_POSITION_ASSIGNMENT_H
#define DF_ENTITY_POSITION_ASSIGNMENT_H
namespace df {
  struct DFHACK_EXPORT entity_position_assignment {
    int32_t id;
    int32_t histfig;
    int32_t histfig2; /*!< v0.40.01 */
    int32_t position_id; /*!< position within relevant entity */
    BitArray<int> flags;
    int32_t squad_id;
    int32_t anon_1;
    int32_t anon_2;
    int32_t anon_3; /*!< v0.40.01 */
    int32_t anon_4; /*!< v0.40.01 */
    std::vector<void* > anon_5; /*!< v0.40.01, not saved */
    static struct_identity _identity;
    typedef entity_position_assignment* key_pointer_type;
    typedef int32_t key_field_type;
    static int binsearch_index(const std::vector<entity_position_assignment*> &vec, key_field_type key, bool exact = true);
    static int binsearch_index(const std::vector<entity_position_assignment*> &vec, key_pointer_type key, bool exact = true);
  public:
    entity_position_assignment();
  };
}
#endif
