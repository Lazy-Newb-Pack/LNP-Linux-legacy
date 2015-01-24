/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_UNIT_ITEM_WRESTLE_H
#define DF_UNIT_ITEM_WRESTLE_H
namespace df {
  struct DFHACK_EXPORT unit_item_wrestle {
    int32_t unit;
    int32_t self_bp;
    int32_t other_bp;
    int32_t unk_c;
    int32_t unk_10;
    int32_t item1;
    int32_t item2;
    int16_t unk_1c;
    int8_t unk_1e; /*!< 1 grabs, -1 grabbed */
    int32_t unk_20;
    static struct_identity _identity;
  public:
    unit_item_wrestle();
  };
}
#endif
