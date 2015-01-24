/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_CORPSE_MATERIAL_TYPE_H
#define DF_CORPSE_MATERIAL_TYPE_H
namespace df {
  namespace enums {
    namespace corpse_material_type {
      enum corpse_material_type : int32_t {
        Plant,
        Silk,
        Leather,
        Bone,
        Shell,
        anon_1,
        Soap,
        Tooth,
        Horn,
        Pearl,
        HairWool,
        Yarn
      };
    }
  }
  using enums::corpse_material_type::corpse_material_type;
  template<> struct DFHACK_EXPORT identity_traits<corpse_material_type> {
    static enum_identity identity;
    static enum_identity *get() { return &identity; }
  };
  template<> struct DFHACK_EXPORT enum_traits<corpse_material_type> {
    typedef int32_t base_type;
    typedef corpse_material_type enum_type;
    static const base_type first_item_value = 0;
    static const base_type last_item_value = 11;
    static inline bool is_valid(enum_type value) {
      return (base_type(value) >= first_item_value && base_type(value) <= last_item_value);
    }
    static const enum_type first_item = (enum_type)first_item_value;
    static const enum_type last_item = (enum_type)last_item_value;
    static const char *const key_table[12];
  };
}
#endif
