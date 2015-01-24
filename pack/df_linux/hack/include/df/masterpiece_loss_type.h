/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_MASTERPIECE_LOSS_TYPE_H
#define DF_MASTERPIECE_LOSS_TYPE_H
namespace df {
  namespace enums {
    namespace masterpiece_loss_type {
      enum masterpiece_loss_type : int32_t {
        MELT,
        MAGMA,
        FORTIFICATION,
        MINING,
        CAVEIN,
        VEGETATION
      };
    }
  }
  using enums::masterpiece_loss_type::masterpiece_loss_type;
  template<> struct DFHACK_EXPORT identity_traits<masterpiece_loss_type> {
    static enum_identity identity;
    static enum_identity *get() { return &identity; }
  };
  template<> struct DFHACK_EXPORT enum_traits<masterpiece_loss_type> {
    typedef int32_t base_type;
    typedef masterpiece_loss_type enum_type;
    static const base_type first_item_value = 0;
    static const base_type last_item_value = 5;
    static inline bool is_valid(enum_type value) {
      return (base_type(value) >= first_item_value && base_type(value) <= last_item_value);
    }
    static const enum_type first_item = (enum_type)first_item_value;
    static const enum_type last_item = (enum_type)last_item_value;
    static const char *const key_table[6];
  };
}
#endif
