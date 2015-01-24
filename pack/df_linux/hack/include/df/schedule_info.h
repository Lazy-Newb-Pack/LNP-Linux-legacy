/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_SCHEDULE_INFO_H
#define DF_SCHEDULE_INFO_H
namespace df {
  struct schedule_slot;
  struct DFHACK_EXPORT schedule_info {
    int32_t id;
    int16_t anon_1;
    std::vector<df::schedule_slot* > slots;
    static struct_identity _identity;
    typedef schedule_info* key_pointer_type;
    typedef int32_t key_field_type;
    static int binsearch_index(const std::vector<schedule_info*> &vec, key_field_type key, bool exact = true);
    static int binsearch_index(const std::vector<schedule_info*> &vec, key_pointer_type key, bool exact = true);
    static std::vector<schedule_info*> &get_vector();
    static schedule_info *find(key_field_type id);
  public:
    schedule_info();
  };
}
#endif
