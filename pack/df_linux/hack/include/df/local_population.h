/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_LOCAL_POPULATION_H
#define DF_LOCAL_POPULATION_H
#ifndef DF_WORLD_POPULATION_REF_H
#include "world_population_ref.h"
#endif
#ifndef DF_WORLD_POPULATION_TYPE_H
#include "world_population_type.h"
#endif
namespace df {
  struct DFHACK_EXPORT local_population {
    enum_field<df::world_population_type,int8_t> type;
    union DFHACK_EXPORT {
      int16_t race;
      int16_t plant;
    };
    int32_t quantity;
    int32_t quantity2; /*!< v0.40.01 */
    union T_flags {
      uint8_t whole;
      struct {
        uint8_t discovered : 1;
        uint8_t extinct : 1; /*!< guessed, based on 23a */
        uint8_t already_removed : 1; /*!< no longer in world.populations */
        uint8_t unk3 : 1; /*!< prevents it from showing up, related to world.unk_59dc4 */
      } bits;
      enum Shift {
        shift_discovered = 0,
        shift_extinct = 1,
        shift_already_removed = 2,
        shift_unk3 = 3
      };
      enum Mask : uint8_t {
        mask_discovered = 0x1U,
        mask_extinct = 0x2U,
        mask_already_removed = 0x4U,
        mask_unk3 = 0x8U
      };
      T_flags(uint8_t whole_ = 0) : whole(whole_) {};
    };
    T_flags flags;
    df::world_population_ref population;
    int32_t wp_unk_10;
    int32_t wp_unk_18;
    int32_t wp_unk_1c;
    static struct_identity _identity;
  public:
    local_population();
  };
  template<> struct DFHACK_EXPORT bitfield_traits<local_population::T_flags> {
    typedef uint8_t base_type;
    typedef local_population::T_flags bitfield_type;
    static const int bit_count = sizeof(base_type)*8;
    static const bitfield_item_info bits[bit_count];
  };
  template<> struct DFHACK_EXPORT identity_traits<local_population::T_flags> {
    static bitfield_identity identity;
    static bitfield_identity *get() { return &identity; }
  };
}
#endif
