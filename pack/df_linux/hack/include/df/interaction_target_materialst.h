/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_INTERACTION_TARGET_MATERIALST_H
#define DF_INTERACTION_TARGET_MATERIALST_H
#ifndef DF_BREATH_ATTACK_TYPE_H
#include "breath_attack_type.h"
#endif
#ifndef DF_INTERACTION_TARGET_H
#include "interaction_target.h"
#endif
namespace df {
  struct DFHACK_EXPORT interaction_target_materialst : interaction_target {
    std::string material_str[3];
    int16_t anon_1;
    int32_t anon_2;
    int16_t anon_3;
    df::breath_attack_type breath_attack_type;
    union T_restrictions {
      uint32_t whole;
      struct {
        uint32_t CONTEXT_MATERIAL : 1;
      } bits;
      enum Shift {
        shift_CONTEXT_MATERIAL = 0
      };
      enum Mask : uint32_t {
        mask_CONTEXT_MATERIAL = 0x1U
      };
      T_restrictions(uint32_t whole_ = 0) : whole(whole_) {};
    };
    T_restrictions restrictions;
    static virtual_identity _identity;
  protected:
    interaction_target_materialst(virtual_identity *_id = &interaction_target_materialst::_identity);
    friend void *df::allocator_fn<interaction_target_materialst>(void*,const void*);
  };
  template<> struct DFHACK_EXPORT bitfield_traits<interaction_target_materialst::T_restrictions> {
    typedef uint32_t base_type;
    typedef interaction_target_materialst::T_restrictions bitfield_type;
    static const int bit_count = sizeof(base_type)*8;
    static const bitfield_item_info bits[bit_count];
  };
  template<> struct DFHACK_EXPORT identity_traits<interaction_target_materialst::T_restrictions> {
    static bitfield_identity identity;
    static bitfield_identity *get() { return &identity; }
  };
}
#endif
