/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_INTERACTION_SOURCE_SECRETST_H
#define DF_INTERACTION_SOURCE_SECRETST_H
#ifndef DF_GOAL_TYPE_H
#include "goal_type.h"
#endif
#ifndef DF_INTERACTION_SOURCE_H
#include "interaction_source.h"
#endif
#ifndef DF_SPHERE_TYPE_H
#include "sphere_type.h"
#endif
namespace df {
  struct DFHACK_EXPORT interaction_source_secretst : interaction_source {
    union T_learn_flags {
      uint32_t whole;
      struct {
        uint32_t SUPERNATURAL_LEARNING_POSSIBLE : 1;
        uint32_t MUNDANE_RESEARCH_POSSIBLE : 1;
        uint32_t MUNDANE_RECORDING_POSSIBLE : 1;
        uint32_t MUNDANE_TEACHING_POSSIBLE : 1;
      } bits;
      enum Shift {
        shift_SUPERNATURAL_LEARNING_POSSIBLE = 0,
        shift_MUNDANE_RESEARCH_POSSIBLE = 1,
        shift_MUNDANE_RECORDING_POSSIBLE = 2,
        shift_MUNDANE_TEACHING_POSSIBLE = 3
      };
      enum Mask : uint32_t {
        mask_SUPERNATURAL_LEARNING_POSSIBLE = 0x1U,
        mask_MUNDANE_RESEARCH_POSSIBLE = 0x2U,
        mask_MUNDANE_RECORDING_POSSIBLE = 0x4U,
        mask_MUNDANE_TEACHING_POSSIBLE = 0x8U
      };
      T_learn_flags(uint32_t whole_ = 0) : whole(whole_) {};
    };
    T_learn_flags learn_flags;
    std::vector<df::sphere_type > spheres;
    std::vector<df::goal_type > goals;
    std::string book_title_filename;
    std::string book_name_filename;
    int32_t anon_1;
    int32_t anon_2;
    static virtual_identity _identity;
  protected:
    interaction_source_secretst(virtual_identity *_id = &interaction_source_secretst::_identity);
    friend void *df::allocator_fn<interaction_source_secretst>(void*,const void*);
  };
  template<> struct DFHACK_EXPORT bitfield_traits<interaction_source_secretst::T_learn_flags> {
    typedef uint32_t base_type;
    typedef interaction_source_secretst::T_learn_flags bitfield_type;
    static const int bit_count = sizeof(base_type)*8;
    static const bitfield_item_info bits[bit_count];
  };
  template<> struct DFHACK_EXPORT identity_traits<interaction_source_secretst::T_learn_flags> {
    static bitfield_identity identity;
    static bitfield_identity *get() { return &identity; }
  };
}
#endif
