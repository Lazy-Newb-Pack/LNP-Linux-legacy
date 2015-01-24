/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_DESCRIPTOR_SHAPE_H
#define DF_DESCRIPTOR_SHAPE_H
namespace df {
  struct DFHACK_EXPORT descriptor_shape {
    std::string id;
    std::vector<void* > word_unk;
    std::vector<int32_t > words;
    std::string name;
    std::string name_plural;
    std::vector<std::string* > adj;
    union T_gems_use {
      uint32_t whole;
      struct {
        uint32_t noun : 1;
        uint32_t adj : 1;
        uint32_t adj_noun : 1;
      } bits;
      enum Shift {
        shift_noun = 0,
        shift_adj = 1,
        shift_adj_noun = 2
      };
      enum Mask : uint32_t {
        mask_noun = 0x1U,
        mask_adj = 0x2U,
        mask_adj_noun = 0x4U
      };
      T_gems_use(uint32_t whole_ = 0) : whole(whole_) {};
    };
    T_gems_use gems_use;
    uint8_t tile;
    static struct_identity _identity;
    static std::vector<descriptor_shape*> &get_vector();
    static descriptor_shape *find(int id);
  public:
    descriptor_shape();
  };
  template<> struct DFHACK_EXPORT bitfield_traits<descriptor_shape::T_gems_use> {
    typedef uint32_t base_type;
    typedef descriptor_shape::T_gems_use bitfield_type;
    static const int bit_count = sizeof(base_type)*8;
    static const bitfield_item_info bits[bit_count];
  };
  template<> struct DFHACK_EXPORT identity_traits<descriptor_shape::T_gems_use> {
    static bitfield_identity identity;
    static bitfield_identity *get() { return &identity; }
  };
}
#endif
