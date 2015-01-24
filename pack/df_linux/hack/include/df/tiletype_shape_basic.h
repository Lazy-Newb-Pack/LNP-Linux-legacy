/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_TILETYPE_SHAPE_BASIC_H
#define DF_TILETYPE_SHAPE_BASIC_H
namespace df {
  namespace enums {
    namespace tiletype_shape_basic {
      /**
       * Basic tile shape (not in DF)
       */
      enum tiletype_shape_basic : int32_t {
        None = -1,
        Open,
        Floor,
        Ramp,
        Wall,
        Stair
      };
    }
  }
  using enums::tiletype_shape_basic::tiletype_shape_basic;
  template<> struct DFHACK_EXPORT identity_traits<tiletype_shape_basic> {
    static enum_identity identity;
    static enum_identity *get() { return &identity; }
  };
  template<> struct DFHACK_EXPORT enum_traits<tiletype_shape_basic> {
    typedef int32_t base_type;
    typedef tiletype_shape_basic enum_type;
    static const base_type first_item_value = -1;
    static const base_type last_item_value = 4;
    static inline bool is_valid(enum_type value) {
      return (base_type(value) >= first_item_value && base_type(value) <= last_item_value);
    }
    static const enum_type first_item = (enum_type)first_item_value;
    static const enum_type last_item = (enum_type)last_item_value;
    static const char *const key_table[6];
  };
}
#endif
