/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_INIT_FONT_H
#define DF_INIT_FONT_H
namespace df {
  struct DFHACK_EXPORT init_font {
    int32_t small_font_texpos[256];
    int32_t large_font_texpos[256];
    int32_t small_font_datapos[256];
    int32_t large_font_datapos[256];
    float small_font_adjx;
    float small_font_adjy;
    float large_font_adjx;
    float large_font_adjy;
    int32_t small_font_dispx;
    int32_t small_font_dispy;
    int32_t large_font_dispx;
    int32_t large_font_dispy;
    enum T_use_ttf : int32_t {
      TTF_OFF,
      TTF_ON,
      TTF_AUTO
    };
    T_use_ttf use_ttf;
    int32_t ttf_limit;
    static struct_identity _identity;
  public:
    init_font();
  };
  template<> struct DFHACK_EXPORT identity_traits<init_font::T_use_ttf> {
    static enum_identity identity;
    static enum_identity *get() { return &identity; }
  };
  template<> struct DFHACK_EXPORT enum_traits<init_font::T_use_ttf> {
    typedef int32_t base_type;
    typedef init_font::T_use_ttf enum_type;
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
