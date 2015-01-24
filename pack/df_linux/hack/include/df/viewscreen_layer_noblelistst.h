/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_VIEWSCREEN_LAYER_NOBLELISTST_H
#define DF_VIEWSCREEN_LAYER_NOBLELISTST_H
#ifndef DF_VIEWSCREEN_LAYER_H
#include "viewscreen_layer.h"
#endif
namespace df {
  struct entity_position;
  struct entity_position_assignment;
  struct nemesis_record;
  struct unit;
  struct DFHACK_EXPORT viewscreen_layer_noblelistst : viewscreen_layer {
    enum T_mode : int16_t {
      List,
      Appoint,
      Settings
    };
    T_mode mode;
    struct DFHACK_EXPORT T_info {
      df::unit* unit;
      df::nemesis_record* nemesis;
      void* unk_8;
      df::entity_position* position;
      df::entity_position_assignment* assignment;
      int32_t group;
      int32_t precedence;
      static struct_identity _identity;
    public:
      T_info();
    };
    std::vector<T_info* > info;
    struct DFHACK_EXPORT T_candidates {
      df::unit* unit;
      int32_t weight;
      static struct_identity _identity;
    public:
      T_candidates();
    };
    std::vector<T_candidates* > candidates;
    std::vector<df::entity_position_assignment* > assignments;
    std::vector<int32_t > histfigs;
    std::vector<int32_t > groups;
    static virtual_identity _identity;
  protected:
    viewscreen_layer_noblelistst(virtual_identity *_id = &viewscreen_layer_noblelistst::_identity);
    friend void *df::allocator_fn<viewscreen_layer_noblelistst>(void*,const void*);
  };
  template<> struct DFHACK_EXPORT identity_traits<viewscreen_layer_noblelistst::T_mode> {
    static enum_identity identity;
    static enum_identity *get() { return &identity; }
  };
  template<> struct DFHACK_EXPORT enum_traits<viewscreen_layer_noblelistst::T_mode> {
    typedef int16_t base_type;
    typedef viewscreen_layer_noblelistst::T_mode enum_type;
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
