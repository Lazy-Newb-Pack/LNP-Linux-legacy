/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_GLOVES_FLAGS_H
#define DF_GLOVES_FLAGS_H
namespace df {
  namespace enums {
    namespace gloves_flags {
      enum gloves_flags : int32_t {
        METAL_ARMOR_LEVELS
      };
    }
  }
  using enums::gloves_flags::gloves_flags;
  template<> struct DFHACK_EXPORT identity_traits<gloves_flags> {
    static enum_identity identity;
    static enum_identity *get() { return &identity; }
  };
  template<> struct DFHACK_EXPORT enum_traits<gloves_flags> {
    typedef int32_t base_type;
    typedef gloves_flags enum_type;
    static const base_type first_item_value = 0;
    static const base_type last_item_value = 0;
    static inline bool is_valid(enum_type value) {
      return (base_type(value) >= first_item_value && base_type(value) <= last_item_value);
    }
    static const enum_type first_item = (enum_type)first_item_value;
    static const enum_type last_item = (enum_type)last_item_value;
    static const char *const key_table[1];
  };
}
#endif
