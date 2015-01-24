/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_ANNOUNCEMENTS_H
#define DF_ANNOUNCEMENTS_H
#ifndef DF_ANNOUNCEMENT_FLAGS_H
#include "announcement_flags.h"
#endif
namespace df {
  struct DFHACK_EXPORT announcements {
    df::announcement_flags flags[299];
    static struct_identity _identity;
  public:
    announcements();
  };
}
#endif
