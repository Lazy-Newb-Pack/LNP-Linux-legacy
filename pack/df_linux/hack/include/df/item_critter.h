/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_ITEM_CRITTER_H
#define DF_ITEM_CRITTER_H
#ifndef DF_ITEM_ACTUAL_H
#include "item_actual.h"
#endif
#ifndef DF_LANGUAGE_NAME_H
#include "language_name.h"
#endif
namespace df {
  struct DFHACK_EXPORT item_critter : item_actual {
    int16_t race;
    int16_t caste;
    int32_t milk_timer;
    int32_t airdrown_timer;
    df::language_name name;
    static virtual_identity _identity;
  protected:
    item_critter(virtual_identity *_id = &item_critter::_identity);
    friend void *df::allocator_fn<item_critter>(void*,const void*);
  };
}
#endif
