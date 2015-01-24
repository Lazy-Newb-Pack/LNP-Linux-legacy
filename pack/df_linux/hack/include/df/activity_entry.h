/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_ACTIVITY_ENTRY_H
#define DF_ACTIVITY_ENTRY_H
namespace df {
  struct activity_event;
  struct DFHACK_EXPORT activity_entry {
    int32_t id;
    int16_t type; /*!< was is_individual; 2 is associated with Conflict events */
    std::vector<df::activity_event* > events;
    int32_t next_event_id;
    int32_t army_controller; /*!< v0.40.1 */
    static struct_identity _identity;
    typedef activity_entry* key_pointer_type;
    typedef int32_t key_field_type;
    static int binsearch_index(const std::vector<activity_entry*> &vec, key_field_type key, bool exact = true);
    static int binsearch_index(const std::vector<activity_entry*> &vec, key_pointer_type key, bool exact = true);
    static std::vector<activity_entry*> &get_vector();
    static activity_entry *find(key_field_type id);
  public:
    activity_entry();
  };
}
#endif
