/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_CREATURE_INTERACTION_EFFECT_H
#define DF_CREATURE_INTERACTION_EFFECT_H
#ifndef DF_CREATURE_INTERACTION_EFFECT_FLAGS_H
#include "creature_interaction_effect_flags.h"
#endif
#ifndef DF_CREATURE_INTERACTION_EFFECT_TARGET_MODE_H
#include "creature_interaction_effect_target_mode.h"
#endif
#ifndef DF_CREATURE_INTERACTION_EFFECT_TYPE_H
#include "creature_interaction_effect_type.h"
#endif
#ifndef DF_MISC_TRAIT_TYPE_H
#include "misc_trait_type.h"
#endif
namespace df {
  struct syndrome;
  struct unit;
  struct unit_syndrome;
  struct unit_wound;
  struct DFHACK_EXPORT creature_interaction_effect : virtual_class {
    df::creature_interaction_effect_flags flags;
    int32_t prob;
    int32_t start;
    int32_t peak;
    int32_t end;
    int32_t syn_id;
    int32_t id;
    int32_t syn_index; /*!< index in syndrome */
    int32_t moon_phase_min;
    int32_t moon_phase_max;
    struct DFHACK_EXPORT T_counter_trigger {
      std::vector<enum_field<df::misc_trait_type,int32_t> > counter;
      std::vector<int32_t > minval; /*!< ? */
      std::vector<int32_t > maxval; /*!< ? */
      std::vector<int32_t > required;
      static struct_identity _identity;
    public:
      T_counter_trigger();
    };
    T_counter_trigger counter_trigger;
    static virtual_identity _identity;
    static std::vector<creature_interaction_effect*> &get_vector();
    static creature_interaction_effect *find(int id);
  public:
    virtual df::creature_interaction_effect_type getType() { return df::creature_interaction_effect_type(); /*0*/ };
    virtual df::creature_interaction_effect* clone() { return 0; /*1*/ };
    virtual ~creature_interaction_effect() { /*2*/ };
    virtual void doAction(df::unit*, df::unit_syndrome*, df::syndrome*, int32_t, int16_t, int16_t, df::unit_wound**) { /*3*/ };
    virtual bool isUntargeted() { return bool(); /*4*/ };
    virtual std::vector<df::creature_interaction_effect_target_mode >* getTargetModes() { return 0; /*5*/ };
    virtual std::vector<std::string* >* getTargetKeys() { return 0; /*6*/ };
    virtual std::vector<std::string* >* getTargetTissues() { return 0; /*7*/ };
    virtual bool checkAddFlag1(uint32_t) { return bool(); /*8*/ };
    virtual void setBodyMatInteractionName(void*) { /*9*/ };
    virtual void parseSynAcquireType(void*) { /*10*/ };
    virtual void setBodyTransform(void*, void*) { /*11*/ };
    virtual void addPeriodic(void*, void*, void*) { /*12*/ };
    virtual void addCounterTrigger(void*, void*, void*, void*) { /*13*/ };
  protected:
    virtual void anon_vmethod_14(void*) { /*14*/ };
    virtual void anon_vmethod_15() { /*15*/ };
    virtual std::vector<void* >* anon_vmethod_16() { return 0; /*16*/ }; /*!< can_do_interaction, returns unk_6c */
  protected:
    creature_interaction_effect(virtual_identity *_id = &creature_interaction_effect::_identity);
    friend void *df::allocator_fn<creature_interaction_effect>(void*,const void*);
  };
}
#endif
