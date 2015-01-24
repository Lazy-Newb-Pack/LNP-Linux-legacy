/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_RESOURCE_ALLOTMENT_SPECIFIER_TYPE_H
#define DF_RESOURCE_ALLOTMENT_SPECIFIER_TYPE_H
namespace df {
  namespace enums {
    namespace resource_allotment_specifier_type {
      enum resource_allotment_specifier_type : int32_t {
        CROP,
        STONE,
        METAL,
        WOOD,
        ARMOR_BODY,
        ARMOR_PANTS,
        ARMOR_GLOVES,
        ARMOR_BOOTS,
        ARMOR_HELM,
        CLOTHING_BODY,
        CLOTHING_PANTS,
        CLOTHING_GLOVES,
        CLOTHING_BOOTS,
        CLOTHING_HELM,
        WEAPON_MELEE,
        WEAPON_RANGED,
        ANVIL,
        GEMS,
        THREAD,
        CLOTH,
        LEATHER,
        QUIVER,
        BACKPACK,
        FLASK,
        BAG,
        TABLE,
        CABINET,
        CHAIR,
        BOX,
        BED,
        CRAFTS,
        MEAT,
        BONE,
        HORN,
        SHELL,
        TALLOW,
        TOOTH,
        PEARL,
        SOAP,
        EXTRACT,
        CHEESE,
        SKIN,
        POWDER,
        AMMO
      };
    }
  }
  using enums::resource_allotment_specifier_type::resource_allotment_specifier_type;
  template<> struct DFHACK_EXPORT identity_traits<resource_allotment_specifier_type> {
    static enum_identity identity;
    static enum_identity *get() { return &identity; }
  };
  template<> struct DFHACK_EXPORT enum_traits<resource_allotment_specifier_type> {
    typedef int32_t base_type;
    typedef resource_allotment_specifier_type enum_type;
    static const base_type first_item_value = 0;
    static const base_type last_item_value = 43;
    static inline bool is_valid(enum_type value) {
      return (base_type(value) >= first_item_value && base_type(value) <= last_item_value);
    }
    static const enum_type first_item = (enum_type)first_item_value;
    static const enum_type last_item = (enum_type)last_item_value;
    static const char *const key_table[44];
  };
}
#endif
