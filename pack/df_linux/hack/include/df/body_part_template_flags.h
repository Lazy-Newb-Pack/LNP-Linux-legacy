/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_BODY_PART_TEMPLATE_FLAGS_H
#define DF_BODY_PART_TEMPLATE_FLAGS_H
namespace df {
  namespace enums {
    namespace body_part_template_flags {
      enum body_part_template_flags : int32_t {
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
        UNDER_PRESSURE,
        VERMIN_BUTCHER_ITEM,
        CONNECTOR
      };
    }
  }
  using enums::body_part_template_flags::body_part_template_flags;
  template<> struct DFHACK_EXPORT identity_traits<body_part_template_flags> {
    static enum_identity identity;
    static enum_identity *get() { return &identity; }
  };
  template<> struct DFHACK_EXPORT enum_traits<body_part_template_flags> {
    typedef int32_t base_type;
    typedef body_part_template_flags enum_type;
    static const base_type first_item_value = 0;
    static const base_type last_item_value = 30;
    static inline bool is_valid(enum_type value) {
      return (base_type(value) >= first_item_value && base_type(value) <= last_item_value);
    }
    static const enum_type first_item = (enum_type)first_item_value;
    static const enum_type last_item = (enum_type)last_item_value;
    static const char *const key_table[31];
  };
}
#endif
