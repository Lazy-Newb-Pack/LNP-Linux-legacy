/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_GENERAL_REF_CREATUREST_H
#define DF_GENERAL_REF_CREATUREST_H
#ifndef DF_GENERAL_REF_H
#include "general_ref.h"
#endif
namespace df {
  struct DFHACK_EXPORT general_ref_creaturest : general_ref {
    int32_t race;
    int32_t caste;
    int32_t anon_1;
    int32_t anon_2;
    union T_flags {
      uint32_t whole;
      struct {
        uint32_t animated_corpse : 1;
        uint32_t ghostly : 1;
      } bits;
      enum Shift {
        shift_animated_corpse = 0,
        shift_ghostly = 1
      };
      enum Mask : uint32_t {
        mask_animated_corpse = 0x1U,
        mask_ghostly = 0x2U
      };
      T_flags(uint32_t whole_ = 0) : whole(whole_) {};
    };
    T_flags flags;
    static virtual_identity _identity;
  protected:
    general_ref_creaturest(virtual_identity *_id = &general_ref_creaturest::_identity);
    friend void *df::allocator_fn<general_ref_creaturest>(void*,const void*);
  };
  template<> struct DFHACK_EXPORT bitfield_traits<general_ref_creaturest::T_flags> {
    typedef uint32_t base_type;
    typedef general_ref_creaturest::T_flags bitfield_type;
    static const int bit_count = sizeof(base_type)*8;
    static const bitfield_item_info bits[bit_count];
  };
  template<> struct DFHACK_EXPORT identity_traits<general_ref_creaturest::T_flags> {
    static bitfield_identity identity;
    static bitfield_identity *get() { return &identity; }
  };
}
#endif
