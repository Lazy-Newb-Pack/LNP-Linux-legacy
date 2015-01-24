/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_FLOW_TYPE_H
#define DF_FLOW_TYPE_H
namespace df {
  namespace enums {
    namespace flow_type {
      enum flow_type : int16_t {
        Miasma,
        /**
         * only if mat_type=1
         */
        Steam,
        Mist,
        MaterialDust,
        MagmaMist,
        Smoke,
        Dragonfire,
        Fire,
        Web,
        MaterialGas,
        MaterialVapor,
        OceanWave,
        SeaFoam,
        ItemCloud
      };
    }
  }
  using enums::flow_type::flow_type;
  template<> struct DFHACK_EXPORT identity_traits<flow_type> {
    static enum_identity identity;
    static enum_identity *get() { return &identity; }
  };
  template<> struct DFHACK_EXPORT enum_traits<flow_type> {
    typedef int16_t base_type;
    typedef flow_type enum_type;
    static const base_type first_item_value = 0;
    static const base_type last_item_value = 13;
    static inline bool is_valid(enum_type value) {
      return (base_type(value) >= first_item_value && base_type(value) <= last_item_value);
    }
    static const enum_type first_item = (enum_type)first_item_value;
    static const enum_type last_item = (enum_type)last_item_value;
    static const char *const key_table[14];
  };
}
#endif
