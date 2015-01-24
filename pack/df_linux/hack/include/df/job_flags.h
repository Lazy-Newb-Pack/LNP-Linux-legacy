/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_JOB_FLAGS_H
#define DF_JOB_FLAGS_H
namespace df {
  union job_flags {
    uint32_t whole;
    struct {
      uint32_t repeat : 1;
      uint32_t suspend : 1;
      uint32_t working : 1; /*!< not for food, or store in sp */
      uint32_t fetching : 1; /*!< Actually going out to bring; corresponds to items->is_fetching */
      uint32_t special : 1; /*!< Sleep/Drink/Eat/Clean; cannot be aborted via the ui */
      /**
       * When actually carrying non-last item to the workshop.
       * If last, 'working' is used instead.
       */
      uint32_t bringing : 1;
      uint32_t item_lost : 1; /*!< set when a Hauled item is removed; causes cancel */
      uint32_t noise : 2; /*!< on the sleep job causes thoughts */
      uint32_t by_manager : 1;
      uint32_t store_item : 1;
      uint32_t quality : 3; /*!< set by improvement code */
      uint32_t specific_dropoff : 1; /*!< for some jobs, blocks auto-restockpiling of the hauled item */
      uint32_t anon_1 : 1;
      uint32_t on_break : 1; /*!< job displayed as On Break */
      uint32_t anon_2 : 1;
      uint32_t do_now : 1;
    } bits;
    enum Shift {
      shift_repeat = 0,
      shift_suspend = 1,
      shift_working = 2,
      shift_fetching = 3,
      shift_special = 4,
      shift_bringing = 5,
      shift_item_lost = 6,
      shift_noise = 7,
      shift_by_manager = 9,
      shift_store_item = 10,
      shift_quality = 11,
      shift_specific_dropoff = 14,
      shift_anon_1 = 15,
      shift_on_break = 16,
      shift_anon_2 = 17,
      shift_do_now = 18
    };
    enum Mask : uint32_t {
      mask_repeat = 0x1U,
      mask_suspend = 0x2U,
      mask_working = 0x4U,
      mask_fetching = 0x8U,
      mask_special = 0x10U,
      mask_bringing = 0x20U,
      mask_item_lost = 0x40U,
      mask_noise = 0x180U,
      mask_by_manager = 0x200U,
      mask_store_item = 0x400U,
      mask_quality = 0x3800U,
      mask_specific_dropoff = 0x4000U,
      mask_anon_1 = 0x8000U,
      mask_on_break = 0x10000U,
      mask_anon_2 = 0x20000U,
      mask_do_now = 0x40000U
    };
    job_flags(uint32_t whole_ = 0) : whole(whole_) {};
  };
  template<> struct DFHACK_EXPORT bitfield_traits<job_flags> {
    typedef uint32_t base_type;
    typedef job_flags bitfield_type;
    static const int bit_count = sizeof(base_type)*8;
    static const bitfield_item_info bits[bit_count];
  };
  template<> struct DFHACK_EXPORT identity_traits<job_flags> {
    static bitfield_identity identity;
    static bitfield_identity *get() { return &identity; }
  };
}
#endif
