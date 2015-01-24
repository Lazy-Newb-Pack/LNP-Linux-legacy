/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_INIT_WINDOW_H
#define DF_INIT_WINDOW_H
#ifndef DF_INIT_WINDOW_FLAGS_H
#include "init_window_flags.h"
#endif
namespace df {
  struct DFHACK_EXPORT init_window {
    BitArray<df::init_window_flags> flag;
    static struct_identity _identity;
  public:
    init_window();
  };
}
#endif
