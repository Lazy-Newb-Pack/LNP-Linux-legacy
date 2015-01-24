/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_UNITS_OTHER_ID_H
#define DF_UNITS_OTHER_ID_H
namespace df {
  namespace enums {
    namespace units_other_id {
      enum units_other_id : int32_t {
        ANY_RIDER,
        ANY_BABY2
      };
    }
  }
  using enums::units_other_id::units_other_id;
  template<> struct DFHACK_EXPORT identity_traits<units_other_id> {
    static enum_identity identity;
    static enum_identity *get() { return &identity; }
  };
  template<> struct DFHACK_EXPORT enum_traits<units_other_id> {
    typedef int32_t base_type;
    typedef units_other_id enum_type;
    static const base_type first_item_value = 0;
    static const base_type last_item_value = 1;
    static inline bool is_valid(enum_type value) {
      return (base_type(value) >= first_item_value && base_type(value) <= last_item_value);
    }
    static const enum_type first_item = (enum_type)first_item_value;
    static const enum_type last_item = (enum_type)last_item_value;
    static const char *const key_table[2];
  };
}
#endif
