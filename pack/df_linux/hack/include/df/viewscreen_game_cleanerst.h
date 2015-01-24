/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_VIEWSCREEN_GAME_CLEANERST_H
#define DF_VIEWSCREEN_GAME_CLEANERST_H
#ifndef DF_VIEWSCREEN_H
#include "viewscreen.h"
#endif
namespace df {
  struct DFHACK_EXPORT viewscreen_game_cleanerst : viewscreen {
    enum T_state : int32_t {
      CleaningGameObjects,
      CleaningStrandedObjects,
      CleaningPlayObjects
    };
    T_state state;
    int8_t anon_1;
    static virtual_identity _identity;
  protected:
    viewscreen_game_cleanerst(virtual_identity *_id = &viewscreen_game_cleanerst::_identity);
    friend void *df::allocator_fn<viewscreen_game_cleanerst>(void*,const void*);
  };
  template<> struct DFHACK_EXPORT identity_traits<viewscreen_game_cleanerst::T_state> {
    static enum_identity identity;
    static enum_identity *get() { return &identity; }
  };
  template<> struct DFHACK_EXPORT enum_traits<viewscreen_game_cleanerst::T_state> {
    typedef int32_t base_type;
    typedef viewscreen_game_cleanerst::T_state enum_type;
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
