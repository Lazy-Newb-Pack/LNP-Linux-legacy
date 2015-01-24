/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_TEXTURE_HANDLER_H
#define DF_TEXTURE_HANDLER_H
namespace df {
  struct tile_page;
  struct DFHACK_EXPORT texture_handler {
    std::vector<df::tile_page* > page;
    std::vector<int32_t > texpos;
    std::vector<int32_t > datapos;
    static struct_identity _identity;
  public:
    texture_handler();
  };
}
#endif
