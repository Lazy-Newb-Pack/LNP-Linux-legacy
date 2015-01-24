/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_ITEM_MAGICNESS_TYPE_H
#define DF_ITEM_MAGICNESS_TYPE_H
namespace df {
  namespace enums {
    namespace item_magicness_type {
      enum item_magicness_type : int16_t {
        Sparkle,
        AirWarped,
        Whistle,
        OddlySquare,
        SmallBumps,
        EarthSmell,
        Lightning,
        /**
         * with value of 10 or higher, creatures that look at the item cannot think negative thoughts
         */
        GrayHairs,
        RustlingLeaves
      };
    }
  }
  using enums::item_magicness_type::item_magicness_type;
  template<> struct DFHACK_EXPORT identity_traits<item_magicness_type> {
    static enum_identity identity;
    static enum_identity *get() { return &identity; }
  };
  template<> struct DFHACK_EXPORT enum_traits<item_magicness_type> {
    typedef int16_t base_type;
    typedef item_magicness_type enum_type;
    static const base_type first_item_value = 0;
    static const base_type last_item_value = 8;
    static inline bool is_valid(enum_type value) {
      return (base_type(value) >= first_item_value && base_type(value) <= last_item_value);
    }
    static const enum_type first_item = (enum_type)first_item_value;
    static const enum_type last_item = (enum_type)last_item_value;
    static const char *const key_table[9];
  };
}
#endif
