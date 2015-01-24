/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_SPECIAL_MAT_TABLE_H
#define DF_SPECIAL_MAT_TABLE_H
namespace df {
  struct material;
  struct DFHACK_EXPORT special_mat_table {
    std::vector<int16_t > organic_types[37];
    std::vector<int32_t > organic_indexes[37];
    std::vector<int32_t > organic_unknown[37]; /*!< everything 0 */
    df::material* builtin[659];
    static struct_identity _identity;
  public:
    special_mat_table();
  };
}
#endif
