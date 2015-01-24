/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_PLANT_TREE_INFO_H
#define DF_PLANT_TREE_INFO_H
namespace df {
  union plant_tree_tile;
  struct DFHACK_EXPORT plant_tree_info {
    df::plant_tree_tile** body; /*!< dimension body_height */
    int16_t* unk1; /*!< dimension body_height */
    int16_t* unk2; /*!< dimension body_height */
    int16_t* unk3; /*!< dimension body_height */
    int16_t* unk4; /*!< dimension body_height */
    int32_t body_height;
    int32_t dim_x;
    int32_t dim_y;
    df::plant_tree_tile** roots; /*!< dimension roots_depth */
    int32_t roots_depth;
    int16_t unk6;
    static struct_identity _identity;
  public:
    plant_tree_info();
  };
}
#endif
