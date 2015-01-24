/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_UI_UNIT_VIEW_MODE_H
#define DF_UI_UNIT_VIEW_MODE_H
namespace df {
  struct DFHACK_EXPORT ui_unit_view_mode {
    enum T_value : int32_t {
      General,
      Inventory,
      Preferences,
      Wounds,
      PrefLabor,
      PrefDogs
    };
    T_value value;
    static struct_identity _identity;
  public:
    ui_unit_view_mode();
  };
  template<> struct DFHACK_EXPORT identity_traits<ui_unit_view_mode::T_value> {
    static enum_identity identity;
    static enum_identity *get() { return &identity; }
  };
  template<> struct DFHACK_EXPORT enum_traits<ui_unit_view_mode::T_value> {
    typedef int32_t base_type;
    typedef ui_unit_view_mode::T_value enum_type;
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
