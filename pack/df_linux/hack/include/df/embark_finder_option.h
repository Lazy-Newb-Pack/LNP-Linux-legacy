/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_EMBARK_FINDER_OPTION_H
#define DF_EMBARK_FINDER_OPTION_H
namespace df {
  namespace enums {
    namespace embark_finder_option {
      enum embark_finder_option : int32_t {
        DimensionX,
        DimensionY,
        Savagery,
        Evil,
        Elevation,
        Temperature,
        Rain,
        Drainage,
        FluxStone,
        Aquifer,
        River,
        UndergroundRiver,
        UndergroundPool,
        MagmaPool,
        MagmaPipe,
        Chasm,
        BottomlessPit,
        OtherFeatures,
        ShallowMetal,
        DeepMetal,
        Soil,
        Clay
      };
    }
  }
  using enums::embark_finder_option::embark_finder_option;
  template<> struct DFHACK_EXPORT identity_traits<embark_finder_option> {
    static enum_identity identity;
    static enum_identity *get() { return &identity; }
  };
  template<> struct DFHACK_EXPORT enum_traits<embark_finder_option> {
    typedef int32_t base_type;
    typedef embark_finder_option enum_type;
    static const base_type first_item_value = 0;
    static const base_type last_item_value = 21;
    static inline bool is_valid(enum_type value) {
      return (base_type(value) >= first_item_value && base_type(value) <= last_item_value);
    }
    static const enum_type first_item = (enum_type)first_item_value;
    static const enum_type last_item = (enum_type)last_item_value;
    static const char *const key_table[22];
  };
}
#endif
