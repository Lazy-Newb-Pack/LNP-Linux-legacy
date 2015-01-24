/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_ENVIRONMENT_TYPE_H
#define DF_ENVIRONMENT_TYPE_H
namespace df {
  namespace enums {
    namespace environment_type {
      enum environment_type : int16_t {
        SOIL,
        SOIL_OCEAN,
        SOIL_SAND,
        METAMORPHIC,
        SEDIMENTARY,
        IGNEOUS_INTRUSIVE,
        IGNEOUS_EXTRUSIVE,
        ALLUVIAL
      };
    }
  }
  using enums::environment_type::environment_type;
  template<> struct DFHACK_EXPORT identity_traits<environment_type> {
    static enum_identity identity;
    static enum_identity *get() { return &identity; }
  };
  template<> struct DFHACK_EXPORT enum_traits<environment_type> {
    typedef int16_t base_type;
    typedef environment_type enum_type;
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
