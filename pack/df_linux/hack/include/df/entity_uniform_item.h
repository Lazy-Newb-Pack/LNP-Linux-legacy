/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_ENTITY_UNIFORM_ITEM_H
#define DF_ENTITY_UNIFORM_ITEM_H
#ifndef DF_ENTITY_MATERIAL_CATEGORY_H
#include "entity_material_category.h"
#endif
#ifndef DF_UNIFORM_INDIV_CHOICE_H
#include "uniform_indiv_choice.h"
#endif
namespace df {
  struct DFHACK_EXPORT entity_uniform_item {
    int8_t random_dye;
    int8_t armorlevel;
    int16_t item_color;
    int32_t art_image_id;
    int16_t art_image_subid;
    int16_t image_thread_color;
    df::entity_material_category image_material_class;
    int16_t maker_race;
    df::uniform_indiv_choice indiv_choice;
    int16_t mattype;
    int32_t matindex;
    df::entity_material_category material_class;
    static struct_identity _identity;
  public:
    entity_uniform_item();
  };
}
#endif
