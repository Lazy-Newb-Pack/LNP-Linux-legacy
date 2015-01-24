/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_INORGANIC_FLAGS_H
#define DF_INORGANIC_FLAGS_H
namespace df {
  namespace enums {
    namespace inorganic_flags {
      enum inorganic_flags : int32_t {
        LAVA,
        GENERATED,
        /**
         * is METAMORPHIC, or has ENVIRONMENT with anything but SOIL_OCEAN
         */
        ENVIRONMENT_NON_SOIL_OCEAN,
        SEDIMENTARY,
        SEDIMENTARY_OCEAN_SHALLOW,
        IGNEOUS_INTRUSIVE,
        IGNEOUS_EXTRUSIVE,
        METAMORPHIC,
        DEEP_SURFACE,
        METAL_ORE,
        AQUIFER,
        SOIL_ANY,
        SOIL_OCEAN,
        SOIL_SAND,
        SEDIMENTARY_OCEAN_DEEP,
        THREAD_METAL,
        /**
         * or any DEEP_*
         */
        SPECIAL,
        SOIL,
        DEEP_SPECIAL,
        DIVINE,
        anon_1,
        anon_2,
        anon_3,
        anon_4,
        anon_5,
        WAFERS,
        anon_6,
        anon_7,
        anon_8,
        anon_9,
        anon_10,
        anon_11
      };
    }
  }
  using enums::inorganic_flags::inorganic_flags;
  template<> struct DFHACK_EXPORT identity_traits<inorganic_flags> {
    static enum_identity identity;
    static enum_identity *get() { return &identity; }
  };
  template<> struct DFHACK_EXPORT enum_traits<inorganic_flags> {
    typedef int32_t base_type;
    typedef inorganic_flags enum_type;
    static const base_type first_item_value = 0;
    static const base_type last_item_value = 31;
    static inline bool is_valid(enum_type value) {
      return (base_type(value) >= first_item_value && base_type(value) <= last_item_value);
    }
    static const enum_type first_item = (enum_type)first_item_value;
    static const enum_type last_item = (enum_type)last_item_value;
    static const char *const key_table[32];
  };
}
#endif
