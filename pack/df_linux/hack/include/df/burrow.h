/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_BURROW_H
#define DF_BURROW_H
namespace df {
  struct DFHACK_EXPORT burrow {
    int32_t id;
    std::string name;
    uint8_t tile;
    int16_t fg_color;
    int16_t bg_color;
    std::vector<int32_t > block_x;
    std::vector<int32_t > block_y;
    std::vector<int32_t > block_z;
    std::vector<int32_t > units;
    int32_t anon_1; /*!< v0.40.07 */
    static struct_identity _identity;
    typedef burrow* key_pointer_type;
    typedef int32_t key_field_type;
    static int binsearch_index(const std::vector<burrow*> &vec, key_field_type key, bool exact = true);
    static int binsearch_index(const std::vector<burrow*> &vec, key_pointer_type key, bool exact = true);
    static std::vector<burrow*> &get_vector();
    static burrow *find(key_field_type id);
  public:
    burrow();
  };
}
#endif
