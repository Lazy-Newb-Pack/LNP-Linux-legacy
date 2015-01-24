/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_ENTITY_ENTITY_LINK_H
#define DF_ENTITY_ENTITY_LINK_H
#ifndef DF_ENTITY_ENTITY_LINK_TYPE_H
#include "entity_entity_link_type.h"
#endif
namespace df {
  struct DFHACK_EXPORT entity_entity_link {
    enum_field<df::entity_entity_link_type,int16_t> type;
    int32_t target;
    int16_t strength;
    static struct_identity _identity;
  public:
    entity_entity_link();
  };
}
#endif
