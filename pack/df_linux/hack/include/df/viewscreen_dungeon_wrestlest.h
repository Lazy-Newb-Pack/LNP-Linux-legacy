/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_VIEWSCREEN_DUNGEON_WRESTLEST_H
#define DF_VIEWSCREEN_DUNGEON_WRESTLEST_H
#ifndef DF_VIEWSCREEN_H
#include "viewscreen.h"
#endif
namespace df {
  struct item;
  struct unit;
  struct DFHACK_EXPORT viewscreen_dungeon_wrestlest : viewscreen {
    df::unit* player;
    df::unit* target;
    int8_t anon_1;
    int32_t anon_2;
    std::vector<void* > anon_3;
    int32_t anon_4;
    int32_t anon_5;
    std::vector<int32_t > anon_6;
    std::vector<int32_t > anon_7;
    struct DFHACK_EXPORT T_unk1 {
      df::unit* anon_1;
      int8_t anon_2;
      int8_t anon_3;
      std::vector<df::item* > weapons;
      std::vector<int16_t > anon_4;
      std::vector<void* > anon_5;
      std::vector<int16_t > anon_6;
      std::vector<void* > anon_7;
      std::vector<void* > anon_8;
      std::vector<void* > anon_9;
      std::vector<void* > anon_10;
      std::vector<int16_t > anon_11;
      std::vector<int16_t > anon_12;
      std::vector<int16_t > anon_13;
      std::vector<int16_t > anon_14;
      std::vector<void* > anon_15;
      std::vector<void* > anon_16;
      std::vector<void* > anon_17;
      static struct_identity _identity;
    public:
      T_unk1();
    };
    T_unk1 unk1;
    int32_t anon_8;
    int32_t anon_9;
    static virtual_identity _identity;
  protected:
    viewscreen_dungeon_wrestlest(virtual_identity *_id = &viewscreen_dungeon_wrestlest::_identity);
    friend void *df::allocator_fn<viewscreen_dungeon_wrestlest>(void*,const void*);
  };
}
#endif
