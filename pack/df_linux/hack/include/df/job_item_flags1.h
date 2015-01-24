/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_JOB_ITEM_FLAGS1_H
#define DF_JOB_ITEM_FLAGS1_H
namespace df {
  union job_item_flags1 {
    uint32_t whole;
    struct {
      uint32_t improvable : 1; /*!< vtable[155]:eax,-1,-1 */
      uint32_t butcherable : 1; /*!< (call 0074c6d0) */
      uint32_t millable : 1; /*!< vtable[79] */
      uint32_t allow_buryable : 1; /*!< ALLOW items with flag "dead_dwarf" */
      uint32_t unrotten : 1; /*!< check for item flag "rotten" */
      uint32_t undisturbed : 1; /*!< check for item flag "spider_web" */
      uint32_t collected : 1; /*!< check for item flag "spider_web" */
      uint32_t sharpenable : 1; /*!< vtable[25] */
      uint32_t murdered : 1; /*!< check for item flag */
      uint32_t distillable : 1; /*!< vtable[105],1 */
      uint32_t empty : 1; /*!< (call 00753a40) */
      uint32_t processable : 1; /*!< vtable[80] */
      uint32_t bag : 1; /*!< vtable[131] */
      uint32_t cookable : 1; /*!< (call 00753fe0) */
      uint32_t extract_bearing_plant : 1; /*!< vtable[164] */
      uint32_t extract_bearing_fish : 1; /*!< vtable[181] */
      uint32_t extract_bearing_vermin : 1; /*!< vtable[182] */
      uint32_t processable_to_vial : 1; /*!< vtable[81] */
      uint32_t processable_to_bag : 1; /*!< vtable[82] */
      uint32_t processable_to_barrel : 1; /*!< vtable[83] */
      uint32_t solid : 1; /*!< vtable[74] */
      uint32_t tameable_vermin : 1; /*!< vtable[104] */
      uint32_t nearby : 1;
      uint32_t sand_bearing : 1; /*!< vtable[108] */
      uint32_t glass : 1; /*!< check for material flag IS_GLASS */
      uint32_t milk : 1; /*!< (call 00753d30 - check if material has CHEESE_MAT?) */
      uint32_t milkable : 1; /*!< vtable[107],1,1 */
      uint32_t finished_goods : 1;
      uint32_t ammo : 1;
      uint32_t furniture : 1;
      uint32_t not_bin : 1;
      uint32_t lye_bearing : 1;
    } bits;
    enum Shift {
      shift_improvable = 0,
      shift_butcherable = 1,
      shift_millable = 2,
      shift_allow_buryable = 3,
      shift_unrotten = 4,
      shift_undisturbed = 5,
      shift_collected = 6,
      shift_sharpenable = 7,
      shift_murdered = 8,
      shift_distillable = 9,
      shift_empty = 10,
      shift_processable = 11,
      shift_bag = 12,
      shift_cookable = 13,
      shift_extract_bearing_plant = 14,
      shift_extract_bearing_fish = 15,
      shift_extract_bearing_vermin = 16,
      shift_processable_to_vial = 17,
      shift_processable_to_bag = 18,
      shift_processable_to_barrel = 19,
      shift_solid = 20,
      shift_tameable_vermin = 21,
      shift_nearby = 22,
      shift_sand_bearing = 23,
      shift_glass = 24,
      shift_milk = 25,
      shift_milkable = 26,
      shift_finished_goods = 27,
      shift_ammo = 28,
      shift_furniture = 29,
      shift_not_bin = 30,
      shift_lye_bearing = 31
    };
    enum Mask : uint32_t {
      mask_improvable = 0x1U,
      mask_butcherable = 0x2U,
      mask_millable = 0x4U,
      mask_allow_buryable = 0x8U,
      mask_unrotten = 0x10U,
      mask_undisturbed = 0x20U,
      mask_collected = 0x40U,
      mask_sharpenable = 0x80U,
      mask_murdered = 0x100U,
      mask_distillable = 0x200U,
      mask_empty = 0x400U,
      mask_processable = 0x800U,
      mask_bag = 0x1000U,
      mask_cookable = 0x2000U,
      mask_extract_bearing_plant = 0x4000U,
      mask_extract_bearing_fish = 0x8000U,
      mask_extract_bearing_vermin = 0x10000U,
      mask_processable_to_vial = 0x20000U,
      mask_processable_to_bag = 0x40000U,
      mask_processable_to_barrel = 0x80000U,
      mask_solid = 0x100000U,
      mask_tameable_vermin = 0x200000U,
      mask_nearby = 0x400000U,
      mask_sand_bearing = 0x800000U,
      mask_glass = 0x1000000U,
      mask_milk = 0x2000000U,
      mask_milkable = 0x4000000U,
      mask_finished_goods = 0x8000000U,
      mask_ammo = 0x10000000U,
      mask_furniture = 0x20000000U,
      mask_not_bin = 0x40000000U,
      mask_lye_bearing = 0x80000000U
    };
    job_item_flags1(uint32_t whole_ = 0) : whole(whole_) {};
  };
  template<> struct DFHACK_EXPORT bitfield_traits<job_item_flags1> {
    typedef uint32_t base_type;
    typedef job_item_flags1 bitfield_type;
    static const int bit_count = sizeof(base_type)*8;
    static const bitfield_item_info bits[bit_count];
  };
  template<> struct DFHACK_EXPORT identity_traits<job_item_flags1> {
    static bitfield_identity identity;
    static bitfield_identity *get() { return &identity; }
  };
}
#endif
