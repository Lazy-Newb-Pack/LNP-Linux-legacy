/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_BUILDING_SHOPST_H
#define DF_BUILDING_SHOPST_H
#ifndef DF_BUILDING_ACTUAL_H
#include "building_actual.h"
#endif
#ifndef DF_SHOP_TYPE_H
#include "shop_type.h"
#endif
namespace df {
  struct unit;
  struct DFHACK_EXPORT building_shopst : building_actual {
    df::unit* owner;
    int32_t timer; /*!< increments until reaching 200,000,000 */
    union T_shop_flags {
      int16_t whole;
      struct {
        int16_t for_sale : 1;
      } bits;
      enum Shift {
        shift_for_sale = 0
      };
      enum Mask : int16_t {
        mask_for_sale = 0x1U
      };
      T_shop_flags(int16_t whole_ = 0) : whole(whole_) {};
    };
    T_shop_flags shop_flags;
    df::shop_type type;
    static virtual_identity _identity;
  protected:
    building_shopst(virtual_identity *_id = &building_shopst::_identity);
    friend void *df::allocator_fn<building_shopst>(void*,const void*);
  };
  template<> struct DFHACK_EXPORT bitfield_traits<building_shopst::T_shop_flags> {
    typedef int16_t base_type;
    typedef building_shopst::T_shop_flags bitfield_type;
    static const int bit_count = sizeof(base_type)*8;
    static const bitfield_item_info bits[bit_count];
  };
  template<> struct DFHACK_EXPORT identity_traits<building_shopst::T_shop_flags> {
    static bitfield_identity identity;
    static bitfield_identity *get() { return &identity; }
  };
}
#endif
