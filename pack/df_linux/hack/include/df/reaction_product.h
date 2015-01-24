/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_REACTION_PRODUCT_H
#define DF_REACTION_PRODUCT_H
#ifndef DF_JOB_SKILL_H
#include "job_skill.h"
#endif
#ifndef DF_REACTION_PRODUCT_TYPE_H
#include "reaction_product_type.h"
#endif
namespace df {
  struct historical_entity;
  struct item;
  struct reaction_reagent;
  struct unit;
  struct world_site;
  struct DFHACK_EXPORT reaction_product : virtual_class {
    static virtual_identity _identity;
  public:
    virtual df::reaction_product_type getType() { return df::reaction_product_type(); /*0*/ };
    virtual void resolveTokens(int32_t) { /*1*/ };
    virtual void produce(df::unit*, std::vector<df::item* >*, std::vector<df::reaction_reagent* >*, std::vector<df::item* >*, int32_t, df::job_skill, df::historical_entity*, df::world_site*) { /*2*/ };
    virtual void getDescription(std::string*) { /*3*/ }; /*!< used in Adventurer mode reactions? */
    virtual ~reaction_product() { /*4*/ };
  protected:
    reaction_product(virtual_identity *_id = &reaction_product::_identity);
    friend void *df::allocator_fn<reaction_product>(void*,const void*);
  };
}
#endif
