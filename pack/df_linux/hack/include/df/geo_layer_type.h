/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_GEO_LAYER_TYPE_H
#define DF_GEO_LAYER_TYPE_H
#ifndef DF_INORGANIC_FLAGS_H
#include "inorganic_flags.h"
#endif
namespace df {
  namespace enums {
    namespace geo_layer_type {
      enum geo_layer_type : int16_t {
        SOIL,
        SEDIMENTARY,
        METAMORPHIC,
        IGNEOUS_EXTRUSIVE,
        IGNEOUS_INTRUSIVE,
        SOIL_OCEAN,
        SOIL_SAND,
        SEDIMENTARY_OCEAN_SHALLOW,
        SEDIMENTARY_OCEAN_DEEP
      };
    }
  }
  using enums::geo_layer_type::geo_layer_type;
  template<> struct DFHACK_EXPORT identity_traits<geo_layer_type> {
    static enum_identity identity;
    static enum_identity *get() { return &identity; }
  };
  template<> struct DFHACK_EXPORT enum_traits<geo_layer_type> {
    typedef int16_t base_type;
    typedef geo_layer_type enum_type;
    static const base_type first_item_value = 0;
    static const base_type last_item_value = 8;
    static inline bool is_valid(enum_type value) {
      return (base_type(value) >= first_item_value && base_type(value) <= last_item_value);
    }
    static const enum_type first_item = (enum_type)first_item_value;
    static const enum_type last_item = (enum_type)last_item_value;
    static const char *const key_table[9];
    struct attr_entry_type {
      df::inorganic_flags flag;
      static struct_identity _identity;
    };
    static const attr_entry_type attr_table[9+1];
    static const attr_entry_type &attrs(enum_type value);
  };
}
#endif
