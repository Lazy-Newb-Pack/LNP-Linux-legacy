/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_INIT_DISPLAY_FLAGS_H
#define DF_INIT_DISPLAY_FLAGS_H
namespace df {
  namespace enums {
    namespace init_display_flags {
      enum init_display_flags : int32_t {
        USE_GRAPHICS,
        BLACK_SPACE,
        PARTIAL_PRINT,
        FRAME_BUFFER,
        SINGLE_BUFFER,
        ACCUM_BUFFER,
        VBO,
        RENDER_2D,
        RENDER_2DHW,
        RENDER_2DASYNC,
        UNUSED_01_08,
        TEXT,
        SHADER,
        NOT_RESIZABLE,
        ARB_SYNC
      };
    }
  }
  using enums::init_display_flags::init_display_flags;
  template<> struct DFHACK_EXPORT identity_traits<init_display_flags> {
    static enum_identity identity;
    static enum_identity *get() { return &identity; }
  };
  template<> struct DFHACK_EXPORT enum_traits<init_display_flags> {
    typedef int32_t base_type;
    typedef init_display_flags enum_type;
    static const base_type first_item_value = 0;
    static const base_type last_item_value = 14;
    static inline bool is_valid(enum_type value) {
      return (base_type(value) >= first_item_value && base_type(value) <= last_item_value);
    }
    static const enum_type first_item = (enum_type)first_item_value;
    static const enum_type last_item = (enum_type)last_item_value;
    static const char *const key_table[15];
  };
}
#endif
