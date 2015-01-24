/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_GAME_MODE_H
#define DF_GAME_MODE_H
namespace df {
  namespace enums {
    namespace game_mode {
      enum game_mode : int32_t {
        DWARF,
        ADVENTURE,
        num,
        NONE
      };
    }
  }
  using enums::game_mode::game_mode;
  template<> struct DFHACK_EXPORT identity_traits<game_mode> {
    static enum_identity identity;
    static enum_identity *get() { return &identity; }
  };
  template<> struct DFHACK_EXPORT enum_traits<game_mode> {
    typedef int32_t base_type;
    typedef game_mode enum_type;
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
