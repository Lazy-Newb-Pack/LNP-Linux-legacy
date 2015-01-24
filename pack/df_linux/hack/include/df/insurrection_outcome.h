/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_INSURRECTION_OUTCOME_H
#define DF_INSURRECTION_OUTCOME_H
namespace df {
  namespace enums {
    namespace insurrection_outcome {
      enum insurrection_outcome : int32_t {
        LeadershipOverthrown,
        PopulationGone,
        Crushed
      };
    }
  }
  using enums::insurrection_outcome::insurrection_outcome;
  template<> struct DFHACK_EXPORT identity_traits<insurrection_outcome> {
    static enum_identity identity;
    static enum_identity *get() { return &identity; }
  };
  template<> struct DFHACK_EXPORT enum_traits<insurrection_outcome> {
    typedef int32_t base_type;
    typedef insurrection_outcome enum_type;
    static const base_type first_item_value = 0;
    static const base_type last_item_value = 2;
    static inline bool is_valid(enum_type value) {
      return (base_type(value) >= first_item_value && base_type(value) <= last_item_value);
    }
    static const enum_type first_item = (enum_type)first_item_value;
    static const enum_type last_item = (enum_type)last_item_value;
    static const char *const key_table[3];
  };
}
#endif
