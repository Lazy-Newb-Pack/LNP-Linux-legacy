/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_GAIT_TYPE_H
#define DF_GAIT_TYPE_H
namespace df {
  namespace enums {
    namespace gait_type {
      enum gait_type : int32_t {
        WALK,
        FLY,
        SWIM,
        CRAWL,
        CLIMB
      };
    }
  }
  using enums::gait_type::gait_type;
  template<> struct DFHACK_EXPORT identity_traits<gait_type> {
    static enum_identity identity;
    static enum_identity *get() { return &identity; }
  };
  template<> struct DFHACK_EXPORT enum_traits<gait_type> {
    typedef int32_t base_type;
    typedef gait_type enum_type;
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
