/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_TISSUE_FLAGS_H
#define DF_TISSUE_FLAGS_H
namespace df {
  namespace enums {
    namespace tissue_flags {
      enum tissue_flags : int32_t {
        THICKENS_ON_STRENGTH,
        THICKENS_ON_ENERGY_STORAGE,
        ARTERIES,
        SCARS,
        STRUCTURAL,
        NERVOUS,
        THOUGHT,
        MUSCULAR,
        SMELL,
        HEAR,
        FLIGHT,
        BREATHE,
        SIGHT,
        COSMETIC,
        CONNECTS,
        FUNCTIONAL,
        MAJOR_ARTERIES,
        TISSUE_LEAKS,
        STYLEABLE,
        CONNECTIVE_TISSUE_ANCHOR,
        SETTABLE,
        SPLINTABLE
      };
    }
  }
  using enums::tissue_flags::tissue_flags;
  template<> struct DFHACK_EXPORT identity_traits<tissue_flags> {
    static enum_identity identity;
    static enum_identity *get() { return &identity; }
  };
  template<> struct DFHACK_EXPORT enum_traits<tissue_flags> {
    typedef int32_t base_type;
    typedef tissue_flags enum_type;
    static const base_type first_item_value = 0;
    static const base_type last_item_value = 21;
    static inline bool is_valid(enum_type value) {
      return (base_type(value) >= first_item_value && base_type(value) <= last_item_value);
    }
    static const enum_type first_item = (enum_type)first_item_value;
    static const enum_type last_item = (enum_type)last_item_value;
    static const char *const key_table[22];
  };
}
#endif
