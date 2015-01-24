/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_PLANT_H
#define DF_PLANT_H
#ifndef DF_COORD_H
#include "coord.h"
#endif
#ifndef DF_PLANT_FLAGS_H
#include "plant_flags.h"
#endif
namespace df {
  struct plant_tree_info;
  struct spatter_common;
  struct DFHACK_EXPORT plant {
    df::plant_flags flags;
    int16_t material;
    df::coord pos;
    int32_t grow_counter;
    union T_damage_flags {
      uint32_t whole;
      struct {
        uint32_t is_burning : 1;
        uint32_t is_drowning : 1;
        uint32_t anon_1 : 1;
      } bits;
      enum Shift {
        shift_is_burning = 0,
        shift_is_drowning = 1,
        shift_anon_1 = 2
      };
      enum Mask : uint32_t {
        mask_is_burning = 0x1U,
        mask_is_drowning = 0x2U,
        mask_anon_1 = 0x4U
      };
      T_damage_flags(uint32_t whole_ = 0) : whole(whole_) {};
    };
    T_damage_flags damage_flags;
    int32_t hitpoints;
    int16_t update_order;
    int32_t site_id;
    int32_t srb_id;
    std::vector<df::spatter_common* > contaminants;
    df::plant_tree_info* tree_info;
    static struct_identity _identity;
    static std::vector<plant*> &get_vector();
    static plant *find(int id);
  public:
    plant();
  };
  template<> struct DFHACK_EXPORT bitfield_traits<plant::T_damage_flags> {
    typedef uint32_t base_type;
    typedef plant::T_damage_flags bitfield_type;
    static const int bit_count = sizeof(base_type)*8;
    static const bitfield_item_info bits[bit_count];
  };
  template<> struct DFHACK_EXPORT identity_traits<plant::T_damage_flags> {
    static bitfield_identity identity;
    static bitfield_identity *get() { return &identity; }
  };
}
#endif
