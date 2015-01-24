/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_REACTION_REAGENT_H
#define DF_REACTION_REAGENT_H
#ifndef DF_REACTION_REAGENT_FLAGS_H
#include "reaction_reagent_flags.h"
#endif
#ifndef DF_REACTION_REAGENT_TYPE_H
#include "reaction_reagent_type.h"
#endif
namespace df {
  struct item;
  struct reaction;
  struct DFHACK_EXPORT reaction_reagent : virtual_class {
    std::string code;
    int32_t quantity;
    df::reaction_reagent_flags flags;
    static virtual_identity _identity;
  public:
    virtual df::reaction_reagent_type getType() { return df::reaction_reagent_type(); /*0*/ };
  protected:
    virtual void anon_vmethod_1(int32_t, int32_t, int32_t, int32_t, int32_t, int32_t) { /*1*/ };
  public:
    virtual ~reaction_reagent() { /*2*/ };
    virtual void resolveTokens(int32_t) { /*3*/ };
  protected:
    virtual void anon_vmethod_4(int32_t, int32_t, int32_t) { /*4*/ };
  public:
    virtual bool matchesRoot(df::item*, int32_t) { return bool(); /*5*/ };
    virtual bool matchesChild(df::item*, df::reaction*, int32_t) { return bool(); /*6*/ };
    virtual void getDescription(std::string*, int32_t) { /*7*/ };
    virtual bool isLyeBearing() { return bool(); /*8*/ };
  protected:
    reaction_reagent(virtual_identity *_id = &reaction_reagent::_identity);
    friend void *df::allocator_fn<reaction_reagent>(void*,const void*);
  };
}
#endif
