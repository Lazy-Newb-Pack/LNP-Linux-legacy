/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_INIT_MEDIA_H
#define DF_INIT_MEDIA_H
#ifndef DF_INIT_MEDIA_FLAGS_H
#include "init_media_flags.h"
#endif
namespace df {
  struct DFHACK_EXPORT init_media {
    BitArray<df::init_media_flags> flag;
    int32_t volume;
    static struct_identity _identity;
  public:
    init_media();
  };
}
#endif
