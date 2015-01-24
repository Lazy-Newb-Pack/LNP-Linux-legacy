/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_NEMESIS_FLAGS_H
#define DF_NEMESIS_FLAGS_H
namespace df {
  namespace enums {
    namespace nemesis_flags {
      enum nemesis_flags : int32_t {
        /**
         * used when loading save
         */
        ACTIVE_ADVENTURER,
        /**
         * allows resuming play
         */
        RETIRED_ADVENTURER,
        /**
         * blue color in legends
         */
        ADVENTURER
      };
    }
  }
  using enums::nemesis_flags::nemesis_flags;
  template<> struct DFHACK_EXPORT identity_traits<nemesis_flags> {
    static enum_identity identity;
    static enum_identity *get() { return &identity; }
  };
  template<> struct DFHACK_EXPORT enum_traits<nemesis_flags> {
    typedef int32_t base_type;
    typedef nemesis_flags enum_type;
    static const base_type first_item_value = 0;
    static const base_type last_item_value = 2;
    static inline bool is_valid(enum_type value) {
      return (base_type(value) >= first_item_value && base_type(value) <= last_item_value);
    }
    static const enum_type first_item = (enum_type)first_item_value;
    static const enum_type last_item = (enum_type)last_item_value;
    static const char *const key_table[3];
  };
}
#endif
