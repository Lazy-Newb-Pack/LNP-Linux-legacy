/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_WORLD_POPULATION_REF_H
#define DF_WORLD_POPULATION_REF_H
namespace df {
  struct DFHACK_EXPORT world_population_ref {
    int16_t region_x;
    int16_t region_y;
    int16_t feature_idx;
    int32_t cave_id;
    int32_t unk_28;
    int32_t population_idx;
    int16_t depth;
    static struct_identity _identity;
  public:
    world_population_ref();
  };
}
#endif
