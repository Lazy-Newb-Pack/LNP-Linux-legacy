/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_FEATURE_INIT_FLAGS_H
#define DF_FEATURE_INIT_FLAGS_H
namespace df {
  namespace enums {
    namespace feature_init_flags {
      enum feature_init_flags : int32_t {
        anon_1,
        anon_2,
        anon_3,
        Discovered
      };
    }
  }
  using enums::feature_init_flags::feature_init_flags;
  template<> struct DFHACK_EXPORT identity_traits<feature_init_flags> {
    static enum_identity identity;
    static enum_identity *get() { return &identity; }
  };
  template<> struct DFHACK_EXPORT enum_traits<feature_init_flags> {
    typedef int32_t base_type;
    typedef feature_init_flags enum_type;
    static const base_type first_item_value = 0;
    static const base_type last_item_value = 3;
    static inline bool is_valid(enum_type value) {
      return (base_type(value) >= first_item_value && base_type(value) <= last_item_value);
    }
    static const enum_type first_item = (enum_type)first_item_value;
    static const enum_type last_item = (enum_type)last_item_value;
    static const char *const key_table[4];
  };
}
#endif
