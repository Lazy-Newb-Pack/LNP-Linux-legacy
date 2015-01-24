/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_MAP_VIEWPORT_H
#define DF_MAP_VIEWPORT_H
namespace df {
  struct DFHACK_EXPORT map_viewport {
    bool adv_mode;
    bool unk1;
    uint8_t map_rotation;
    int16_t min_x;
    int16_t min_y;
    int16_t max_x;
    int16_t max_y;
    int16_t window_x;
    int16_t window_y;
    int16_t window_z;
    static struct_identity _identity;
  public:
    map_viewport();
  };
}
#endif
