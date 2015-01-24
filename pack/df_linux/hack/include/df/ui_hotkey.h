/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_UI_HOTKEY_H
#define DF_UI_HOTKEY_H
namespace df {
  struct DFHACK_EXPORT ui_hotkey {
    std::string name;
    enum T_cmd : int16_t {
      None = -1,
      Zoom,
      FollowUnit,
      FollowItem
    };
    T_cmd cmd;
    int32_t x;
    int32_t y;
    int32_t z;
    union DFHACK_EXPORT {
      int32_t unit_id; /*!< v0.34.08 */
      int32_t item_id; /*!< v0.34.08 */
    };
    static struct_identity _identity;
  public:
    ui_hotkey();
  };
  template<> struct DFHACK_EXPORT identity_traits<ui_hotkey::T_cmd> {
    static enum_identity identity;
    static enum_identity *get() { return &identity; }
  };
  template<> struct DFHACK_EXPORT enum_traits<ui_hotkey::T_cmd> {
    typedef int16_t base_type;
    typedef ui_hotkey::T_cmd enum_type;
    static const base_type first_item_value = -1;
    static const base_type last_item_value = 2;
    static inline bool is_valid(enum_type value) {
      return (base_type(value) >= first_item_value && base_type(value) <= last_item_value);
    }
    static const enum_type first_item = (enum_type)first_item_value;
    static const enum_type last_item = (enum_type)last_item_value;
    static const char *const key_table[4];
  };
}
#endif
