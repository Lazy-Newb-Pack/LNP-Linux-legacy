/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_MATTER_STATE_H
#define DF_MATTER_STATE_H
namespace df {
  namespace enums {
    namespace matter_state {
      enum matter_state : int16_t {
        Solid,
        Liquid,
        Gas,
        Powder,
        Paste,
        Pressed
      };
    }
  }
  using enums::matter_state::matter_state;
  template<> struct DFHACK_EXPORT identity_traits<matter_state> {
    static enum_identity identity;
    static enum_identity *get() { return &identity; }
  };
  template<> struct DFHACK_EXPORT enum_traits<matter_state> {
    typedef int16_t base_type;
    typedef matter_state enum_type;
    static const base_type first_item_value = 0;
    static const base_type last_item_value = 5;
    static inline bool is_valid(enum_type value) {
      return (base_type(value) >= first_item_value && base_type(value) <= last_item_value);
    }
    static const enum_type first_item = (enum_type)first_item_value;
    static const enum_type last_item = (enum_type)last_item_value;
    static const char *const key_table[6];
  };
}
#endif
