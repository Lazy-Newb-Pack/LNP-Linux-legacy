/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_VERMIN_H
#define DF_VERMIN_H
#ifndef DF_COORD_H
#include "coord.h"
#endif
#ifndef DF_VERMIN_FLAGS_H
#include "vermin_flags.h"
#endif
#ifndef DF_WORLD_POPULATION_REF_H
#include "world_population_ref.h"
#endif
namespace df {
  struct item;
  struct DFHACK_EXPORT vermin {
    int16_t race;
    int16_t caste;
    df::coord pos;
    bool visible; /*!< 1 = visible vermin */
    int16_t countdown;
    df::item* item;
    df::vermin_flags flags;
    int32_t amount; /*!< The total number of vermin in this object. Decimal constant 10000001 means infinity (probably). */
    df::world_population_ref population;
    int16_t unk_34;
    int32_t id; /*!< assigned during Save */
    static struct_identity _identity;
    static std::vector<vermin*> &get_vector();
    static vermin *find(int id);
  public:
    vermin();
  };
}
#endif
