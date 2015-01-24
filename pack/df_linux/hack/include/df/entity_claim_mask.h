/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_ENTITY_CLAIM_MASK_H
#define DF_ENTITY_CLAIM_MASK_H
namespace df {
  struct DFHACK_EXPORT entity_claim_mask {
    struct DFHACK_EXPORT T_map {
      std::vector<int32_t > entities;
      typedef uint8_t T_region_masks[16][16];
      std::vector<T_region_masks* > region_masks;
      static struct_identity _identity;
    public:
      T_map();
    };
    T_map** map;
    int16_t width;
    int16_t height;
    static struct_identity _identity;
  public:
    entity_claim_mask();
  };
}
#endif
