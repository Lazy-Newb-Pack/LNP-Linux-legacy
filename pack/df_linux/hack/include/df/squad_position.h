/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_SQUAD_POSITION_H
#define DF_SQUAD_POSITION_H
#ifndef DF_UNIFORM_FLAGS_H
#include "uniform_flags.h"
#endif
namespace df {
  struct squad_order;
  struct squad_uniform_spec;
  struct DFHACK_EXPORT squad_position {
    int32_t occupant;
    std::vector<df::squad_order* > orders;
    std::vector<int32_t > preferences[4];
    std::vector<df::squad_uniform_spec* > uniform[7];
    std::string unk_c4;
    df::uniform_flags flags;
    std::vector<int32_t > assigned_items;
    int32_t quiver;
    int32_t backpack;
    int32_t flask;
    int32_t activities[3];
    int32_t events[3];
    int32_t unk_118;
    int32_t unk_11c;
    static struct_identity _identity;
  public:
    squad_position();
  };
}
#endif
