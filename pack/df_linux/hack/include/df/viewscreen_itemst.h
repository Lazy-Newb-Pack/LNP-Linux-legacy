/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_VIEWSCREEN_ITEMST_H
#define DF_VIEWSCREEN_ITEMST_H
#ifndef DF_VIEWSCREEN_H
#include "viewscreen.h"
#endif
namespace df {
  struct general_ref;
  struct item;
  struct DFHACK_EXPORT viewscreen_itemst : viewscreen {
    df::item* item;
    std::vector<df::general_ref* > entry_ref;
    std::vector<int16_t > entry_indent;
    std::vector<void* > unk_34;
    std::vector<std::string* > entry_string;
    std::vector<int32_t > entry_reaction;
    int32_t cursor_pos;
    bool caption_uses;
    bool caption_contents;
    static virtual_identity _identity;
  protected:
    viewscreen_itemst(virtual_identity *_id = &viewscreen_itemst::_identity);
    friend void *df::allocator_fn<viewscreen_itemst>(void*,const void*);
  };
}
#endif
