/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_ARMY_CONTROLLER_H
#define DF_ARMY_CONTROLLER_H
namespace df {
  struct DFHACK_EXPORT army_controller {
    int32_t id;
    int32_t entity_id;
    int32_t unk_8;
    int32_t pos_x;
    int32_t pos_y;
    int32_t unk_14;
    int32_t unk_18;
    std::vector<void* > unk_1c;
    int32_t year;
    int32_t year_tick;
    int32_t unk_34;
    int32_t unk_38;
    int32_t unk_3c;
    int32_t unk_40;
    std::vector<void* > unk_44;
    int32_t unk_54;
    void* unk_58; /*!< target structure varies */
    int32_t unk_5c;
    static struct_identity _identity;
    typedef army_controller* key_pointer_type;
    typedef int32_t key_field_type;
    static int binsearch_index(const std::vector<army_controller*> &vec, key_field_type key, bool exact = true);
    static int binsearch_index(const std::vector<army_controller*> &vec, key_pointer_type key, bool exact = true);
    static std::vector<army_controller*> &get_vector();
    static army_controller *find(key_field_type id);
  public:
    army_controller();
  };
}
#endif
