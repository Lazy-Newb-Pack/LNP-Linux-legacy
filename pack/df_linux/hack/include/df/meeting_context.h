/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_MEETING_CONTEXT_H
#define DF_MEETING_CONTEXT_H
namespace df {
  struct dipscript_popup;
  struct meeting_diplomat_info;
  struct DFHACK_EXPORT meeting_context {
    df::meeting_diplomat_info* meeting;
    df::dipscript_popup* popup;
    int32_t anon_1;
    int32_t anon_2;
    static struct_identity _identity;
  public:
    meeting_context();
  };
}
#endif
