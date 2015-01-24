/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_MOVING_PARTY_H
#define DF_MOVING_PARTY_H
#ifndef DF_COORD2D_H
#include "coord2d.h"
#endif
namespace df {
  struct DFHACK_EXPORT moving_party {
    df::coord2d pos; /*!< global block x/y */
    int16_t unk_4;
    int32_t unk_c;
    int32_t unk_10;
    struct DFHACK_EXPORT T_members {
      int32_t nemesis_id;
      int32_t hunger;
      int32_t thirst;
      int32_t sleepiness;
      int32_t stored_fat;
      int32_t unk_14;
      int32_t unk_18; /*!< maybe type */
      int32_t unk_1c;
      int32_t unk_20;
      int32_t unk_24;
      static struct_identity _identity;
    public:
      T_members();
    };
    std::vector<T_members* > members;
    int32_t entity_id;
    BitArray<int> flags;
    std::vector<void* > unk_30;
    std::vector<void* > unk_40;
    int16_t unk_70;
    int16_t unk_72;
    int16_t unk_74;
    int32_t unk_7c;
    int32_t region_id;
    int32_t beast_id; /*!< for FB */
    static struct_identity _identity;
  public:
    moving_party();
  };
}
#endif
