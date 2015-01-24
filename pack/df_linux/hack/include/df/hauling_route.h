/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_HAULING_ROUTE_H
#define DF_HAULING_ROUTE_H
namespace df {
  struct hauling_stop;
  struct DFHACK_EXPORT hauling_route {
    int32_t id;
    std::string name;
    std::vector<df::hauling_stop* > stops;
    std::vector<int32_t > vehicle_ids;
    std::vector<int32_t > vehicle_stops;
    static struct_identity _identity;
    typedef hauling_route* key_pointer_type;
    typedef int32_t key_field_type;
    static int binsearch_index(const std::vector<hauling_route*> &vec, key_field_type key, bool exact = true);
    static int binsearch_index(const std::vector<hauling_route*> &vec, key_pointer_type key, bool exact = true);
    static std::vector<hauling_route*> &get_vector();
    static hauling_route *find(key_field_type id);
  public:
    hauling_route();
  };
}
#endif
