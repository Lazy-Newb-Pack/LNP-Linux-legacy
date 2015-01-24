/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_INTERACTION_EFFECT_H
#define DF_INTERACTION_EFFECT_H
#ifndef DF_INTERACTION_EFFECT_LOCATION_HINT_H
#include "interaction_effect_location_hint.h"
#endif
#ifndef DF_INTERACTION_EFFECT_TYPE_H
#include "interaction_effect_type.h"
#endif
namespace df {
  struct DFHACK_EXPORT interaction_effect : virtual_class {
    int32_t anon_1;
    std::vector<std::string* > targets;
    std::vector<int32_t > anon_2;
    int32_t intermittent; /*!< 0 = weekly */
    std::vector<df::interaction_effect_location_hint > locations;
    union T_flags {
      uint32_t whole;
      struct {
        uint32_t IMMEDIATE : 1;
      } bits;
      enum Shift {
        shift_IMMEDIATE = 0
      };
      enum Mask : uint32_t {
        mask_IMMEDIATE = 0x1U
      };
      T_flags(uint32_t whole_ = 0) : whole(whole_) {};
    };
    T_flags flags;
    int32_t anon_3;
    std::string arena_name;
    static virtual_identity _identity;
  public:
    virtual df::interaction_effect_type getType() { return df::interaction_effect_type(); /*0*/ };
    virtual void write_file(void*) { /*1*/ };
    virtual void read_file(void*, int32_t) { /*2*/ };
    virtual ~interaction_effect() { /*3*/ };
  protected:
    virtual void anon_vmethod_4(int32_t, int32_t, int32_t) { /*4*/ };
  public:
    virtual void parseRaws(int32_t, int32_t, int32_t, int32_t, int32_t) { /*5*/ };
    virtual void finalize(int32_t) { /*6*/ };
  protected:
    virtual void anon_vmethod_7() { /*7*/ };
    virtual void anon_vmethod_8(int32_t, int32_t) { /*8*/ };
    virtual bool anon_vmethod_9(int32_t) { return bool(); /*9*/ };
  protected:
    interaction_effect(virtual_identity *_id = &interaction_effect::_identity);
    friend void *df::allocator_fn<interaction_effect>(void*,const void*);
  };
  template<> struct DFHACK_EXPORT bitfield_traits<interaction_effect::T_flags> {
    typedef uint32_t base_type;
    typedef interaction_effect::T_flags bitfield_type;
    static const int bit_count = sizeof(base_type)*8;
    static const bitfield_item_info bits[bit_count];
  };
  template<> struct DFHACK_EXPORT identity_traits<interaction_effect::T_flags> {
    static bitfield_identity identity;
    static bitfield_identity *get() { return &identity; }
  };
}
#endif
