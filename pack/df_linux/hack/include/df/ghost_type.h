/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_GHOST_TYPE_H
#define DF_GHOST_TYPE_H
namespace df {
  namespace enums {
    namespace ghost_type {
      enum ghost_type : int16_t {
        MurderousGhost,
        SadisticGhost,
        SecretivePoltergeist,
        EnergeticPoltergeist,
        AngryGhost,
        ViolentGhost,
        MoaningSpirit,
        HowlingSpirit,
        TroublesomePoltergeist,
        RestlessHaunt,
        ForlornHaunt
      };
    }
  }
  using enums::ghost_type::ghost_type;
  template<> struct DFHACK_EXPORT identity_traits<ghost_type> {
    static enum_identity identity;
    static enum_identity *get() { return &identity; }
  };
  template<> struct DFHACK_EXPORT enum_traits<ghost_type> {
    typedef int16_t base_type;
    typedef ghost_type enum_type;
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
