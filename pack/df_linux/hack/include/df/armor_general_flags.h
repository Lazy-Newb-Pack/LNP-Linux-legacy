/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_ARMOR_GENERAL_FLAGS_H
#define DF_ARMOR_GENERAL_FLAGS_H
namespace df {
  namespace enums {
    namespace armor_general_flags {
      enum armor_general_flags : int32_t {
        SOFT,
        HARD,
        METAL,
        BARRED,
        SCALED,
        LEATHER,
        SHAPED,
        CHAIN_METAL_TEXT,
        STRUCTURAL_ELASTICITY_WOVEN_THREAD,
        STRUCTURAL_ELASTICITY_CHAIN_METAL,
        STRUCTURAL_ELASTICITY_CHAIN_ALL
      };
    }
  }
  using enums::armor_general_flags::armor_general_flags;
  template<> struct DFHACK_EXPORT identity_traits<armor_general_flags> {
    static enum_identity identity;
    static enum_identity *get() { return &identity; }
  };
  template<> struct DFHACK_EXPORT enum_traits<armor_general_flags> {
    typedef int32_t base_type;
    typedef armor_general_flags enum_type;
    static const base_type first_item_value = 0;
    static const base_type last_item_value = 10;
    static inline bool is_valid(enum_type value) {
      return (base_type(value) >= first_item_value && base_type(value) <= last_item_value);
    }
    static const enum_type first_item = (enum_type)first_item_value;
    static const enum_type last_item = (enum_type)last_item_value;
    static const char *const key_table[11];
  };
}
#endif
