/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_IMPROVEMENT_TYPE_H
#define DF_IMPROVEMENT_TYPE_H
namespace df {
  namespace enums {
    namespace improvement_type {
      enum improvement_type : int32_t {
        ART_IMAGE,
        COVERED,
        RINGS_HANGING,
        BANDS,
        SPIKES,
        ITEMSPECIFIC,
        THREAD,
        CLOTH,
        SEWN_IMAGE,
        PAGES,
        ILLUSTRATION
      };
    }
  }
  using enums::improvement_type::improvement_type;
  template<> struct DFHACK_EXPORT identity_traits<improvement_type> {
    static enum_identity identity;
    static enum_identity *get() { return &identity; }
  };
  template<> struct DFHACK_EXPORT enum_traits<improvement_type> {
    typedef int32_t base_type;
    typedef improvement_type enum_type;
    static const base_type first_item_value = 0;
    static const base_type last_item_value = 10;
    static inline bool is_valid(enum_type value) {
      return (base_type(value) >= first_item_value && base_type(value) <= last_item_value);
    }
    static const enum_type first_item = (enum_type)first_item_value;
    static const enum_type last_item = (enum_type)last_item_value;
    static const char *const key_table[11];
  };
}
#endif
