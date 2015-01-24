/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_BUILTIN_MATS_H
#define DF_BUILTIN_MATS_H
namespace df {
  namespace enums {
    namespace builtin_mats {
      enum builtin_mats : int32_t {
        INORGANIC,
        AMBER,
        CORAL,
        GLASS_GREEN,
        GLASS_CLEAR,
        GLASS_CRYSTAL,
        WATER,
        COAL,
        POTASH,
        ASH,
        PEARLASH,
        LYE,
        MUD,
        VOMIT,
        SALT,
        FILTH_B,
        FILTH_Y,
        UNKNOWN_SUBSTANCE,
        GRIME
      };
    }
  }
  using enums::builtin_mats::builtin_mats;
  template<> struct DFHACK_EXPORT identity_traits<builtin_mats> {
    static enum_identity identity;
    static enum_identity *get() { return &identity; }
  };
  template<> struct DFHACK_EXPORT enum_traits<builtin_mats> {
    typedef int32_t base_type;
    typedef builtin_mats enum_type;
    static const base_type first_item_value = 0;
    static const base_type last_item_value = 18;
    static inline bool is_valid(enum_type value) {
      return (base_type(value) >= first_item_value && base_type(value) <= last_item_value);
    }
    static const enum_type first_item = (enum_type)first_item_value;
    static const enum_type last_item = (enum_type)last_item_value;
    static const char *const key_table[19];
  };
}
#endif
