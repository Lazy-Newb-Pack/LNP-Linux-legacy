/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_JOB_LIST_LINK_H
#define DF_JOB_LIST_LINK_H
namespace df {
  struct job;
  struct DFHACK_EXPORT job_list_link {
    df::job* item;
    df::job_list_link* prev;
    df::job_list_link* next;
    static struct_identity _identity;
  public:
    job_list_link();
  };
}
#endif
