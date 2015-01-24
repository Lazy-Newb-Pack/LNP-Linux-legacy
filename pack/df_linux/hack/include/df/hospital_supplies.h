/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_HOSPITAL_SUPPLIES_H
#define DF_HOSPITAL_SUPPLIES_H
namespace df {
  struct DFHACK_EXPORT hospital_supplies {
    union T_supplies_needed {
      uint32_t whole;
      struct {
        uint32_t splints : 1;
        uint32_t thread : 1;
        uint32_t cloth : 1;
        uint32_t crutches : 1;
        uint32_t plaster : 1;
        uint32_t buckets : 1;
        uint32_t soap : 1;
      } bits;
      enum Shift {
        shift_splints = 0,
        shift_thread = 1,
        shift_cloth = 2,
        shift_crutches = 3,
        shift_plaster = 4,
        shift_buckets = 5,
        shift_soap = 6
      };
      enum Mask : uint32_t {
        mask_splints = 0x1U,
        mask_thread = 0x2U,
        mask_cloth = 0x4U,
        mask_crutches = 0x8U,
        mask_plaster = 0x10U,
        mask_buckets = 0x20U,
        mask_soap = 0x40U
      };
      T_supplies_needed(uint32_t whole_ = 0) : whole(whole_) {};
    };
    T_supplies_needed supplies_needed;
    int32_t max_splints;
    int32_t max_thread;
    int32_t max_cloth;
    int32_t max_crutches;
    int32_t max_plaster;
    int32_t max_buckets;
    int32_t max_soap;
    int32_t cur_splints;
    int32_t cur_thread;
    int32_t cur_cloth;
    int32_t cur_crutches;
    int32_t cur_plaster;
    int32_t cur_buckets;
    int32_t cur_soap;
    int32_t supply_recheck_timer;
    static struct_identity _identity;
  public:
    hospital_supplies();
  };
  template<> struct DFHACK_EXPORT bitfield_traits<hospital_supplies::T_supplies_needed> {
    typedef uint32_t base_type;
    typedef hospital_supplies::T_supplies_needed bitfield_type;
    static const int bit_count = sizeof(base_type)*8;
    static const bitfield_item_info bits[bit_count];
  };
  template<> struct DFHACK_EXPORT identity_traits<hospital_supplies::T_supplies_needed> {
    static bitfield_identity identity;
    static bitfield_identity *get() { return &identity; }
  };
}
#endif
