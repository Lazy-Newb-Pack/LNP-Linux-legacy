/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_INIT_INPUT_FLAGS_H
#define DF_INIT_INPUT_FLAGS_H
namespace df {
  namespace enums {
    namespace init_input_flags {
      enum init_input_flags : int32_t {
        MOUSE_OFF,
        MOUSE_PICTURE
      };
    }
  }
  using enums::init_input_flags::init_input_flags;
  template<> struct DFHACK_EXPORT identity_traits<init_input_flags> {
    static enum_identity identity;
    static enum_identity *get() { return &identity; }
  };
  template<> struct DFHACK_EXPORT enum_traits<init_input_flags> {
    typedef int32_t base_type;
    typedef init_input_flags enum_type;
    static const base_type first_item_value = 0;
    static const base_type last_item_value = 1;
    static inline bool is_valid(enum_type value) {
      return (base_type(value) >= first_item_value && base_type(value) <= last_item_value);
    }
    static const enum_type first_item = (enum_type)first_item_value;
    static const enum_type last_item = (enum_type)last_item_value;
    static const char *const key_table[2];
  };
}
#endif
