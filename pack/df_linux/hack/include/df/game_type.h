/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_GAME_TYPE_H
#define DF_GAME_TYPE_H
namespace df {
  namespace enums {
    namespace game_type {
      enum game_type : int32_t {
        DWARF_MAIN,
        ADVENTURE_MAIN,
        VIEW_LEGENDS,
        DWARF_RECLAIM,
        DWARF_ARENA,
        ADVENTURE_ARENA,
        ADVENTURE_DUNGEON,
        DWARF_TUTORIAL,
        DWARF_UNRETIRE,
        ADVENTURE_WORLD_DEBUG,
        num,
        NONE
      };
    }
  }
  using enums::game_type::game_type;
  template<> struct DFHACK_EXPORT identity_traits<game_type> {
    static enum_identity identity;
    static enum_identity *get() { return &identity; }
  };
  template<> struct DFHACK_EXPORT enum_traits<game_type> {
    typedef int32_t base_type;
    typedef game_type enum_type;
    static const base_type first_item_value = 0;
    static const base_type last_item_value = 11;
    static inline bool is_valid(enum_type value) {
      return (base_type(value) >= first_item_value && base_type(value) <= last_item_value);
    }
    static const enum_type first_item = (enum_type)first_item_value;
    static const enum_type last_item = (enum_type)last_item_value;
    static const char *const key_table[12];
  };
}
#endif
