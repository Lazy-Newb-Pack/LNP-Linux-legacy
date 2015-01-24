/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_PLANT_GROWTH_PRINT_H
#define DF_PLANT_GROWTH_PRINT_H
namespace df {
  struct DFHACK_EXPORT plant_growth_print {
    int32_t priority; /*!< final token in list */
    uint8_t tile_growth;
    uint8_t tile_item;
    int16_t color[3];
    int32_t timing_start;
    int32_t timing_end;
    static struct_identity _identity;
  public:
    plant_growth_print();
  };
}
#endif
