/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_UNIT_SYNDROME_H
#define DF_UNIT_SYNDROME_H
namespace df {
  struct DFHACK_EXPORT unit_syndrome {
    int32_t type;
    int32_t year;
    int32_t year_time;
    int32_t ticks;
    std::vector<int32_t > wounds; /*!< refers to unit_wound by id */
    int32_t wound_id;
    struct DFHACK_EXPORT T_symptoms {
      int32_t quantity; /*!< from spatter size */
      int32_t delay; /*!< for SIZE_DELAYS */
      int32_t ticks;
      std::vector<int16_t > target_bp;
      std::vector<int16_t > target_layer;
      std::vector<int32_t > target_quantity;
      std::vector<int32_t > target_delay;
      std::vector<int32_t > target_ticks;
      union T_flags {
        uint32_t whole;
        struct {
          uint32_t disabled : 1; /*!< if PROB roll fails, or all symptoms expire */
          uint32_t active : 1;
        } bits;
        enum Shift {
          shift_disabled = 0,
          shift_active = 1
        };
        enum Mask : uint32_t {
          mask_disabled = 0x1U,
          mask_active = 0x2U
        };
        T_flags(uint32_t whole_ = 0) : whole(whole_) {};
      };
      T_flags flags;
      static struct_identity _identity;
    public:
      T_symptoms();
    };
    std::vector<T_symptoms* > symptoms;
    int16_t reinfection_count; /*!< set from unit.reinfection_count[i]++ */
    union T_flags {
      uint32_t whole;
      struct {
        uint32_t is_sick : 1; /*!< causes health.flags.needs_healthcare */
        uint32_t is_sick_low : 1; /*!< less sick? fever: 5-19 low, 20-* full */
        uint32_t anon_1 : 1;
        uint32_t anon_2 : 1;
      } bits;
      enum Shift {
        shift_is_sick = 0,
        shift_is_sick_low = 1,
        shift_anon_1 = 2,
        shift_anon_2 = 3
      };
      enum Mask : uint32_t {
        mask_is_sick = 0x1U,
        mask_is_sick_low = 0x2U,
        mask_anon_1 = 0x4U,
        mask_anon_2 = 0x8U
      };
      T_flags(uint32_t whole_ = 0) : whole(whole_) {};
    };
    T_flags flags;
    std::vector<int32_t > unk4;
    static struct_identity _identity;
    typedef unit_syndrome* key_pointer_type;
    typedef int32_t key_field_type;
    static int binsearch_index(const std::vector<unit_syndrome*> &vec, key_field_type key, bool exact = true);
    static int binsearch_index(const std::vector<unit_syndrome*> &vec, key_pointer_type key, bool exact = true);
  public:
    unit_syndrome();
  };
  template<> struct DFHACK_EXPORT bitfield_traits<unit_syndrome::T_symptoms::T_flags> {
    typedef uint32_t base_type;
    typedef unit_syndrome::T_symptoms::T_flags bitfield_type;
    static const int bit_count = sizeof(base_type)*8;
    static const bitfield_item_info bits[bit_count];
  };
  template<> struct DFHACK_EXPORT identity_traits<unit_syndrome::T_symptoms::T_flags> {
    static bitfield_identity identity;
    static bitfield_identity *get() { return &identity; }
  };
  template<> struct DFHACK_EXPORT bitfield_traits<unit_syndrome::T_flags> {
    typedef uint32_t base_type;
    typedef unit_syndrome::T_flags bitfield_type;
    static const int bit_count = sizeof(base_type)*8;
    static const bitfield_item_info bits[bit_count];
  };
  template<> struct DFHACK_EXPORT identity_traits<unit_syndrome::T_flags> {
    static bitfield_identity identity;
    static bitfield_identity *get() { return &identity; }
  };
}
#endif
