/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_REPORT_H
#define DF_REPORT_H
#ifndef DF_ANNOUNCEMENT_TYPE_H
#include "announcement_type.h"
#endif
#ifndef DF_COORD_H
#include "coord.h"
#endif
namespace df {
  struct DFHACK_EXPORT report {
    df::announcement_type type; /*!< valid only if coordinates are */
    std::string text;
    int16_t color;
    bool bright;
    int32_t duration;
    union T_flags {
      uint8_t whole;
      struct {
        uint8_t continuation : 1; /*!< When split into multiple lines, set on all but the first */
        uint8_t unconscious : 1; /*!< units.active[0] */
        uint8_t announcement : 1;
      } bits;
      enum Shift {
        shift_continuation = 0,
        shift_unconscious = 1,
        shift_announcement = 2
      };
      enum Mask : uint8_t {
        mask_continuation = 0x1U,
        mask_unconscious = 0x2U,
        mask_announcement = 0x4U
      };
      T_flags(uint8_t whole_ = 0) : whole(whole_) {};
    };
    T_flags flags;
    int32_t repeat_count; /*!< 100 => displays: x101 */
    df::coord pos;
    int32_t id;
    int32_t year;
    int32_t time;
    int32_t unk_v40_1; /*!< v0.40.1 */
    int32_t unk_v40_2; /*!< v0.40.1 */
    int32_t unk_v40_3; /*!< v0.40.1 */
    static struct_identity _identity;
    typedef report* key_pointer_type;
    typedef int32_t key_field_type;
    static int binsearch_index(const std::vector<report*> &vec, key_field_type key, bool exact = true);
    static int binsearch_index(const std::vector<report*> &vec, key_pointer_type key, bool exact = true);
    static std::vector<report*> &get_vector();
    static report *find(key_field_type id);
  public:
    report();
  };
  template<> struct DFHACK_EXPORT bitfield_traits<report::T_flags> {
    typedef uint8_t base_type;
    typedef report::T_flags bitfield_type;
    static const int bit_count = sizeof(base_type)*8;
    static const bitfield_item_info bits[bit_count];
  };
  template<> struct DFHACK_EXPORT identity_traits<report::T_flags> {
    static bitfield_identity identity;
    static bitfield_identity *get() { return &identity; }
  };
}
#endif
