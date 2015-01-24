/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_VIEWSCREEN_PETST_H
#define DF_VIEWSCREEN_PETST_H
#ifndef DF_VIEWSCREEN_H
#include "viewscreen.h"
#endif
namespace df {
  struct item;
  struct unit;
  struct DFHACK_EXPORT viewscreen_petst : viewscreen {
    int32_t cursor;
    union DFHACK_EXPORT T_animal {
      df::unit* unit;
      df::item* item;
    };
    std::vector<T_animal > animal;
    std::vector<char > is_vermin;
    std::vector<char > is_tame;
    std::vector<char > is_adopting;
    enum T_mode : int32_t {
      List,
      TrainingKnowledge,
      SelectTrainer
    };
    T_mode mode;
    int32_t knowledge_page;
    std::vector<int32_t > known;
    int32_t trainer_cursor;
    std::vector<df::unit* > trainer_unit;
    std::vector<int32_t > trainer_mode;
    static virtual_identity _identity;
  protected:
    viewscreen_petst(virtual_identity *_id = &viewscreen_petst::_identity);
    friend void *df::allocator_fn<viewscreen_petst>(void*,const void*);
  };
  template<> struct DFHACK_EXPORT identity_traits<viewscreen_petst::T_animal> {
    static struct_identity identity;
    static struct_identity *get() { return &identity; }
  };
  template<> struct DFHACK_EXPORT identity_traits<viewscreen_petst::T_mode> {
    static enum_identity identity;
    static enum_identity *get() { return &identity; }
  };
  template<> struct DFHACK_EXPORT enum_traits<viewscreen_petst::T_mode> {
    typedef int32_t base_type;
    typedef viewscreen_petst::T_mode enum_type;
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
