/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_WORLD_OBJECT_DATA_H
#define DF_WORLD_OBJECT_DATA_H
namespace df {
  struct building;
  struct item;
  struct DFHACK_EXPORT world_object_data {
    int32_t id;
    std::vector<int32_t > altered_items; /*!< world_data_subid */
    struct DFHACK_EXPORT T_offloaded_items {
      df::item* item;
      int32_t global_x; /*!< in tiles it seems */
      int32_t global_y;
      int32_t global_z;
      int32_t container;
      int32_t building;
      int32_t unk_18;
      static struct_identity _identity;
    public:
      T_offloaded_items();
    };
    std::vector<T_offloaded_items* > offloaded_items;
    std::vector<void* > unk_24;
    std::vector<void* > unk_34;
    std::vector<void* > unk_44;
    std::vector<void* > unk_54;
    std::vector<void* > unk_64;
    std::vector<int32_t > altered_buildings; /*!< world_data_subid */
    struct DFHACK_EXPORT T_offloaded_buildings {
      df::building* building;
      int32_t global_x; /*!< in tiles it seems */
      int32_t global_y;
      int32_t global_z;
      int32_t unk_10;
      static struct_identity _identity;
    public:
      T_offloaded_buildings();
    };
    std::vector<T_offloaded_buildings* > offloaded_buildings;
    struct DFHACK_EXPORT T_unk_94 {
      int32_t global_x; /*!< in tiles it seems */
      int32_t global_y;
      int32_t global_z;
      int32_t unk_c;
      static struct_identity _identity;
    public:
      T_unk_94();
    };
    std::vector<T_unk_94* > unk_94;
    std::vector<void* > creation_zone_alterations; /*!< v0.40.01; a vtable type */
    int32_t unk_v40_1; /*!< v0.40.1 */
    int32_t year;
    int32_t year_tick;
    std::vector<void* > unk_c0;
    std::vector<void* > unk_d0;
    std::vector<void* > unk_e0;
    std::vector<void* > unk_f0;
    std::vector<void* > unk_100;
    std::vector<void* > unk_110;
    static struct_identity _identity;
    typedef world_object_data* key_pointer_type;
    typedef int32_t key_field_type;
    static int binsearch_index(const std::vector<world_object_data*> &vec, key_field_type key, bool exact = true);
    static int binsearch_index(const std::vector<world_object_data*> &vec, key_pointer_type key, bool exact = true);
    static std::vector<world_object_data*> &get_vector();
    static world_object_data *find(key_field_type id);
  public:
    world_object_data();
  };
}
#endif
