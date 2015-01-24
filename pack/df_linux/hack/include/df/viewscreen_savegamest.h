/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_VIEWSCREEN_SAVEGAMEST_H
#define DF_VIEWSCREEN_SAVEGAMEST_H
#ifndef DF_FILE_COMPRESSORST_H
#include "file_compressorst.h"
#endif
#ifndef DF_VIEWSCREEN_H
#include "viewscreen.h"
#endif
namespace df {
  struct DFHACK_EXPORT viewscreen_savegamest : viewscreen {
    std::string anon_1;
    int32_t cur_step;
    int32_t unk_v40_1b; /*!< v0.40 */
    df::file_compressorst compressor;
    static virtual_identity _identity;
  protected:
    viewscreen_savegamest(virtual_identity *_id = &viewscreen_savegamest::_identity);
    friend void *df::allocator_fn<viewscreen_savegamest>(void*,const void*);
  };
}
#endif
