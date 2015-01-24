/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_UNIT_ACTION_TYPE_H
#define DF_UNIT_ACTION_TYPE_H
namespace df {
  namespace enums {
    namespace unit_action_type {
      enum unit_action_type : int32_t {
        None = -1,
        Move,
        Attack,
        Jump,
        HoldTerrain,
        ReleaseTerrain,
        Climb,
        Job,
        Talk,
        Unsteady,
        Parry,
        Block,
        Dodge,
        Recover,
        StandUp,
        LieDown,
        Job2,
        PushObject,
        SuckBlood,
        HoldItem,
        ReleaseItem
      };
    }
  }
  using enums::unit_action_type::unit_action_type;
  template<> struct DFHACK_EXPORT identity_traits<unit_action_type> {
    static enum_identity identity;
    static enum_identity *get() { return &identity; }
  };
  template<> struct DFHACK_EXPORT enum_traits<unit_action_type> {
    typedef int32_t base_type;
    typedef unit_action_type enum_type;
    static const base_type first_item_value = -1;
    static const base_type last_item_value = 19;
    static inline bool is_valid(enum_type value) {
      return (base_type(value) >= first_item_value && base_type(value) <= last_item_value);
    }
    static const enum_type first_item = (enum_type)first_item_value;
    static const enum_type last_item = (enum_type)last_item_value;
    static const char *const key_table[21];
  };
}
#endif
