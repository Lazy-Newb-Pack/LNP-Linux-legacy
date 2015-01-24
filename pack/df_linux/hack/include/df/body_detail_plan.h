/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_BODY_DETAIL_PLAN_H
#define DF_BODY_DETAIL_PLAN_H
namespace df {
  struct DFHACK_EXPORT body_detail_plan {
    std::string id;
    std::vector<std::string* > add_material_name;
    std::vector<std::string* > add_material_template;
    std::vector<std::string* > add_tissue_name;
    std::vector<std::string* > add_tissue_template;
    std::vector<void* > unk5c;
    std::vector<void* > unk6c;
    std::vector<void* > unk7c;
    std::vector<void* > bp_layers_selection;
    std::vector<void* > bp_layers_criteria;
    std::vector<void* > bp_layers_tissue;
    std::vector<void* > bp_layers_thickness;
    std::vector<void* > bp_layers_position;
    std::vector<void* > bp_layers_over_under;
    std::vector<void* > bp_relsize_selection;
    std::vector<void* > bp_relsize_criteria;
    std::vector<void* > bp_relsize_value;
    std::vector<void* > bp_position_selection;
    std::vector<void* > bp_position_criteria;
    std::vector<void* > bp_position_value;
    std::vector<void* > bp_relation_selection_1;
    std::vector<void* > bp_relation_criteria_1;
    std::vector<void* > bp_relation_value_1;
    std::vector<void* > bp_relation_selection_2;
    std::vector<void* > bp_relation_criteria_2;
    std::vector<void* > bp_relation_extent;
    static struct_identity _identity;
    static std::vector<body_detail_plan*> &get_vector();
    static body_detail_plan *find(int id);
  public:
    body_detail_plan();
  };
}
#endif
