/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_GRAPHIC_H
#define DF_GRAPHIC_H
namespace df {
  struct DFHACK_EXPORT graphic {
    int32_t screenx;
    int32_t screeny;
    int8_t screenf;
    int8_t screenb;
    int8_t screenbright;
    uint8_t* screen;
    int32_t* screentexpos;
    int8_t* screentexpos_addcolor;
    uint8_t* screentexpos_grayscale;
    uint8_t* screentexpos_cf;
    uint8_t* screentexpos_cbr;
    int32_t clipx[2];
    int32_t clipy[2];
    int32_t tex_pos[1];
    int32_t rect_id;
    int64_t print_time[100];
    int32_t print_index;
    int8_t display_frames;
    int16_t force_full_display_count;
    int8_t original_rect;
    int32_t dimx;
    int32_t dimy;
    int32_t mouse_x;
    int32_t mouse_y;
    uint8_t* screen_limit;
    static struct_identity _identity;
  public:
    graphic();
  };
}
#endif
