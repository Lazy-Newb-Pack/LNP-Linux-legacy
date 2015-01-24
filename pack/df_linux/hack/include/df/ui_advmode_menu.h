/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_UI_ADVMODE_MENU_H
#define DF_UI_ADVMODE_MENU_H
namespace df {
  namespace enums {
    namespace ui_advmode_menu {
      enum ui_advmode_menu : int16_t {
        Default = 0,
        Look,
        Talk,
        Inventory,
        Drop,
        ThrowItem,
        Wear,
        Remove,
        Interact,
        Put,
        PutContainer,
        Eat,
        ThrowAim,
        Unk13,
        Get,
        Fire,
        CombatPrefs,
        Companions,
        MovementPrefs,
        InteractAction,
        MoveCarefully,
        Announcements,
        Attack,
        UseBuilding,
        Travel,
        Unk25,
        WrestleTarget,
        Unk27,
        Unk28,
        Sleep,
        Unk30,
        AttackBodypart,
        AttackType,
        Unk33,
        Unk34,
        Unk35
      };
    }
  }
  using enums::ui_advmode_menu::ui_advmode_menu;
  template<> struct DFHACK_EXPORT identity_traits<ui_advmode_menu> {
    static enum_identity identity;
    static enum_identity *get() { return &identity; }
  };
  template<> struct DFHACK_EXPORT enum_traits<ui_advmode_menu> {
    typedef int16_t base_type;
    typedef ui_advmode_menu enum_type;
    static const base_type first_item_value = 0;
    static const base_type last_item_value = 35;
    static inline bool is_valid(enum_type value) {
      return (base_type(value) >= first_item_value && base_type(value) <= last_item_value);
    }
    static const enum_type first_item = (enum_type)first_item_value;
    static const enum_type last_item = (enum_type)last_item_value;
    static const char *const key_table[36];
  };
}
#endif
