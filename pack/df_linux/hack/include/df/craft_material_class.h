/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_CRAFT_MATERIAL_CLASS_H
#define DF_CRAFT_MATERIAL_CLASS_H
#ifndef DF_JOB_SKILL_H
#include "job_skill.h"
#endif
namespace df {
  namespace enums {
    namespace craft_material_class {
      /**
       * not in DF
       */
      enum craft_material_class : int32_t {
        None = -1,
        Metal,
        Wood,
        Gem,
        Glass,
        Stone,
        Bone,
        Ivory,
        Horn,
        Pearl,
        Shell,
        Leather,
        Cloth
      };
    }
  }
  using enums::craft_material_class::craft_material_class;
  template<> struct DFHACK_EXPORT identity_traits<craft_material_class> {
    static enum_identity identity;
    static enum_identity *get() { return &identity; }
  };
  template<> struct DFHACK_EXPORT enum_traits<craft_material_class> {
    typedef int32_t base_type;
    typedef craft_material_class enum_type;
    static const base_type first_item_value = -1;
    static const base_type last_item_value = 11;
    static inline bool is_valid(enum_type value) {
      return (base_type(value) >= first_item_value && base_type(value) <= last_item_value);
    }
    static const enum_type first_item = (enum_type)first_item_value;
    static const enum_type last_item = (enum_type)last_item_value;
    static const char *const key_table[13];
    struct attr_entry_type {
      df::job_skill make_skill;
      df::job_skill improve_skill;
      static struct_identity _identity;
    };
    static const attr_entry_type attr_table[13+1];
    static const attr_entry_type &attrs(enum_type value);
  };
}
#endif
