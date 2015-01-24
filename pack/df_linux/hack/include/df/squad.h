/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_SQUAD_H
#define DF_SQUAD_H
#ifndef DF_LANGUAGE_NAME_H
#include "language_name.h"
#endif
#ifndef DF_SQUAD_SCHEDULE_ENTRY_H
#include "squad_schedule_entry.h"
#endif
#ifndef DF_SQUAD_USE_FLAGS_H
#include "squad_use_flags.h"
#endif
namespace df {
  struct squad_ammo_spec;
  struct squad_order;
  struct squad_position;
  struct DFHACK_EXPORT squad {
    int32_t id;
    df::language_name name;
    std::string alias; /*!< if not empty, used instead of name */
    std::vector<df::squad_position* > positions;
    std::vector<df::squad_order* > orders;
    typedef df::squad_schedule_entry T_schedule[12];
    std::vector<T_schedule* > schedule;
    int32_t cur_alert_idx;
    struct DFHACK_EXPORT T_rooms {
      int32_t building_id;
      df::squad_use_flags mode;
      static struct_identity _identity;
    public:
      T_rooms();
    };
    std::vector<T_rooms* > rooms;
    std::vector<int32_t > rack_combat;
    std::vector<int32_t > rack_training;
    int32_t uniform_priority;
    int32_t activity;
    std::vector<df::squad_ammo_spec* > ammunition;
    std::vector<int32_t > train_weapon_free;
    std::vector<int32_t > train_weapon_inuse;
    std::vector<int32_t > ammo_items;
    std::vector<int32_t > ammo_units;
    int16_t carry_food;
    int16_t carry_water;
    int32_t entity_id; /*!< v0.40.01 */
    int32_t leader_position; /*!< v0.40.01 */
    int32_t leader_assignment; /*!< v0.40.01 */
    static struct_identity _identity;
    typedef squad* key_pointer_type;
    typedef int32_t key_field_type;
    static int binsearch_index(const std::vector<squad*> &vec, key_field_type key, bool exact = true);
    static int binsearch_index(const std::vector<squad*> &vec, key_pointer_type key, bool exact = true);
    static std::vector<squad*> &get_vector();
    static squad *find(key_field_type id);
  public:
    squad();
  };
}
#endif
