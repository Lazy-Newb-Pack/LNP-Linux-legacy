/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_VIEWSCREEN_LOADGAMEST_H
#define DF_VIEWSCREEN_LOADGAMEST_H
#ifndef DF_FILE_COMPRESSORST_H
#include "file_compressorst.h"
#endif
#ifndef DF_LOADGAME_SAVE_INFO_H
#include "loadgame_save_info.h"
#endif
#ifndef DF_MATGLOSS_LIST_H
#include "matgloss_list.h"
#endif
#ifndef DF_VIEWSCREEN_H
#include "viewscreen.h"
#endif
namespace df {
  struct DFHACK_EXPORT viewscreen_loadgamest : viewscreen {
    int32_t cur_step;
    int32_t unk_v40_1b; /*!< v0.40 */
    int8_t loading;
    int32_t sel_idx;
    std::vector<df::loadgame_save_info* > saves;
    df::file_compressorst compressor;
    df::matgloss_list glosses;
    int32_t unk_v40_2;
    df::loadgame_save_info cur_save;
    static virtual_identity _identity;
  protected:
    viewscreen_loadgamest(virtual_identity *_id = &viewscreen_loadgamest::_identity);
    friend void *df::allocator_fn<viewscreen_loadgamest>(void*,const void*);
  };
}
#endif
