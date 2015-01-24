/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_BODY_TEMPLATE_H
#define DF_BODY_TEMPLATE_H
namespace df {
  struct body_part_template;
  struct DFHACK_EXPORT body_template {
    std::string id;
    std::vector<df::body_part_template* > parts;
    static struct_identity _identity;
    static std::vector<body_template*> &get_vector();
    static body_template *find(int id);
  public:
    body_template();
  };
}
#endif
