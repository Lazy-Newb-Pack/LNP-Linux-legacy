/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_TILE_PAGE_H
#define DF_TILE_PAGE_H
namespace df {
  struct DFHACK_EXPORT tile_page {
    std::string token;
    std::string filename;
    int16_t tile_dim_x;
    int16_t tile_dim_y;
    int16_t page_dim_x;
    int16_t page_dim_y;
    std::vector<int32_t > texpos;
    std::vector<int32_t > datapos;
    std::vector<int32_t > texpos_gs;
    std::vector<int32_t > datapos_gs;
    bool loaded;
    static struct_identity _identity;
    typedef tile_page* key_pointer_type;
    typedef std::string key_field_type;
    static int binsearch_index(const std::vector<tile_page*> &vec, key_field_type key, bool exact = true);
    static int binsearch_index(const std::vector<tile_page*> &vec, key_pointer_type key, bool exact = true);
  public:
    tile_page();
  };
}
#endif
