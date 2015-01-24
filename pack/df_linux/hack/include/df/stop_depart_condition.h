/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_STOP_DEPART_CONDITION_H
#define DF_STOP_DEPART_CONDITION_H
#ifndef DF_COORD_PATH_H
#include "coord_path.h"
#endif
namespace df {
  struct DFHACK_EXPORT stop_depart_condition {
    int32_t timeout;
    enum T_direction : int32_t {
      North,
      South,
      East,
      West
    };
    T_direction direction;
    enum T_mode : int32_t {
      Push,
      Ride,
      Guide
    };
    T_mode mode;
    int32_t load_percent; /*!< broken display unless 0, 50 or 100 */
    union T_flags {
      uint32_t whole;
      struct {
        uint32_t at_most : 1;
        uint32_t desired : 1;
      } bits;
      enum Shift {
        shift_at_most = 0,
        shift_desired = 1
      };
      enum Mask : uint32_t {
        mask_at_most = 0x1U,
        mask_desired = 0x2U
      };
      T_flags(uint32_t whole_ = 0) : whole(whole_) {};
    };
    T_flags flags;
    df::coord_path guide_path; /*!< initialized on first run, and saved */
    static struct_identity _identity;
  public:
    stop_depart_condition();
  };
  template<> struct DFHACK_EXPORT identity_traits<stop_depart_condition::T_direction> {
    static enum_identity identity;
    static enum_identity *get() { return &identity; }
  };
  template<> struct DFHACK_EXPORT enum_traits<stop_depart_condition::T_direction> {
    typedef int32_t base_type;
    typedef stop_depart_condition::T_direction enum_type;
    static const base_type first_item_value = 0;
    static const base_type last_item_value = 3;
    static inline bool is_valid(enum_type value) {
      return (base_type(value) >= first_item_value && base_type(value) <= last_item_value);
    }
    static const enum_type first_item = (enum_type)first_item_value;
    static const enum_type last_item = (enum_type)last_item_value;
    static const char *const key_table[4];
  };
  template<> struct DFHACK_EXPORT identity_traits<stop_depart_condition::T_mode> {
    static enum_identity identity;
    static enum_identity *get() { return &identity; }
  };
  template<> struct DFHACK_EXPORT enum_traits<stop_depart_condition::T_mode> {
    typedef int32_t base_type;
    typedef stop_depart_condition::T_mode enum_type;
    static const base_type first_item_value = 0;
    static const base_type last_item_value = 2;
    static inline bool is_valid(enum_type value) {
      return (base_type(value) >= first_item_value && base_type(value) <= last_item_value);
    }
    static const enum_type first_item = (enum_type)first_item_value;
    static const enum_type last_item = (enum_type)last_item_value;
    static const char *const key_table[3];
  };
  template<> struct DFHACK_EXPORT bitfield_traits<stop_depart_condition::T_flags> {
    typedef uint32_t base_type;
    typedef stop_depart_condition::T_flags bitfield_type;
    static const int bit_count = sizeof(base_type)*8;
    static const bitfield_item_info bits[bit_count];
  };
  template<> struct DFHACK_EXPORT identity_traits<stop_depart_condition::T_flags> {
    static bitfield_identity identity;
    static bitfield_identity *get() { return &identity; }
  };
}
#endif
