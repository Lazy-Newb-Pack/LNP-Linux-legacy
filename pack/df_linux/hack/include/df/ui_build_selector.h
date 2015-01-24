/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_UI_BUILD_SELECTOR_H
#define DF_UI_BUILD_SELECTOR_H
#ifndef DF_BUILDING_TYPE_H
#include "building_type.h"
#endif
#ifndef DF_PRESSURE_PLATE_INFO_H
#include "pressure_plate_info.h"
#endif
namespace df {
  struct build_req_choicest;
  struct ui_build_item_req;
  struct DFHACK_EXPORT ui_build_selector {
    std::vector<df::ui_build_item_req* > requirements;
    std::vector<df::build_req_choicest* > choices;
    df::building_type building_type; /*!< if -1, in Build menu; otherwise select item */
    int16_t building_subtype;
    int32_t custom_type;
    int32_t stage; /*!< 0 no materials, 1 place, 2 select item */
    int16_t req_index;
    int16_t sel_index;
    int32_t is_grouped;
    std::vector<std::string* > errors;
    std::vector<std::string* > unk4;
    int32_t tiles[31][31];
    int16_t unk5_0a;
    int16_t unk5_0b;
    df::pressure_plate_info plate_info;
    std::vector<int16_t > unk6;
    std::vector<int16_t > unk7;
    int32_t friction; /*!< v0.34.08 */
    int32_t use_dump; /*!< v0.34.08 */
    int32_t dump_x_shift; /*!< v0.34.08 */
    int32_t dump_y_shift; /*!< v0.34.08 */
    int32_t speed; /*!< v0.34.08 */
    static struct_identity _identity;
  public:
    ui_build_selector();
  };
}
#endif
