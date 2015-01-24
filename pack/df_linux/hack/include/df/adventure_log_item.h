/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_ADVENTURE_LOG_ITEM_H
#define DF_ADVENTURE_LOG_ITEM_H
namespace df {
  struct DFHACK_EXPORT adventure_log_item {
    void* object;
    std::string str1;
    std::string str2;
    std::string str3;
    std::vector<std::string* > info;
    static struct_identity _identity;
  public:
    adventure_log_item();
  };
}
#endif
