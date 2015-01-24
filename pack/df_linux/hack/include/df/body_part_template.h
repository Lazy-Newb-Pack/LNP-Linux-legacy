/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_BODY_PART_TEMPLATE_H
#define DF_BODY_PART_TEMPLATE_H
#ifndef DF_BODY_PART_TEMPLATE_CONTYPE_H
#include "body_part_template_contype.h"
#endif
#ifndef DF_BODY_PART_TEMPLATE_FLAGS_H
#include "body_part_template_flags.h"
#endif
namespace df {
  struct DFHACK_EXPORT body_part_template {
    std::string id;
    std::string con;
    std::string category;
    std::string con_cat;
    df::body_part_template_contype contype;
    BitArray<df::body_part_template_flags> flags;
    int32_t default_relsize;
    int32_t number;
    std::vector<std::string* > name_singular; /*!< first comes from BP, rest come from INDIVIDUAL_NAME */
    std::vector<std::string* > name_plural;
    static struct_identity _identity;
  public:
    body_part_template();
  };
}
#endif
