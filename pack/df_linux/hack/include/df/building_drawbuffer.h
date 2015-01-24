/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_BUILDING_DRAWBUFFER_H
#define DF_BUILDING_DRAWBUFFER_H
namespace df {
  struct DFHACK_EXPORT building_drawbuffer {
    uint8_t tile[31][31];
    int8_t fore[31][31];
    int8_t back[31][31];
    int8_t bright[31][31];
    int16_t x1;
    int16_t x2;
    int16_t y1;
    int16_t y2;
    static struct_identity _identity;
  public:
    building_drawbuffer();
  };
}
#endif
