/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_GOAL_TYPE_H
#define DF_GOAL_TYPE_H
namespace df {
  namespace enums {
    namespace goal_type {
      enum goal_type : int32_t {
        STAY_ALIVE,
        MAINTAIN_ENTITY_STATUS,
        START_A_FAMILY,
        RULE_THE_WORLD,
        CREATE_A_GREAT_WORK_OF_ART,
        CRAFT_A_MASTERWORK,
        BRING_PEACE_TO_THE_WORLD,
        BECOME_A_LEGENDARY_WARRIOR,
        MASTER_A_SKILL,
        FALL_IN_LOVE,
        SEE_THE_GREAT_NATURAL_SITES,
        IMMORTALITY
      };
    }
  }
  using enums::goal_type::goal_type;
  template<> struct DFHACK_EXPORT identity_traits<goal_type> {
    static enum_identity identity;
    static enum_identity *get() { return &identity; }
  };
  template<> struct DFHACK_EXPORT enum_traits<goal_type> {
    typedef int32_t base_type;
    typedef goal_type enum_type;
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
