/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_ITEM_KILL_INFO_H
#define DF_ITEM_KILL_INFO_H
#ifndef DF_HISTORICAL_KILLS_H
#include "historical_kills.h"
#endif
namespace df {
  struct DFHACK_EXPORT item_kill_info {
    df::historical_kills targets;
    std::vector<int32_t > slayers;
    std::vector<int32_t > slayer_kill_counts;
    static struct_identity _identity;
  public:
    item_kill_info();
  };
}
#endif
