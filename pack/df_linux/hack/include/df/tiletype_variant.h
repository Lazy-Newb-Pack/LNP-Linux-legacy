/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_TILETYPE_VARIANT_H
#define DF_TILETYPE_VARIANT_H
namespace df {
  namespace enums {
    namespace tiletype_variant {
      /**
       * Cosmetic tile variant (not in DF)
       */
      enum tiletype_variant : int32_t {
        NONE = -1,
        VAR_1,
        VAR_2,
        VAR_3,
        VAR_4
      };
    }
  }
  using enums::tiletype_variant::tiletype_variant;
  template<> struct DFHACK_EXPORT identity_traits<tiletype_variant> {
    static enum_identity identity;
    static enum_identity *get() { return &identity; }
  };
  template<> struct DFHACK_EXPORT enum_traits<tiletype_variant> {
    typedef int32_t base_type;
    typedef tiletype_variant enum_type;
    static const base_type first_item_value = -1;
    static const base_type last_item_value = 3;
    static inline bool is_valid(enum_type value) {
      return (base_type(value) >= first_item_value && base_type(value) <= last_item_value);
    }
    static const enum_type first_item = (enum_type)first_item_value;
    static const enum_type last_item = (enum_type)last_item_value;
    static const char *const key_table[5];
  };
}
#endif
