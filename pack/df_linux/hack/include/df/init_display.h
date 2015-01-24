/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_INIT_DISPLAY_H
#define DF_INIT_DISPLAY_H
#ifndef DF_INIT_DISPLAY_FLAGS_H
#include "init_display_flags.h"
#endif
namespace df {
  struct DFHACK_EXPORT init_display {
    BitArray<df::init_display_flags> flag;
    enum T_windowed : int32_t {
      True,
      False,
      Prompt
    };
    T_windowed windowed;
    int32_t grid_x;
    int32_t grid_y;
    int32_t desired_fullscreen_width;
    int32_t desired_fullscreen_height;
    int32_t desired_windowed_width;
    int32_t desired_windowed_height;
    int8_t partial_print_count;
    static struct_identity _identity;
  public:
    init_display();
  };
  template<> struct DFHACK_EXPORT identity_traits<init_display::T_windowed> {
    static enum_identity identity;
    static enum_identity *get() { return &identity; }
  };
  template<> struct DFHACK_EXPORT enum_traits<init_display::T_windowed> {
    typedef int32_t base_type;
    typedef init_display::T_windowed enum_type;
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
