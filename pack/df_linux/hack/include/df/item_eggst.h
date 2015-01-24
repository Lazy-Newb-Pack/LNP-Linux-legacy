/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_ITEM_EGGST_H
#define DF_ITEM_EGGST_H
#ifndef DF_ANIMAL_TRAINING_LEVEL_H
#include "animal_training_level.h"
#endif
#ifndef DF_ITEM_ACTUAL_H
#include "item_actual.h"
#endif
#ifndef DF_MATERIAL_VEC_REF_H
#include "material_vec_ref.h"
#endif
#ifndef DF_UNIT_FLAGS1_H
#include "unit_flags1.h"
#endif
#ifndef DF_UNIT_FLAGS2_H
#include "unit_flags2.h"
#endif
#ifndef DF_UNIT_FLAGS3_H
#include "unit_flags3.h"
#endif
#ifndef DF_WORLD_POPULATION_REF_H
#include "world_population_ref.h"
#endif
namespace df {
  struct unit_genes;
  struct DFHACK_EXPORT item_eggst : item_actual {
    int16_t race;
    int16_t caste;
    int32_t unk_7c;
    df::material_vec_ref egg_materials;
    union T_egg_flags {
      uint32_t whole;
      struct {
        uint32_t fertile : 1; /*!< allows the incubation_counter to be checked/incremented */
      } bits;
      enum Shift {
        shift_fertile = 0
      };
      enum Mask : uint32_t {
        mask_fertile = 0x1U
      };
      T_egg_flags(uint32_t whole_ = 0) : whole(whole_) {};
    };
    T_egg_flags egg_flags;
    int32_t incubation_counter; /*!< increments when fertile in unforbidden nestbox, hatch at >= 100800 (3 months) */
    int32_t hatchling_civ_id; /*!< hatchlings will have this civ_id */
    int32_t hatchling_population_id; /*!< hatchlings will have this population_id */
    int32_t hatchling_unit_unk_c0; /*!< hatchlings will have this unit.unk_c0 value */
    int32_t anon_1; /*!< v0.40.01 */
    df::unit_genes* mothers_genes; /*!< object owned by egg item */
    int16_t mothers_caste;
    int32_t anon_2; /*!< v0.40.01 */
    df::unit_genes* fathers_genes; /*!< object owned by egg item */
    int16_t fathers_caste; /*!< -1 if no father genes */
    int32_t anon_3; /*!< v0.40.01 */
    df::unit_flags1 hatchling_flags1; /*!< used primarily for bit_flag:tame */
    df::unit_flags2 hatchling_flags2; /*!< used primarily for bit_flag:roaming_wilderness_population_source */
    df::unit_flags3 hatchling_flags3; /*!< not normally used, most/all do not stick */
    df::animal_training_level hatchling_training_level;
    df::world_population_ref hatchling_animal_population;
    int32_t hatchling_mother_id;
    int32_t size;
    static virtual_identity _identity;
  protected:
    item_eggst(virtual_identity *_id = &item_eggst::_identity);
    friend void *df::allocator_fn<item_eggst>(void*,const void*);
  };
  template<> struct DFHACK_EXPORT bitfield_traits<item_eggst::T_egg_flags> {
    typedef uint32_t base_type;
    typedef item_eggst::T_egg_flags bitfield_type;
    static const int bit_count = sizeof(base_type)*8;
    static const bitfield_item_info bits[bit_count];
  };
  template<> struct DFHACK_EXPORT identity_traits<item_eggst::T_egg_flags> {
    static bitfield_identity identity;
    static bitfield_identity *get() { return &identity; }
  };
}
#endif
