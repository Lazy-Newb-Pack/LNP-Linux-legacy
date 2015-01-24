/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_SQUAD_UNIFORM_SPEC_H
#define DF_SQUAD_UNIFORM_SPEC_H
#ifndef DF_ITEM_FILTER_SPEC_H
#include "item_filter_spec.h"
#endif
#ifndef DF_UNIFORM_INDIV_CHOICE_H
#include "uniform_indiv_choice.h"
#endif
namespace df {
  struct DFHACK_EXPORT squad_uniform_spec {
    int32_t item;
    df::item_filter_spec item_filter;
    int32_t color;
    std::vector<int32_t > assigned;
    df::uniform_indiv_choice indiv_choice;
    static struct_identity _identity;
  public:
    squad_uniform_spec();
  };
}
#endif
