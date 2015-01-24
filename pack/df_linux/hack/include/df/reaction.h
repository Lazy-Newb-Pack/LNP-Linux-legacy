/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_REACTION_H
#define DF_REACTION_H
#ifndef DF_BUILDING_TYPE_H
#include "building_type.h"
#endif
#ifndef DF_JOB_SKILL_H
#include "job_skill.h"
#endif
#ifndef DF_REACTION_FLAGS_H
#include "reaction_flags.h"
#endif
namespace df {
  struct reaction_product;
  struct reaction_reagent;
  struct DFHACK_EXPORT reaction {
    std::string code;
    std::string name;
    BitArray<df::reaction_flags> flags;
    std::vector<df::reaction_reagent* > reagents;
    std::vector<df::reaction_product* > products;
    df::job_skill skill;
    struct DFHACK_EXPORT T_building {
      std::vector<std::string* > str[2];
      std::vector<df::building_type > type;
      std::vector<int32_t > subtype;
      std::vector<int32_t > custom;
      std::vector<int32_t > hotkey;
      static struct_identity _identity;
    public:
      T_building();
    };
    T_building building;
    int32_t index;
    static struct_identity _identity;
    static std::vector<reaction*> &get_vector();
    static reaction *find(int id);
  public:
    reaction();
  };
}
#endif
