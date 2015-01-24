/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_BODY_PART_RAW_FLAGS_H
#define DF_BODY_PART_RAW_FLAGS_H
namespace df {
  namespace enums {
    namespace body_part_raw_flags {
      enum body_part_raw_flags : int32_t {
        HEAD,
        UPPERBODY,
        LOWERBODY,
        SIGHT,
        EMBEDDED,
        INTERNAL,
        CIRCULATION,
        SKELETON,
        LIMB,
        GRASP,
        STANCE,
        GUTS,
        BREATHE,
        SMALL,
        THROAT,
        JOINT,
        THOUGHT,
        NERVOUS,
        RIGHT,
        LEFT,
        HEAR,
        SMELL,
        FLIER,
        DIGIT,
        MOUTH,
        APERTURE,
        SOCKET,
        TOTEMABLE,
        anon_1,
        anon_2,
        UNDER_PRESSURE,
        anon_3,
        VERMIN_BUTCHER_ITEM,
        CONNECTOR
      };
    }
  }
  using enums::body_part_raw_flags::body_part_raw_flags;
  template<> struct DFHACK_EXPORT identity_traits<body_part_raw_flags> {
    static enum_identity identity;
    static enum_identity *get() { return &identity; }
  };
  template<> struct DFHACK_EXPORT enum_traits<body_part_raw_flags> {
    typedef int32_t base_type;
    typedef body_part_raw_flags enum_type;
    static const base_type first_item_value = 0;
    static const base_type last_item_value = 33;
    static inline bool is_valid(enum_type value) {
      return (base_type(value) >= first_item_value && base_type(value) <= last_item_value);
    }
    static const enum_type first_item = (enum_type)first_item_value;
    static const enum_type last_item = (enum_type)last_item_value;
    static const char *const key_table[34];
  };
}
#endif
