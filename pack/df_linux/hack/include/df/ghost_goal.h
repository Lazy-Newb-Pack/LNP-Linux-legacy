/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_GHOST_GOAL_H
#define DF_GHOST_GOAL_H
namespace df {
  namespace enums {
    namespace ghost_goal {
      enum ghost_goal : int16_t {
        None = -1,
        ScareToDeath,
        Stun,
        Batter,
        Possess,
        MisplaceItem,
        Haunt,
        Torment,
        ToppleBuilding
      };
    }
  }
  using enums::ghost_goal::ghost_goal;
  template<> struct DFHACK_EXPORT identity_traits<ghost_goal> {
    static enum_identity identity;
    static enum_identity *get() { return &identity; }
  };
  template<> struct DFHACK_EXPORT enum_traits<ghost_goal> {
    typedef int16_t base_type;
    typedef ghost_goal enum_type;
    static const base_type first_item_value = -1;
    static const base_type last_item_value = 7;
    static inline bool is_valid(enum_type value) {
      return (base_type(value) >= first_item_value && base_type(value) <= last_item_value);
    }
    static const enum_type first_item = (enum_type)first_item_value;
    static const enum_type last_item = (enum_type)last_item_value;
    static const char *const key_table[9];
  };
}
#endif
