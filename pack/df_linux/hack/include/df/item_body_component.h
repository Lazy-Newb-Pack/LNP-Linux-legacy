/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_ITEM_BODY_COMPONENT_H
#define DF_ITEM_BODY_COMPONENT_H
#ifndef DF_BODY_COMPONENT_INFO_H
#include "body_component_info.h"
#endif
#ifndef DF_BODY_SIZE_INFO_H
#include "body_size_info.h"
#endif
#ifndef DF_ITEM_ACTUAL_H
#include "item_actual.h"
#endif
namespace df {
  struct unit_wound;
  struct DFHACK_EXPORT item_body_component : item_actual {
    int16_t race;
    int32_t hist_figure_id;
    int32_t unit_id;
    int16_t caste;
    int8_t sex; /*!< -1 n/a, 0 female, 1 male */
    int16_t race2;
    int16_t caste2;
    int32_t rot_timer;
    int8_t unk_8c;
    struct DFHACK_EXPORT T_body {
      std::vector<df::unit_wound* > wounds;
      int32_t unk_100[10];
      int32_t unk_c8;
      df::body_component_info components;
      int32_t physical_attr_value[6];
      int32_t physical_attr_unk2[6];
      df::body_size_info size_info;
      std::vector<int32_t > body_part_relsize; /*!< =unit.enemy.body_part_relsize */
      std::vector<int32_t > body_modifiers;
      std::vector<int32_t > bp_modifiers;
      int32_t size_modifier; /*!< =unit.appearance.size_modifier */
      static struct_identity _identity;
    public:
      T_body();
    };
    T_body body;
    int32_t birth_year;
    int32_t birth_time;
    int32_t curse_year; /*!< v0.34.01 */
    int32_t curse_time; /*!< v0.34.01 */
    int32_t birth_year_bias; /*!< v0.34.01 */
    int32_t birth_time_bias; /*!< v0.34.01 */
    int32_t death_year;
    int32_t death_time;
    struct DFHACK_EXPORT T_appearance {
      std::vector<int32_t > colors;
      std::vector<int16_t > unk_1e8;
      std::vector<int32_t > unk_1f8;
      std::vector<int32_t > unk_208;
      std::vector<int32_t > unk_218;
      static struct_identity _identity;
    public:
      T_appearance();
    };
    T_appearance appearance;
    int32_t blood_count;
    int32_t stored_fat;
    int32_t hist_figure_id2;
    int32_t anon_1; /*!< v0.34.01, actual offset unknown */
    int32_t unit_id2;
    union T_corpse_flags {
      uint32_t whole;
      struct {
        uint32_t unbutchered : 1;
        uint32_t anon_1 : 1;
        uint32_t anon_2 : 1;
        uint32_t anon_3 : 1;
        uint32_t bone : 1;
        uint32_t shell : 1;
        uint32_t anon_4 : 1;
        uint32_t anon_5 : 1;
        uint32_t anon_6 : 1;
        uint32_t anon_7 : 1;
        uint32_t anon_8 : 1;
        uint32_t anon_9 : 1;
        uint32_t skull : 1;
        uint32_t separated_part : 1; /*!< ? */
        uint32_t hair_wool : 1;
        uint32_t yarn : 1;
      } bits;
      enum Shift {
        shift_unbutchered = 0,
        shift_anon_1 = 1,
        shift_anon_2 = 2,
        shift_anon_3 = 3,
        shift_bone = 4,
        shift_shell = 5,
        shift_anon_4 = 6,
        shift_anon_5 = 7,
        shift_anon_6 = 8,
        shift_anon_7 = 9,
        shift_anon_8 = 10,
        shift_anon_9 = 11,
        shift_skull = 12,
        shift_separated_part = 13,
        shift_hair_wool = 14,
        shift_yarn = 15
      };
      enum Mask : uint32_t {
        mask_unbutchered = 0x1U,
        mask_anon_1 = 0x2U,
        mask_anon_2 = 0x4U,
        mask_anon_3 = 0x8U,
        mask_bone = 0x10U,
        mask_shell = 0x20U,
        mask_anon_4 = 0x40U,
        mask_anon_5 = 0x80U,
        mask_anon_6 = 0x100U,
        mask_anon_7 = 0x200U,
        mask_anon_8 = 0x400U,
        mask_anon_9 = 0x800U,
        mask_skull = 0x1000U,
        mask_separated_part = 0x2000U,
        mask_hair_wool = 0x4000U,
        mask_yarn = 0x8000U
      };
      T_corpse_flags(uint32_t whole_ = 0) : whole(whole_) {};
    };
    T_corpse_flags corpse_flags;
    int32_t material_amount[19];
    struct DFHACK_EXPORT T_bone1 {
      int16_t mat_type;
      int32_t mat_index;
      static struct_identity _identity;
    public:
      T_bone1();
    };
    T_bone1 bone1;
    struct DFHACK_EXPORT T_bone2 {
      int16_t mat_type;
      int32_t mat_index;
      static struct_identity _identity;
    public:
      T_bone2();
    };
    T_bone2 bone2;
    static virtual_identity _identity;
  protected:
    item_body_component(virtual_identity *_id = &item_body_component::_identity);
    friend void *df::allocator_fn<item_body_component>(void*,const void*);
  };
  template<> struct DFHACK_EXPORT bitfield_traits<item_body_component::T_corpse_flags> {
    typedef uint32_t base_type;
    typedef item_body_component::T_corpse_flags bitfield_type;
    static const int bit_count = sizeof(base_type)*8;
    static const bitfield_item_info bits[bit_count];
  };
  template<> struct DFHACK_EXPORT identity_traits<item_body_component::T_corpse_flags> {
    static bitfield_identity identity;
    static bitfield_identity *get() { return &identity; }
  };
}
#endif
