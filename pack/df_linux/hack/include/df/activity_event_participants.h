/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_ACTIVITY_EVENT_PARTICIPANTS_H
#define DF_ACTIVITY_EVENT_PARTICIPANTS_H
namespace df {
  struct DFHACK_EXPORT activity_event_participants {
    std::vector<int32_t > histfigs;
    std::vector<int32_t > units;
    std::vector<int32_t > free_histfigs;
    std::vector<int32_t > free_units;
    int32_t activity_id;
    int32_t event_id;
    static struct_identity _identity;
  public:
    activity_event_participants();
  };
}
#endif
