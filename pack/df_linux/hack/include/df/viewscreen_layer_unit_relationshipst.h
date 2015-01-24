/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_VIEWSCREEN_LAYER_UNIT_RELATIONSHIPST_H
#define DF_VIEWSCREEN_LAYER_UNIT_RELATIONSHIPST_H
#ifndef DF_HISTFIG_RELATIONSHIP_TYPE_H
#include "histfig_relationship_type.h"
#endif
#ifndef DF_UNIT_RELATIONSHIP_TYPE_H
#include "unit_relationship_type.h"
#endif
#ifndef DF_VIEWSCREEN_LAYER_H
#include "viewscreen_layer.h"
#endif
namespace df {
  struct historical_figure;
  struct unit;
  struct DFHACK_EXPORT viewscreen_layer_unit_relationshipst : viewscreen_layer {
    df::unit* unit;
    std::vector<std::string* > relation_textline;
    std::vector<df::unit_relationship_type > relation_unit_type;
    std::vector<df::histfig_relationship_type > relation_histfig_type;
    std::vector<df::unit* > relation_unit;
    std::vector<df::historical_figure* > relation_hf;
    std::vector<int32_t > level;
    static virtual_identity _identity;
  protected:
    viewscreen_layer_unit_relationshipst(virtual_identity *_id = &viewscreen_layer_unit_relationshipst::_identity);
    friend void *df::allocator_fn<viewscreen_layer_unit_relationshipst>(void*,const void*);
  };
}
#endif
