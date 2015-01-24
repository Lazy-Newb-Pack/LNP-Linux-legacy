/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_WORKSHOP_PROFILE_H
#define DF_WORKSHOP_PROFILE_H
namespace df {
  struct DFHACK_EXPORT workshop_profile {
    std::vector<int32_t > permitted_workers;
    int32_t min_level;
    int32_t max_level;
    static struct_identity _identity;
  public:
    workshop_profile();
  };
}
#endif
