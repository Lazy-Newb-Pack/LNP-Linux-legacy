/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_VIEWSCREEN_MOVIEPLAYERST_H
#define DF_VIEWSCREEN_MOVIEPLAYERST_H
#ifndef DF_VIEWSCREEN_H
#include "viewscreen.h"
#endif
namespace df {
  struct DFHACK_EXPORT viewscreen_movieplayerst : viewscreen {
    int8_t saving;
    int8_t loading;
    int8_t editing;
    int8_t text_mode;
    uint8_t editing_char;
    int32_t editing_copy_from;
    int16_t editing_screenf;
    int16_t editing_screenb;
    int16_t editing_screenbright;
    int32_t editing_selected_sound;
    int8_t editing_menu;
    std::string savename;
    std::string force_file;
    int8_t is_playing;
    int8_t is_forced_play;
    int8_t quit_if_no_play;
    int32_t maxmoviepos;
    int32_t end_frame_pos;
    int32_t selfile;
    std::vector<void* > filelist;
    static virtual_identity _identity;
  protected:
    viewscreen_movieplayerst(virtual_identity *_id = &viewscreen_movieplayerst::_identity);
    friend void *df::allocator_fn<viewscreen_movieplayerst>(void*,const void*);
  };
}
#endif
