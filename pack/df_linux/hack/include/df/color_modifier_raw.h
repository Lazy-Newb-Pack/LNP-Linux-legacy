/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_COLOR_MODIFIER_RAW_H
#define DF_COLOR_MODIFIER_RAW_H
namespace df {
  struct DFHACK_EXPORT color_modifier_raw {
    std::vector<int32_t > pattern_index;
    std::vector<int32_t > pattern_frequency;
    std::vector<int16_t > body_part_id;
    std::vector<int16_t > tissue_layer_id;
    int16_t unk5;
    int32_t start_date;
    int32_t end_date;
    int32_t unk6;
    std::string part;
    int16_t unk_6c;
    int16_t unk_6e;
    int32_t unk_70;
    int32_t id;
    std::vector<void* > unk_78;
    std::vector<void* > unk_88;
    static struct_identity _identity;
    typedef color_modifier_raw* key_pointer_type;
    typedef int32_t key_field_type;
    static int binsearch_index(const std::vector<color_modifier_raw*> &vec, key_field_type key, bool exact = true);
    static int binsearch_index(const std::vector<color_modifier_raw*> &vec, key_pointer_type key, bool exact = true);
  public:
    color_modifier_raw();
  };
}
#endif
