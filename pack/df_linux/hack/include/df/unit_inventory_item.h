/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_UNIT_INVENTORY_ITEM_H
#define DF_UNIT_INVENTORY_ITEM_H
namespace df {
  struct item;
  struct DFHACK_EXPORT unit_inventory_item {
    df::item* item;
    enum T_mode : int16_t {
      Hauled,
      /**
       * also shield, crutch
       */
      Weapon,
      /**
       * quiver
       */
      Worn,
      Piercing,
      /**
       * attached to clothing
       */
      Flask,
      /**
       * e.g. bandage
       */
      WrappedAround,
      StuckIn,
      /**
       * string descr like Worn
       */
      InMouth,
      /**
       * Left shoulder, right shoulder, or head, selected randomly using pet_seed
       */
      Pet,
      SewnInto
    };
    T_mode mode;
    int16_t body_part_id;
    int32_t pet_seed; /*!< RNG seed for Pet mode */
    int32_t wound_id; /*!< -1 unless suture */
    static struct_identity _identity;
  public:
    unit_inventory_item();
  };
  template<> struct DFHACK_EXPORT identity_traits<unit_inventory_item::T_mode> {
    static enum_identity identity;
    static enum_identity *get() { return &identity; }
  };
  template<> struct DFHACK_EXPORT enum_traits<unit_inventory_item::T_mode> {
    typedef int16_t base_type;
    typedef unit_inventory_item::T_mode enum_type;
    static const base_type first_item_value = 0;
    static const base_type last_item_value = 9;
    static inline bool is_valid(enum_type value) {
      return (base_type(value) >= first_item_value && base_type(value) <= last_item_value);
    }
    static const enum_type first_item = (enum_type)first_item_value;
    static const enum_type last_item = (enum_type)last_item_value;
    static const char *const key_table[10];
  };
}
#endif
