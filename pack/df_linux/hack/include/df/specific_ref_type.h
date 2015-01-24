/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_SPECIFIC_REF_TYPE_H
#define DF_SPECIFIC_REF_TYPE_H
namespace df {
  namespace enums {
    namespace specific_ref_type {
      enum specific_ref_type : int32_t {
        anon_1,
        UNIT_INVENTORY,
        JOB,
        BUILDING_PARTY,
        ACTIVITY,
        ITEM_GENERAL,
        EFFECT,
        /**
         * unused
         */
        PETINFO_PET,
        /**
         * unused
         */
        PETINFO_OWNER,
        VERMIN_EVENT,
        VERMIN_ESCAPED_PET,
        ENTITY,
        PLOT_INFO,
        VIEWSCREEN,
        UNIT_ITEM_WRESTLE,
        NULL_REF,
        HIST_FIG,
        SITE,
        ARTIFACT,
        ITEM_IMPROVEMENT,
        COIN_FRONT,
        COIN_BACK,
        DETAIL_EVENT,
        SUBREGION,
        FEATURE_LAYER,
        ART_IMAGE,
        CREATURE_DEF,
        anon_2,
        anon_3,
        ENTITY_POPULATION,
        BREED
      };
    }
  }
  using enums::specific_ref_type::specific_ref_type;
  template<> struct DFHACK_EXPORT identity_traits<specific_ref_type> {
    static enum_identity identity;
    static enum_identity *get() { return &identity; }
  };
  template<> struct DFHACK_EXPORT enum_traits<specific_ref_type> {
    typedef int32_t base_type;
    typedef specific_ref_type enum_type;
    static const base_type first_item_value = 0;
    static const base_type last_item_value = 30;
    static inline bool is_valid(enum_type value) {
      return (base_type(value) >= first_item_value && base_type(value) <= last_item_value);
    }
    static const enum_type first_item = (enum_type)first_item_value;
    static const enum_type last_item = (enum_type)last_item_value;
    static const char *const key_table[31];
  };
}
#endif
