/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_VIEWSCREEN_OPTIONST_H
#define DF_VIEWSCREEN_OPTIONST_H
#ifndef DF_VIEWSCREEN_H
#include "viewscreen.h"
#endif
namespace df {
  struct DFHACK_EXPORT viewscreen_optionst : viewscreen {
    int8_t msg_quit;
    int8_t in_retire_adv;
    int8_t msg_peasant;
    int8_t in_retire_dwf_abandon_adv; /*!< 1 when retiring a fortress or abandoning an adventurer */
    int8_t in_abandon_dwf;
    int32_t sel_idx;
    std::vector<int32_t > options;
    static virtual_identity _identity;
  protected:
    viewscreen_optionst(virtual_identity *_id = &viewscreen_optionst::_identity);
    friend void *df::allocator_fn<viewscreen_optionst>(void*,const void*);
  };
}
#endif
