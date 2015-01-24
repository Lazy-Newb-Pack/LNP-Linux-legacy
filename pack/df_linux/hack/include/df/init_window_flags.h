/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_INIT_WINDOW_FLAGS_H
#define DF_INIT_WINDOW_FLAGS_H
namespace df {
  namespace enums {
    namespace init_window_flags {
      enum init_window_flags : int32_t {
        TOPMOST,
        VSYNC_ON,
        VSYNC_OFF,
        TEXTURE_LINEAR
      };
    }
  }
  using enums::init_window_flags::init_window_flags;
  template<> struct DFHACK_EXPORT identity_traits<init_window_flags> {
    static enum_identity identity;
    static enum_identity *get() { return &identity; }
  };
  template<> struct DFHACK_EXPORT enum_traits<init_window_flags> {
    typedef int32_t base_type;
    typedef init_window_flags enum_type;
    static const base_type first_item_value = 0;
    static const base_type last_item_value = 3;
    static inline bool is_valid(enum_type value) {
      return (base_type(value) >= first_item_value && base_type(value) <= last_item_value);
    }
    static const enum_type first_item = (enum_type)first_item_value;
    static const enum_type last_item = (enum_type)last_item_value;
    static const char *const key_table[4];
  };
}
#endif
