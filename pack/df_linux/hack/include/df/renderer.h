/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_RENDERER_H
#define DF_RENDERER_H
#ifndef DF_ZOOM_COMMANDS_H
#include "zoom_commands.h"
#endif
namespace df {
  struct DFHACK_EXPORT renderer : virtual_class {
    uint8_t* screen;
    int32_t* screentexpos;
    int8_t* screentexpos_addcolor;
    uint8_t* screentexpos_grayscale;
    uint8_t* screentexpos_cf;
    uint8_t* screentexpos_cbr;
    uint8_t* screen_old;
    int32_t* screentexpos_old;
    int8_t* screentexpos_addcolor_old;
    uint8_t* screentexpos_grayscale_old;
    uint8_t* screentexpos_cf_old;
    uint8_t* screentexpos_cbr_old;
    static virtual_identity _identity;
  public:
    virtual void update_tile(int32_t, int32_t) { /*0*/ };
    virtual void update_all() { /*1*/ };
    virtual void render() { /*2*/ };
    virtual void set_fullscreen() { /*3*/ };
    virtual void zoom(df::zoom_commands) { /*4*/ };
    virtual void resize(int32_t, int32_t) { /*5*/ };
    virtual void grid_resize(int32_t, int32_t) { /*6*/ };
    virtual ~renderer() { /*7*/ };
    virtual bool get_mouse_coords(int32_t*, int32_t*) { return bool(); /*8*/ };
    virtual bool uses_opengl() { return bool(); /*9*/ };
  protected:
    renderer(virtual_identity *_id = &renderer::_identity);
    friend void *df::allocator_fn<renderer>(void*,const void*);
  };
}
#endif
