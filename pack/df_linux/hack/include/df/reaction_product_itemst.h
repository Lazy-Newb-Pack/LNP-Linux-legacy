/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_REACTION_PRODUCT_ITEMST_H
#define DF_REACTION_PRODUCT_ITEMST_H
#ifndef DF_ITEM_TYPE_H
#include "item_type.h"
#endif
#ifndef DF_REACTION_PRODUCT_H
#include "reaction_product.h"
#endif
#ifndef DF_REACTION_PRODUCT_ITEM_FLAGS_H
#include "reaction_product_item_flags.h"
#endif
namespace df {
  struct DFHACK_EXPORT reaction_product_itemst : reaction_product {
    std::string product_to_container;
    df::item_type item_type;
    int16_t item_subtype;
    int16_t mat_type;
    int32_t mat_index;
    int16_t probability;
    int16_t count;
    int32_t product_dimension;
    BitArray<df::reaction_product_item_flags> flags;
    struct DFHACK_EXPORT T_get_material {
      std::string reagent_code;
      std::string product_code;
      static struct_identity _identity;
    public:
      T_get_material();
    };
    T_get_material get_material;
    std::string item_str[2];
    std::string material_str[3];
    static virtual_identity _identity;
  protected:
    reaction_product_itemst(virtual_identity *_id = &reaction_product_itemst::_identity);
    friend void *df::allocator_fn<reaction_product_itemst>(void*,const void*);
  };
}
#endif
