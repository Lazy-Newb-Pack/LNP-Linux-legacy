/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_MACHINE_H
#define DF_MACHINE_H
#ifndef DF_MACHINE_TYPE_H
#include "machine_type.h"
#endif
namespace df {
  struct file_compressorst;
  struct DFHACK_EXPORT machine : virtual_class {
    int32_t x;
    int32_t y;
    int32_t z;
    int32_t id;
    struct DFHACK_EXPORT T_components {
      int32_t building_id;
      std::vector<int32_t > connections; /*!< indices into the same component vector */
      static struct_identity _identity;
    public:
      T_components();
    };
    std::vector<T_components* > components;
    int32_t cur_power;
    int32_t min_power;
    int8_t visual_phase;
    int16_t phase_timer;
    union T_flags {
      uint32_t whole;
      struct {
        uint32_t active : 1;
        uint32_t frozen : 1; /*!< ? */
        uint32_t unfreeze : 1; /*!< ? */
      } bits;
      enum Shift {
        shift_active = 0,
        shift_frozen = 1,
        shift_unfreeze = 2
      };
      enum Mask : uint32_t {
        mask_active = 0x1U,
        mask_frozen = 0x2U,
        mask_unfreeze = 0x4U
      };
      T_flags(uint32_t whole_ = 0) : whole(whole_) {};
    };
    T_flags flags;
    static virtual_identity _identity;
    typedef machine* key_pointer_type;
    typedef int32_t key_field_type;
    static int binsearch_index(const std::vector<machine*> &vec, key_field_type key, bool exact = true);
    static int binsearch_index(const std::vector<machine*> &vec, key_pointer_type key, bool exact = true);
    static std::vector<machine*> &get_vector();
    static machine *find(key_field_type id);
  public:
    virtual df::machine_type getType() { return df::machine_type(); /*0*/ };
    virtual void moveMachine(int16_t, int16_t, int16_t) { /*1*/ };
    virtual void write_file(df::file_compressorst*) { /*2*/ };
    virtual void read_file(df::file_compressorst*, int32_t) { /*3*/ };
    virtual ~machine() { /*4*/ };
  protected:
    machine(virtual_identity *_id = &machine::_identity);
    friend void *df::allocator_fn<machine>(void*,const void*);
  };
  template<> struct DFHACK_EXPORT bitfield_traits<machine::T_flags> {
    typedef uint32_t base_type;
    typedef machine::T_flags bitfield_type;
    static const int bit_count = sizeof(base_type)*8;
    static const bitfield_item_info bits[bit_count];
  };
  template<> struct DFHACK_EXPORT identity_traits<machine::T_flags> {
    static bitfield_identity identity;
    static bitfield_identity *get() { return &identity; }
  };
}
#endif
