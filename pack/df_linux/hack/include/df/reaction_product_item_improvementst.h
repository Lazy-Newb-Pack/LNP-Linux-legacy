/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_REACTION_PRODUCT_ITEM_IMPROVEMENTST_H
#define DF_REACTION_PRODUCT_ITEM_IMPROVEMENTST_H
#ifndef DF_IMPROVEMENT_TYPE_H
#include "improvement_type.h"
#endif
#ifndef DF_REACTION_PRODUCT_H
#include "reaction_product.h"
#endif
#ifndef DF_REACTION_PRODUCT_IMPROVEMENT_FLAGS_H
#include "reaction_product_improvement_flags.h"
#endif
namespace df {
  struct DFHACK_EXPORT reaction_product_item_improvementst : reaction_product {
    std::string anon_1;
    std::string target_reagent;
    df::improvement_type improvement_type;
    int16_t mat_type;
    int32_t mat_index;
    int16_t probability;
    BitArray<df::reaction_product_improvement_flags> flags;
    struct DFHACK_EXPORT T_get_material {
      std::string reagent_code;
      std::string product_code;
      static struct_identity _identity;
    public:
      T_get_material();
    };
    T_get_material get_material;
    std::string material_str[3];
    static virtual_identity _identity;
  protected:
    reaction_product_item_improvementst(virtual_identity *_id = &reaction_product_item_improvementst::_identity);
    friend void *df::allocator_fn<reaction_product_item_improvementst>(void*,const void*);
  };
}
#endif
