/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_ETHIC_TYPE_H
#define DF_ETHIC_TYPE_H
namespace df {
  namespace enums {
    namespace ethic_type {
      enum ethic_type : int32_t {
        KILL_ENTITY_MEMBER,
        KILL_NEUTRAL,
        KILL_ENEMY,
        KILL_ANIMAL,
        KILL_PLANT,
        TORTURE_AS_EXAMPLE,
        TORTURE_FOR_INFORMATION,
        TORTURE_FOR_FUN,
        TORTURE_ANIMALS,
        TREASON,
        OATH_BREAKING,
        LYING,
        VANDALISM,
        TRESPASSING,
        THEFT,
        ASSAULT,
        SLAVERY,
        EAT_SAPIENT_OTHER,
        EAT_SAPIENT_KILL,
        MAKE_TROPHY_SAME_RACE,
        MAKE_TROPHY_SAPIENT,
        MAKE_TROPHY_ANIMAL
      };
    }
  }
  using enums::ethic_type::ethic_type;
  template<> struct DFHACK_EXPORT identity_traits<ethic_type> {
    static enum_identity identity;
    static enum_identity *get() { return &identity; }
  };
  template<> struct DFHACK_EXPORT enum_traits<ethic_type> {
    typedef int32_t base_type;
    typedef ethic_type enum_type;
    static const base_type first_item_value = 0;
    static const base_type last_item_value = 21;
    static inline bool is_valid(enum_type value) {
      return (base_type(value) >= first_item_value && base_type(value) <= last_item_value);
    }
    static const enum_type first_item = (enum_type)first_item_value;
    static const enum_type last_item = (enum_type)last_item_value;
    static const char *const key_table[22];
  };
}
#endif
