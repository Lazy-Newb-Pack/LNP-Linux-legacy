/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_BODY_COMPONENT_INFO_H
#define DF_BODY_COMPONENT_INFO_H
#ifndef DF_BODY_LAYER_STATUS_H
#include "body_layer_status.h"
#endif
#ifndef DF_BODY_PART_STATUS_H
#include "body_part_status.h"
#endif
namespace df {
  struct DFHACK_EXPORT body_component_info {
    std::vector<df::body_part_status > body_part_status;
    std::vector<uint32_t > numbered_masks; /*!< 1 bit per instance of a numbered body part */
    std::vector<uint32_t > nonsolid_remaining; /*!< 0-100% */
    std::vector<df::body_layer_status > layer_status;
    std::vector<uint32_t > layer_wound_area;
    std::vector<uint32_t > layer_cut_fraction; /*!< 0-10000 */
    std::vector<uint32_t > layer_dent_fraction; /*!< 0-10000 */
    std::vector<uint32_t > layer_effect_fraction; /*!< 0-1000000000 */
    static struct_identity _identity;
  public:
    body_component_info();
  };
}
#endif
