/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_ZOOM_COMMANDS_H
#define DF_ZOOM_COMMANDS_H
namespace df {
  namespace enums {
    namespace zoom_commands {
      enum zoom_commands : int32_t {
        zoom_in,
        zoom_out,
        zoom_reset,
        zoom_fullscreen,
        zoom_resetgrid
      };
    }
  }
  using enums::zoom_commands::zoom_commands;
  template<> struct DFHACK_EXPORT identity_traits<zoom_commands> {
    static enum_identity identity;
    static enum_identity *get() { return &identity; }
  };
  template<> struct DFHACK_EXPORT enum_traits<zoom_commands> {
    typedef int32_t base_type;
    typedef zoom_commands enum_type;
    static const base_type first_item_value = 0;
    static const base_type last_item_value = 4;
    static inline bool is_valid(enum_type value) {
      return (base_type(value) >= first_item_value && base_type(value) <= last_item_value);
    }
    static const enum_type first_item = (enum_type)first_item_value;
    static const enum_type last_item = (enum_type)last_item_value;
    static const char *const key_table[5];
  };
}
#endif
