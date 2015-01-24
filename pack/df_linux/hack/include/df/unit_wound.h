/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_UNIT_WOUND_H
#define DF_UNIT_WOUND_H
#ifndef DF_WOUND_DAMAGE_FLAGS1_H
#include "wound_damage_flags1.h"
#endif
#ifndef DF_WOUND_DAMAGE_FLAGS2_H
#include "wound_damage_flags2.h"
#endif
#ifndef DF_WOUND_EFFECT_TYPE_H
#include "wound_effect_type.h"
#endif
namespace df {
  struct wound_curse_info;
  struct DFHACK_EXPORT unit_wound {
    int32_t id;
    struct DFHACK_EXPORT T_parts {
      int32_t global_layer_idx;
      int16_t body_part_id;
      int16_t layer_idx;
      int32_t contact_area;
      int16_t surface_perc;
      int32_t strain;
      std::vector<int16_t > effect_perc1;
      std::vector<int16_t > effect_perc2;
      std::vector<df::wound_effect_type > effect_type;
      int16_t edged_curve_perc;
      df::wound_damage_flags1 flags1;
      df::wound_damage_flags2 flags2;
      int32_t bleeding;
      int32_t pain;
      int32_t nausea;
      int32_t dizziness;
      int32_t paralysis;
      int32_t numbness;
      int32_t swelling;
      int32_t impaired;
      int16_t cur_penetration_perc;
      int16_t max_penetration_perc;
      int32_t jammed_layer_idx; /*!< in compound fracture */
      int32_t unk_v406_1; /*!< v0.40.06 */
      static struct_identity _identity;
    public:
      T_parts();
    };
    std::vector<T_parts* > parts;
    int32_t age;
    int32_t attacker_unit_id;
    int32_t attacker_hist_figure_id;
    union T_flags {
      uint32_t whole;
      struct {
        uint32_t severed_part : 1;
        uint32_t mortal_wound : 1;
        uint32_t stuck_weapon : 1;
        uint32_t diagnosed : 1;
        uint32_t sutured : 1;
        uint32_t infection : 1;
      } bits;
      enum Shift {
        shift_severed_part = 0,
        shift_mortal_wound = 1,
        shift_stuck_weapon = 2,
        shift_diagnosed = 3,
        shift_sutured = 4,
        shift_infection = 5
      };
      enum Mask : uint32_t {
        mask_severed_part = 0x1U,
        mask_mortal_wound = 0x2U,
        mask_stuck_weapon = 0x4U,
        mask_diagnosed = 0x8U,
        mask_sutured = 0x10U,
        mask_infection = 0x20U
      };
      T_flags(uint32_t whole_ = 0) : whole(whole_) {};
    };
    T_flags flags;
    int32_t syndrome_id;
    int32_t pain;
    int32_t nausea;
    int32_t dizziness;
    int32_t paralysis;
    int32_t numbness;
    int32_t fever;
    df::wound_curse_info* curse;
    static struct_identity _identity;
    typedef unit_wound* key_pointer_type;
    typedef int32_t key_field_type;
    static int binsearch_index(const std::vector<unit_wound*> &vec, key_field_type key, bool exact = true);
    static int binsearch_index(const std::vector<unit_wound*> &vec, key_pointer_type key, bool exact = true);
  public:
    unit_wound();
  };
  template<> struct DFHACK_EXPORT bitfield_traits<unit_wound::T_flags> {
    typedef uint32_t base_type;
    typedef unit_wound::T_flags bitfield_type;
    static const int bit_count = sizeof(base_type)*8;
    static const bitfield_item_info bits[bit_count];
  };
  template<> struct DFHACK_EXPORT identity_traits<unit_wound::T_flags> {
    static bitfield_identity identity;
    static bitfield_identity *get() { return &identity; }
  };
}
#endif
