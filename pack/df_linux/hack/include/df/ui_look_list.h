/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_UI_LOOK_LIST_H
#define DF_UI_LOOK_LIST_H
#ifndef DF_ITEM_TYPE_H
#include "item_type.h"
#endif
#ifndef DF_MATTER_STATE_H
#include "matter_state.h"
#endif
namespace df {
  struct building;
  struct flow_info;
  struct item;
  struct unit;
  struct vermin;
  struct DFHACK_EXPORT ui_look_list {
    struct DFHACK_EXPORT T_items {
      enum T_type : int16_t {
        Item,
        Floor,
        Unit,
        Building,
        Vermin,
        Flow,
        Campfire,
        Spatter,
        BuildingItem,
        Fire,
        Water,
        Magma,
        Spoor
      };
      T_type type;
      df::item_type spatter_item_type;
      int16_t spatter_item_subtype;
      int16_t spatter_mat_type;
      int32_t spatter_mat_index;
      df::matter_state spatter_mat_state;
      union DFHACK_EXPORT {
        df::item* item;
        df::unit* unit;
        df::building* building;
        df::vermin* vermin;
        df::flow_info* flow;
        int8_t spatter_size; /*!< also water/magma depth+flags */
      };
      int16_t anon_1;
      int16_t anon_2;
      int16_t anon_3;
      static struct_identity _identity;
    public:
      T_items();
    };
    std::vector<T_items* > items;
    static struct_identity _identity;
  public:
    ui_look_list();
  };
  template<> struct DFHACK_EXPORT identity_traits<ui_look_list::T_items::T_type> {
    static enum_identity identity;
    static enum_identity *get() { return &identity; }
  };
  template<> struct DFHACK_EXPORT enum_traits<ui_look_list::T_items::T_type> {
    typedef int16_t base_type;
    typedef ui_look_list::T_items::T_type enum_type;
    static const base_type first_item_value = 0;
    static const base_type last_item_value = 12;
    static inline bool is_valid(enum_type value) {
      return (base_type(value) >= first_item_value && base_type(value) <= last_item_value);
    }
    static const enum_type first_item = (enum_type)first_item_value;
    static const enum_type last_item = (enum_type)last_item_value;
    static const char *const key_table[13];
  };
}
#endif
