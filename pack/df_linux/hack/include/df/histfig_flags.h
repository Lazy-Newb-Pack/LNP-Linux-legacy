/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_HISTFIG_FLAGS_H
#define DF_HISTFIG_FLAGS_H
namespace df {
  namespace enums {
    namespace histfig_flags {
      enum histfig_flags : int32_t {
        anon_1,
        anon_2,
        deity,
        force,
        anon_3,
        anon_4,
        anon_5,
        ghost
      };
    }
  }
  using enums::histfig_flags::histfig_flags;
  template<> struct DFHACK_EXPORT identity_traits<histfig_flags> {
    static enum_identity identity;
    static enum_identity *get() { return &identity; }
  };
  template<> struct DFHACK_EXPORT enum_traits<histfig_flags> {
    typedef int32_t base_type;
    typedef histfig_flags enum_type;
    static const base_type first_item_value = 0;
    static const base_type last_item_value = 7;
    static inline bool is_valid(enum_type value) {
      return (base_type(value) >= first_item_value && base_type(value) <= last_item_value);
    }
    static const enum_type first_item = (enum_type)first_item_value;
    static const enum_type last_item = (enum_type)last_item_value;
    static const char *const key_table[8];
  };
}
#endif
