/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_INCLUSION_TYPE_H
#define DF_INCLUSION_TYPE_H
namespace df {
  namespace enums {
    namespace inclusion_type {
      enum inclusion_type : int16_t {
        /**
         * unused
         */
        anon_1,
        VEIN,
        CLUSTER,
        CLUSTER_SMALL,
        CLUSTER_ONE
      };
    }
  }
  using enums::inclusion_type::inclusion_type;
  template<> struct DFHACK_EXPORT identity_traits<inclusion_type> {
    static enum_identity identity;
    static enum_identity *get() { return &identity; }
  };
  template<> struct DFHACK_EXPORT enum_traits<inclusion_type> {
    typedef int16_t base_type;
    typedef inclusion_type enum_type;
    static const base_type first_item_value = 0;
    static const base_type last_item_value = 4;
    static inline bool is_valid(enum_type value) {
      return (base_type(value) >= first_item_value && base_type(value) <= last_item_value);
    }
    static const enum_type first_item = (enum_type)first_item_value;
    static const enum_type last_item = (enum_type)last_item_value;
    static const char *const key_table[5];
  };
}
#endif
