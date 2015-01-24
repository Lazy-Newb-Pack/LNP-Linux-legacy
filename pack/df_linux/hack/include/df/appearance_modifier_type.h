/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_APPEARANCE_MODIFIER_TYPE_H
#define DF_APPEARANCE_MODIFIER_TYPE_H
namespace df {
  namespace enums {
    namespace appearance_modifier_type {
      enum appearance_modifier_type : int16_t {
        HEIGHT,
        BROADNESS,
        LENGTH,
        CLOSE_SET,
        DEEP_SET,
        HIGH_POSITION,
        LARGE_IRIS,
        WRINKLY,
        CURLY,
        CONVEX,
        DENSE,
        THICKNESS,
        UPTURNED,
        SPLAYED_OUT,
        HANGING_LOBES,
        GAPS,
        HIGH_CHEEKBONES,
        BROAD_CHIN,
        JUTTING_CHIN,
        SQUARE_CHIN,
        ROUND_VS_NARROW,
        GREASY,
        DEEP_VOICE,
        RASPY_VOICE
      };
    }
  }
  using enums::appearance_modifier_type::appearance_modifier_type;
  template<> struct DFHACK_EXPORT identity_traits<appearance_modifier_type> {
    static enum_identity identity;
    static enum_identity *get() { return &identity; }
  };
  template<> struct DFHACK_EXPORT enum_traits<appearance_modifier_type> {
    typedef int16_t base_type;
    typedef appearance_modifier_type enum_type;
    static const base_type first_item_value = 0;
    static const base_type last_item_value = 23;
    static inline bool is_valid(enum_type value) {
      return (base_type(value) >= first_item_value && base_type(value) <= last_item_value);
    }
    static const enum_type first_item = (enum_type)first_item_value;
    static const enum_type last_item = (enum_type)last_item_value;
    static const char *const key_table[24];
  };
}
#endif
