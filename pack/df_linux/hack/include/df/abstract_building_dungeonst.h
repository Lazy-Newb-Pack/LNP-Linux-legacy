/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_ABSTRACT_BUILDING_DUNGEONST_H
#define DF_ABSTRACT_BUILDING_DUNGEONST_H
#ifndef DF_ABSTRACT_BUILDING_H
#include "abstract_building.h"
#endif
#ifndef DF_ABSTRACT_BUILDING_UNK_H
#include "abstract_building_unk.h"
#endif
#ifndef DF_LANGUAGE_NAME_H
#include "language_name.h"
#endif
namespace df {
  struct DFHACK_EXPORT abstract_building_dungeonst : abstract_building {
    df::language_name name;
    enum T_dungeon_type : int16_t {
      DUNGEON,
      SEWERS,
      CATACOMBS
    };
    T_dungeon_type dungeon_type;
    int32_t anon_1;
    df::abstract_building_unk unk;
    int32_t anon_2;
    int32_t anon_3; /*!< not saved */
    int32_t anon_4; /*!< not saved */
    static virtual_identity _identity;
  protected:
    abstract_building_dungeonst(virtual_identity *_id = &abstract_building_dungeonst::_identity);
    friend void *df::allocator_fn<abstract_building_dungeonst>(void*,const void*);
  };
  template<> struct DFHACK_EXPORT identity_traits<abstract_building_dungeonst::T_dungeon_type> {
    static enum_identity identity;
    static enum_identity *get() { return &identity; }
  };
  template<> struct DFHACK_EXPORT enum_traits<abstract_building_dungeonst::T_dungeon_type> {
    typedef int16_t base_type;
    typedef abstract_building_dungeonst::T_dungeon_type enum_type;
    static const base_type first_item_value = 0;
    static const base_type last_item_value = 2;
    static inline bool is_valid(enum_type value) {
      return (base_type(value) >= first_item_value && base_type(value) <= last_item_value);
    }
    static const enum_type first_item = (enum_type)first_item_value;
    static const enum_type last_item = (enum_type)last_item_value;
    static const char *const key_table[3];
  };
}
#endif
