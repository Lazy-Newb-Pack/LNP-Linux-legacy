/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_ITEM_HISTORY_INFO_H
#define DF_ITEM_HISTORY_INFO_H
namespace df {
  struct item_kill_info;
  struct DFHACK_EXPORT item_history_info {
    df::item_kill_info* kills;
    int32_t unk1;
    int32_t unk2;
    static struct_identity _identity;
  public:
    item_history_info();
  };
}
#endif
