/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_ITEM_FOODST_H
#define DF_ITEM_FOODST_H
#ifndef DF_ITEM_CRAFTED_H
#include "item_crafted.h"
#endif
#ifndef DF_ITEM_TYPE_H
#include "item_type.h"
#endif
namespace df {
  struct itemdef_foodst;
  struct DFHACK_EXPORT item_foodst : item_crafted {
    df::itemdef_foodst* subtype;
    int32_t entity;
    int16_t recipe_id;
    struct DFHACK_EXPORT T_ingredients {
      int16_t anon_1;
      df::item_type item_type;
      int16_t unk_4;
      int16_t mat_type;
      int32_t mat_index;
      int32_t maker;
      int16_t unk_10;
      int32_t unk_14;
      int32_t unk_18;
      static struct_identity _identity;
    public:
      T_ingredients();
    };
    std::vector<T_ingredients* > ingredients;
    int32_t rot_timer;
    static virtual_identity _identity;
  protected:
    item_foodst(virtual_identity *_id = &item_foodst::_identity);
    friend void *df::allocator_fn<item_foodst>(void*,const void*);
  };
}
#endif
