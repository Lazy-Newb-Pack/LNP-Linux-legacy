/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_ENTITY_MATERIAL_CATEGORY_H
#define DF_ENTITY_MATERIAL_CATEGORY_H
namespace df {
  namespace enums {
    namespace entity_material_category {
      enum entity_material_category : int16_t {
        None = -1,
        /**
         * cloth or leather
         */
        Clothing,
        /**
         * organic.leather
         */
        Leather,
        /**
         * any cloth
         */
        Cloth,
        /**
         * organic.wood, used for training weapons
         */
        Wood,
        /**
         * misc_mat.crafts
         */
        Crafts,
        /**
         * stones
         */
        Stone,
        /**
         * misc_mat.crafts
         */
        Improvement,
        /**
         * misc_mat.glass_unused, used for extract vials
         */
        Glass,
        /**
         * misc_mat.barrels, also used for buckets
         */
        Wood2,
        /**
         * cloth/leather
         */
        Bag,
        /**
         * misc_mat.cages
         */
        Cage,
        /**
         * metal.weapon
         */
        WeaponMelee,
        /**
         * metal.ranged
         */
        WeaponRanged,
        /**
         * metal.ammo
         */
        Ammo,
        /**
         * metal.ammo2
         */
        Ammo2,
        /**
         * metal.pick
         */
        Pick,
        /**
         * metal.armor, also used for shields, tools, instruments, and toys
         */
        Armor,
        /**
         * gems
         */
        Gem,
        /**
         * refuse.bone
         */
        Bone,
        /**
         * refuse.shell
         */
        Shell,
        /**
         * refuse.pearl
         */
        Pearl,
        /**
         * refuse.ivory
         */
        Ivory,
        /**
         * refuse.horn
         */
        Horn,
        /**
         * misc_mat.others
         */
        Other,
        /**
         * metal.anvil
         */
        Anvil,
        /**
         * misc_mat.booze
         */
        Booze,
        /**
         * metals with ITEMS_HARD, used for chains
         */
        Metal,
        /**
         * organic.fiber
         */
        PlantFiber,
        /**
         * organic.silk
         */
        Silk,
        /**
         * organic.wool
         */
        Wool,
        /**
         * misc_mat.rock_metal
         */
        Furniture,
        /**
         * misc_mat.wood2
         */
        MiscWood2
      };
    }
  }
  using enums::entity_material_category::entity_material_category;
  template<> struct DFHACK_EXPORT identity_traits<entity_material_category> {
    static enum_identity identity;
    static enum_identity *get() { return &identity; }
  };
  template<> struct DFHACK_EXPORT enum_traits<entity_material_category> {
    typedef int16_t base_type;
    typedef entity_material_category enum_type;
    static const base_type first_item_value = -1;
    static const base_type last_item_value = 31;
    static inline bool is_valid(enum_type value) {
      return (base_type(value) >= first_item_value && base_type(value) <= last_item_value);
    }
    static const enum_type first_item = (enum_type)first_item_value;
    static const enum_type last_item = (enum_type)last_item_value;
    static const char *const key_table[33];
  };
}
#endif
