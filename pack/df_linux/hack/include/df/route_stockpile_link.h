/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_ROUTE_STOCKPILE_LINK_H
#define DF_ROUTE_STOCKPILE_LINK_H
namespace df {
  struct DFHACK_EXPORT route_stockpile_link {
    int32_t building_id;
    union T_mode {
      uint32_t whole;
      struct {
        uint32_t take : 1;
        uint32_t give : 1;
      } bits;
      enum Shift {
        shift_take = 0,
        shift_give = 1
      };
      enum Mask : uint32_t {
        mask_take = 0x1U,
        mask_give = 0x2U
      };
      T_mode(uint32_t whole_ = 0) : whole(whole_) {};
    };
    T_mode mode;
    static struct_identity _identity;
  public:
    route_stockpile_link();
  };
  template<> struct DFHACK_EXPORT bitfield_traits<route_stockpile_link::T_mode> {
    typedef uint32_t base_type;
    typedef route_stockpile_link::T_mode bitfield_type;
    static const int bit_count = sizeof(base_type)*8;
    static const bitfield_item_info bits[bit_count];
  };
  template<> struct DFHACK_EXPORT identity_traits<route_stockpile_link::T_mode> {
    static bitfield_identity identity;
    static bitfield_identity *get() { return &identity; }
  };
}
#endif
