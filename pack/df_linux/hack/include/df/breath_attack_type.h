/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_BREATH_ATTACK_TYPE_H
#define DF_BREATH_ATTACK_TYPE_H
namespace df {
  namespace enums {
    namespace breath_attack_type {
      enum breath_attack_type : int16_t {
        TRAILING_DUST_FLOW,
        TRAILING_VAPOR_FLOW,
        TRAILING_GAS_FLOW,
        SOLID_GLOB,
        LIQUID_GLOB,
        UNDIRECTED_GAS,
        UNDIRECTED_VAPOR,
        UNDIRECTED_DUST,
        WEB_SPRAY,
        DRAGONFIRE,
        FIREJET,
        FIREBALL,
        WEATHER_CREEPING_GAS,
        WEATHER_CREEPING_VAPOR,
        WEATHER_CREEPING_DUST,
        WEATHER_FALLING_MATERIAL,
        SPATTER_POWDER,
        SPATTER_LIQUID,
        UNDIRECTED_ITEM_CLOUD,
        TRAILING_ITEM_FLOW
      };
    }
  }
  using enums::breath_attack_type::breath_attack_type;
  template<> struct DFHACK_EXPORT identity_traits<breath_attack_type> {
    static enum_identity identity;
    static enum_identity *get() { return &identity; }
  };
  template<> struct DFHACK_EXPORT enum_traits<breath_attack_type> {
    typedef int16_t base_type;
    typedef breath_attack_type enum_type;
    static const base_type first_item_value = 0;
    static const base_type last_item_value = 19;
    static inline bool is_valid(enum_type value) {
      return (base_type(value) >= first_item_value && base_type(value) <= last_item_value);
    }
    static const enum_type first_item = (enum_type)first_item_value;
    static const enum_type last_item = (enum_type)last_item_value;
    static const char *const key_table[20];
  };
}
#endif
