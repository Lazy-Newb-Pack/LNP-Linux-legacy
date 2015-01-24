/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_INIT_H
#define DF_INIT_H
#ifndef DF_INIT_DISPLAY_H
#include "init_display.h"
#endif
#ifndef DF_INIT_FONT_H
#include "init_font.h"
#endif
#ifndef DF_INIT_INPUT_H
#include "init_input.h"
#endif
#ifndef DF_INIT_MEDIA_H
#include "init_media.h"
#endif
#ifndef DF_INIT_WINDOW_H
#include "init_window.h"
#endif
namespace df {
  struct DFHACK_EXPORT init {
    df::init_display display;
    df::init_media media;
    df::init_input input;
    df::init_font font;
    df::init_window window;
    static struct_identity _identity;
  public:
    init();
  };
}
#endif
