/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_VIEWSCREEN_CONVERSATIONST_H
#define DF_VIEWSCREEN_CONVERSATIONST_H
#ifndef DF_VIEWSCREEN_H
#include "viewscreen.h"
#endif
namespace df {
  struct conversation;
  struct DFHACK_EXPORT viewscreen_conversationst : viewscreen {
    df::conversation* conversation;
    int32_t cursor_speech_line;
    int32_t current_question;
    int16_t cursor_line;
    static virtual_identity _identity;
  protected:
    viewscreen_conversationst(virtual_identity *_id = &viewscreen_conversationst::_identity);
    friend void *df::allocator_fn<viewscreen_conversationst>(void*,const void*);
  };
}
#endif
