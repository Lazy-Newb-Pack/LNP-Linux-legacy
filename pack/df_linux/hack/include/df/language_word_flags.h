/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_LANGUAGE_WORD_FLAGS_H
#define DF_LANGUAGE_WORD_FLAGS_H
namespace df {
  union language_word_flags {
    uint32_t whole;
    struct {
      uint32_t front_compound_noun_sing : 1;
      uint32_t front_compound_noun_plur : 1;
      uint32_t front_compound_adj : 1;
      uint32_t front_compound_prefix : 1;
      uint32_t rear_compound_noun_sing : 1;
      uint32_t rear_compound_noun_plur : 1;
      uint32_t rear_compound_adj : 1;
      uint32_t the_noun_sing : 1;
      uint32_t the_noun_plur : 1;
      uint32_t the_compound_noun_sing : 1;
      uint32_t the_compound_noun_plur : 1;
      uint32_t the_compound_adj : 1;
      uint32_t the_compound_prefix : 1;
      uint32_t of_noun_sing : 1;
      uint32_t of_noun_plur : 1;
      uint32_t standard_verb : 1;
    } bits;
    enum Shift {
      shift_front_compound_noun_sing = 0,
      shift_front_compound_noun_plur = 1,
      shift_front_compound_adj = 2,
      shift_front_compound_prefix = 3,
      shift_rear_compound_noun_sing = 4,
      shift_rear_compound_noun_plur = 5,
      shift_rear_compound_adj = 6,
      shift_the_noun_sing = 7,
      shift_the_noun_plur = 8,
      shift_the_compound_noun_sing = 9,
      shift_the_compound_noun_plur = 10,
      shift_the_compound_adj = 11,
      shift_the_compound_prefix = 12,
      shift_of_noun_sing = 13,
      shift_of_noun_plur = 14,
      shift_standard_verb = 15
    };
    enum Mask : uint32_t {
      mask_front_compound_noun_sing = 0x1U,
      mask_front_compound_noun_plur = 0x2U,
      mask_front_compound_adj = 0x4U,
      mask_front_compound_prefix = 0x8U,
      mask_rear_compound_noun_sing = 0x10U,
      mask_rear_compound_noun_plur = 0x20U,
      mask_rear_compound_adj = 0x40U,
      mask_the_noun_sing = 0x80U,
      mask_the_noun_plur = 0x100U,
      mask_the_compound_noun_sing = 0x200U,
      mask_the_compound_noun_plur = 0x400U,
      mask_the_compound_adj = 0x800U,
      mask_the_compound_prefix = 0x1000U,
      mask_of_noun_sing = 0x2000U,
      mask_of_noun_plur = 0x4000U,
      mask_standard_verb = 0x8000U
    };
    language_word_flags(uint32_t whole_ = 0) : whole(whole_) {};
  };
  template<> struct DFHACK_EXPORT bitfield_traits<language_word_flags> {
    typedef uint32_t base_type;
    typedef language_word_flags bitfield_type;
    static const int bit_count = sizeof(base_type)*8;
    static const bitfield_item_info bits[bit_count];
  };
  template<> struct DFHACK_EXPORT identity_traits<language_word_flags> {
    static bitfield_identity identity;
    static bitfield_identity *get() { return &identity; }
  };
}
#endif
