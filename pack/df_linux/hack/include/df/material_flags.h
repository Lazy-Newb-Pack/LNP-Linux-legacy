/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_MATERIAL_FLAGS_H
#define DF_MATERIAL_FLAGS_H
#ifndef DF_CRAFT_MATERIAL_CLASS_H
#include "craft_material_class.h"
#endif
namespace df {
  namespace enums {
    namespace material_flags {
      enum material_flags : int32_t {
        BONE,
        MEAT,
        EDIBLE_VERMIN,
        EDIBLE_RAW,
        EDIBLE_COOKED,
        ALCOHOL,
        ITEMS_METAL,
        ITEMS_BARRED,
        ITEMS_SCALED,
        ITEMS_LEATHER,
        ITEMS_SOFT,
        ITEMS_HARD,
        IMPLIES_ANIMAL_KILL,
        ALCOHOL_PLANT,
        ALCOHOL_CREATURE,
        CHEESE_PLANT,
        CHEESE_CREATURE,
        POWDER_MISC_PLANT,
        POWDER_MISC_CREATURE,
        STOCKPILE_GLOB,
        LIQUID_MISC_PLANT,
        LIQUID_MISC_CREATURE,
        LIQUID_MISC_OTHER,
        WOOD,
        THREAD_PLANT,
        TOOTH,
        HORN,
        PEARL,
        SHELL,
        LEATHER,
        SILK,
        SOAP,
        ROTS,
        IS_DYE,
        POWDER_MISC,
        LIQUID_MISC,
        STRUCTURAL_PLANT_MAT,
        SEED_MAT,
        LEAF_MAT,
        CHEESE,
        ENTERS_BLOOD,
        BLOOD_MAP_DESCRIPTOR,
        ICHOR_MAP_DESCRIPTOR,
        GOO_MAP_DESCRIPTOR,
        SLIME_MAP_DESCRIPTOR,
        PUS_MAP_DESCRIPTOR,
        GENERATES_MIASMA,
        IS_METAL,
        IS_GEM,
        IS_GLASS,
        CRYSTAL_GLASSABLE,
        ITEMS_WEAPON,
        ITEMS_WEAPON_RANGED,
        ITEMS_ANVIL,
        ITEMS_AMMO,
        ITEMS_DIGGER,
        ITEMS_ARMOR,
        ITEMS_DELICATE,
        ITEMS_SIEGE_ENGINE,
        ITEMS_QUERN,
        IS_STONE,
        UNDIGGABLE,
        YARN,
        STOCKPILE_GLOB_PASTE,
        STOCKPILE_GLOB_PRESSED,
        DISPLAY_UNGLAZED,
        DO_NOT_CLEAN_GLOB,
        NO_STONE_STOCKPILE,
        STOCKPILE_THREAD_METAL,
        SWEAT_MAP_DESCRIPTOR,
        TEARS_MAP_DESCRIPTOR,
        SPIT_MAP_DESCRIPTOR,
        EVAPORATES
      };
    }
  }
  using enums::material_flags::material_flags;
  template<> struct DFHACK_EXPORT identity_traits<material_flags> {
    static enum_identity identity;
    static enum_identity *get() { return &identity; }
  };
  template<> struct DFHACK_EXPORT enum_traits<material_flags> {
    typedef int32_t base_type;
    typedef material_flags enum_type;
    static const base_type first_item_value = 0;
    static const base_type last_item_value = 72;
    static inline bool is_valid(enum_type value) {
      return (base_type(value) >= first_item_value && base_type(value) <= last_item_value);
    }
    static const enum_type first_item = (enum_type)first_item_value;
    static const enum_type last_item = (enum_type)last_item_value;
    static const char *const key_table[73];
    struct attr_entry_type {
      df::craft_material_class type;
      static struct_identity _identity;
    };
    static const attr_entry_type attr_table[73+1];
    static const attr_entry_type &attrs(enum_type value);
  };
}
#endif
