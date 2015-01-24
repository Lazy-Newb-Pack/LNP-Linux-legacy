/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_UNIT_MISC_TRAIT_H
#define DF_UNIT_MISC_TRAIT_H
#ifndef DF_MISC_TRAIT_TYPE_H
#include "misc_trait_type.h"
#endif
namespace df {
  struct DFHACK_EXPORT unit_misc_trait {
    df::misc_trait_type id;
    int32_t value;
    static struct_identity _identity;
  public:
    unit_misc_trait();
  };
}
#endif
