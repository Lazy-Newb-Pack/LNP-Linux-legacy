/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_UNIT_ITEM_USE_H
#define DF_UNIT_ITEM_USE_H
namespace df {
  struct DFHACK_EXPORT unit_item_use {
    int32_t id;
    int32_t time_in_use;
    int32_t has_grown_attached;
    int32_t affection_level; /*!< min 50 for attached, 1000 for name */
    static struct_identity _identity;
    typedef unit_item_use* key_pointer_type;
    typedef int32_t key_field_type;
    static int binsearch_index(const std::vector<unit_item_use*> &vec, key_field_type key, bool exact = true);
    static int binsearch_index(const std::vector<unit_item_use*> &vec, key_pointer_type key, bool exact = true);
  public:
    unit_item_use();
  };
}
#endif
