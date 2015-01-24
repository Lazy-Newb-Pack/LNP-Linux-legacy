/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_ARMY_H
#define DF_ARMY_H
#ifndef DF_COORD_H
#include "coord.h"
#endif
#ifndef DF_ITEM_TYPE_H
#include "item_type.h"
#endif
namespace df {
  struct army_controller;
  struct DFHACK_EXPORT army {
    int32_t id;
    df::coord unk_pos1;
    df::coord unk_pos2;
    int16_t unk_10;
    int32_t unk_14;
    int32_t unk_18;
    struct DFHACK_EXPORT T_unk_1c {
      int32_t unk_0;
      int32_t unk_4;
      int32_t unk_8;
      int32_t unk_c;
      int32_t unk_10;
      int32_t unk_14;
      int32_t unk_18;
      int32_t unk_1c;
      int32_t unk_20;
      int32_t unk_24;
      int32_t unk_28;
      int32_t unk_2c;
      int32_t unk_30;
      int32_t unk_34;
      std::vector<void* > unk_38;
      static struct_identity _identity;
    public:
      T_unk_1c();
    };
    std::vector<T_unk_1c* > unk_1c;
    struct DFHACK_EXPORT T_unk_2c {
      int32_t unk_0;
      int32_t unk_4;
      int32_t unk_8;
      int32_t unk_c;
      int32_t unk_10;
      int32_t unk_14;
      int32_t unk_18;
      int32_t unk_1c;
      int32_t unk_20;
      int32_t unk_24;
      int32_t unk_28;
      static struct_identity _identity;
    public:
      T_unk_2c();
    };
    std::vector<T_unk_2c* > unk_2c;
    int32_t unk_3c;
    int32_t controller_id;
    df::army_controller* controller;
    BitArray<int> unk_48;
    std::vector<int32_t > unk_pos_x;
    std::vector<int32_t > unk_pos_y;
    std::vector<int32_t > unk_70;
    std::vector<int32_t > unk_80;
    int32_t unk_90;
    int32_t unk_94;
    int32_t unk_98;
    int32_t unk_9c;
    int32_t unk_a0;
    int32_t unk_a4;
    std::vector<void* > unk_a8;
    std::vector<std::string* > creature_class;
    df::item_type item_type;
    int16_t item_subtype;
    int16_t mat_type;
    int32_t mat_index;
    static struct_identity _identity;
    typedef army* key_pointer_type;
    typedef int32_t key_field_type;
    static int binsearch_index(const std::vector<army*> &vec, key_field_type key, bool exact = true);
    static int binsearch_index(const std::vector<army*> &vec, key_pointer_type key, bool exact = true);
    static std::vector<army*> &get_vector();
    static army *find(key_field_type id);
  public:
    army();
  };
}
#endif
