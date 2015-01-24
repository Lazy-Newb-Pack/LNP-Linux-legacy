/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_TILETYPE_SPECIAL_H
#define DF_TILETYPE_SPECIAL_H
namespace df {
  namespace enums {
    namespace tiletype_special {
      /**
       * Functional tile variant (not in DF)
       */
      enum tiletype_special : int32_t {
        NONE = -1,
        NORMAL,
        RIVER_SOURCE,
        WATERFALL,
        SMOOTH,
        FURROWED,
        WET,
        DEAD,
        WORN_1,
        WORN_2,
        WORN_3,
        TRACK,
        SMOOTH_DEAD
      };
    }
  }
  using enums::tiletype_special::tiletype_special;
  template<> struct DFHACK_EXPORT identity_traits<tiletype_special> {
    static enum_identity identity;
    static enum_identity *get() { return &identity; }
  };
  template<> struct DFHACK_EXPORT enum_traits<tiletype_special> {
    typedef int32_t base_type;
    typedef tiletype_special enum_type;
    static const base_type first_item_value = -1;
    static const base_type last_item_value = 11;
    static inline bool is_valid(enum_type value) {
      return (base_type(value) >= first_item_value && base_type(value) <= last_item_value);
    }
    static const enum_type first_item = (enum_type)first_item_value;
    static const enum_type last_item = (enum_type)last_item_value;
    static const char *const key_table[13];
    struct attr_entry_type {
      const char* caption;
      static struct_identity _identity;
    };
    static const attr_entry_type attr_table[13+1];
    static const attr_entry_type &attrs(enum_type value);
  };
}
#endif
