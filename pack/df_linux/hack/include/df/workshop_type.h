/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_WORKSHOP_TYPE_H
#define DF_WORKSHOP_TYPE_H
namespace df {
  namespace enums {
    namespace workshop_type {
      enum workshop_type : int16_t {
        Carpenters,
        Farmers,
        Masons,
        Craftsdwarfs,
        Jewelers,
        MetalsmithsForge,
        MagmaForge,
        Bowyers,
        Mechanics,
        Siege,
        Butchers,
        Leatherworks,
        Tanners,
        Clothiers,
        Fishery,
        Still,
        Loom,
        Quern,
        Kennels,
        Kitchen,
        Ashery,
        Dyers,
        Millstone,
        Custom,
        Tool
      };
    }
  }
  using enums::workshop_type::workshop_type;
  template<> struct DFHACK_EXPORT identity_traits<workshop_type> {
    static enum_identity identity;
    static enum_identity *get() { return &identity; }
  };
  template<> struct DFHACK_EXPORT enum_traits<workshop_type> {
    typedef int16_t base_type;
    typedef workshop_type enum_type;
    static const base_type first_item_value = 0;
    static const base_type last_item_value = 24;
    static inline bool is_valid(enum_type value) {
      return (base_type(value) >= first_item_value && base_type(value) <= last_item_value);
    }
    static const enum_type first_item = (enum_type)first_item_value;
    static const enum_type last_item = (enum_type)last_item_value;
    static const char *const key_table[25];
  };
}
#endif
