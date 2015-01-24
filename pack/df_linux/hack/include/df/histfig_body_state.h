/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_HISTFIG_BODY_STATE_H
#define DF_HISTFIG_BODY_STATE_H
namespace df {
  namespace enums {
    namespace histfig_body_state {
      enum histfig_body_state : int32_t {
        Active,
        BuriedAtSite,
        UnburiedAtBattlefield,
        UnburiedAtSubregion,
        UnburiedAtFeatureLayer,
        EntombedAtSite,
        UnburiedAtSite
      };
    }
  }
  using enums::histfig_body_state::histfig_body_state;
  template<> struct DFHACK_EXPORT identity_traits<histfig_body_state> {
    static enum_identity identity;
    static enum_identity *get() { return &identity; }
  };
  template<> struct DFHACK_EXPORT enum_traits<histfig_body_state> {
    typedef int32_t base_type;
    typedef histfig_body_state enum_type;
    static const base_type first_item_value = 0;
    static const base_type last_item_value = 6;
    static inline bool is_valid(enum_type value) {
      return (base_type(value) >= first_item_value && base_type(value) <= last_item_value);
    }
    static const enum_type first_item = (enum_type)first_item_value;
    static const enum_type last_item = (enum_type)last_item_value;
    static const char *const key_table[7];
  };
}
#endif
