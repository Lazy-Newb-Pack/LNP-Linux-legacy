/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_CASTE_CLOTHING_ITEM_H
#define DF_CASTE_CLOTHING_ITEM_H
namespace df {
  struct item;
  struct DFHACK_EXPORT caste_clothing_item {
    int16_t body_part_id;
    int32_t unk_4;
    df::item* item[3]; /*!< under, over, cover */
    int32_t unk_14[3];
    int32_t size[3];
    int32_t permit[3];
    int32_t unk_38[3];
    static struct_identity _identity;
  public:
    caste_clothing_item();
  };
}
#endif
