/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_WORLD_SITE_FLAGS_H
#define DF_WORLD_SITE_FLAGS_H
namespace df {
  namespace enums {
    namespace world_site_flags {
      enum world_site_flags : int32_t {
        Undiscovered,
        anon_1,
        anon_2,
        /**
         * not hamlet
         */
        Town
      };
    }
  }
  using enums::world_site_flags::world_site_flags;
  template<> struct DFHACK_EXPORT identity_traits<world_site_flags> {
    static enum_identity identity;
    static enum_identity *get() { return &identity; }
  };
  template<> struct DFHACK_EXPORT enum_traits<world_site_flags> {
    typedef int32_t base_type;
    typedef world_site_flags enum_type;
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
