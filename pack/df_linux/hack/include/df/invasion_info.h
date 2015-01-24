/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_INVASION_INFO_H
#define DF_INVASION_INFO_H
namespace df {
  struct DFHACK_EXPORT invasion_info {
    int32_t id;
    int32_t civ_id;
    int32_t active_size1; /*!< 0 unless active */
    int32_t active_size2;
    int32_t size;
    int32_t duration_counter;
    union T_flags {
      uint16_t whole;
      struct {
        uint16_t active : 1;
        uint16_t siege : 1;
      } bits;
      enum Shift {
        shift_active = 0,
        shift_siege = 1
      };
      enum Mask : uint16_t {
        mask_active = 0x1U,
        mask_siege = 0x2U
      };
      T_flags(uint16_t whole_ = 0) : whole(whole_) {};
    };
    T_flags flags;
    int16_t unk4b;
    static struct_identity _identity;
    typedef invasion_info* key_pointer_type;
    typedef int32_t key_field_type;
    static int binsearch_index(const std::vector<invasion_info*> &vec, key_field_type key, bool exact = true);
    static int binsearch_index(const std::vector<invasion_info*> &vec, key_pointer_type key, bool exact = true);
    static std::vector<invasion_info*> &get_vector();
    static invasion_info *find(key_field_type id);
  public:
    invasion_info();
  };
  template<> struct DFHACK_EXPORT bitfield_traits<invasion_info::T_flags> {
    typedef uint16_t base_type;
    typedef invasion_info::T_flags bitfield_type;
    static const int bit_count = sizeof(base_type)*8;
    static const bitfield_item_info bits[bit_count];
  };
  template<> struct DFHACK_EXPORT identity_traits<invasion_info::T_flags> {
    static bitfield_identity identity;
    static bitfield_identity *get() { return &identity; }
  };
}
#endif
