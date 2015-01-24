/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_ERA_TYPE_H
#define DF_ERA_TYPE_H
namespace df {
  namespace enums {
    namespace era_type {
      enum era_type : int16_t {
        ThreePowers,
        TwoPowers,
        OnePower,
        Myth,
        Legends,
        Twilight,
        FairyTales,
        Race,
        Heroes,
        Golden,
        Death,
        Civilization,
        Emptiness
      };
    }
  }
  using enums::era_type::era_type;
  template<> struct DFHACK_EXPORT identity_traits<era_type> {
    static enum_identity identity;
    static enum_identity *get() { return &identity; }
  };
  template<> struct DFHACK_EXPORT enum_traits<era_type> {
    typedef int16_t base_type;
    typedef era_type enum_type;
    static const base_type first_item_value = 0;
    static const base_type last_item_value = 12;
    static inline bool is_valid(enum_type value) {
      return (base_type(value) >= first_item_value && base_type(value) <= last_item_value);
    }
    static const enum_type first_item = (enum_type)first_item_value;
    static const enum_type last_item = (enum_type)last_item_value;
    static const char *const key_table[13];
  };
}
#endif
