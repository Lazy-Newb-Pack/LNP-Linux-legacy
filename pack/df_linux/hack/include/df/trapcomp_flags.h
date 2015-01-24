/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_TRAPCOMP_FLAGS_H
#define DF_TRAPCOMP_FLAGS_H
namespace df {
  namespace enums {
    namespace trapcomp_flags {
      enum trapcomp_flags : int32_t {
        IS_SCREW,
        IS_SPIKE,
        WOOD,
        METAL,
        HAS_EDGE_ATTACK
      };
    }
  }
  using enums::trapcomp_flags::trapcomp_flags;
  template<> struct DFHACK_EXPORT identity_traits<trapcomp_flags> {
    static enum_identity identity;
    static enum_identity *get() { return &identity; }
  };
  template<> struct DFHACK_EXPORT enum_traits<trapcomp_flags> {
    typedef int32_t base_type;
    typedef trapcomp_flags enum_type;
    static const base_type first_item_value = 0;
    static const base_type last_item_value = 4;
    static inline bool is_valid(enum_type value) {
      return (base_type(value) >= first_item_value && base_type(value) <= last_item_value);
    }
    static const enum_type first_item = (enum_type)first_item_value;
    static const enum_type last_item = (enum_type)last_item_value;
    static const char *const key_table[5];
  };
}
#endif
