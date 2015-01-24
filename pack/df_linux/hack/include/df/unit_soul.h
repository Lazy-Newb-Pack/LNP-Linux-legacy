/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_UNIT_SOUL_H
#define DF_UNIT_SOUL_H
#ifndef DF_LANGUAGE_NAME_H
#include "language_name.h"
#endif
#ifndef DF_ORIENTATION_FLAGS_H
#include "orientation_flags.h"
#endif
#ifndef DF_UNIT_ATTRIBUTE_H
#include "unit_attribute.h"
#endif
#ifndef DF_UNIT_PERSONALITY_H
#include "unit_personality.h"
#endif
namespace df {
  struct unit_preference;
  struct unit_skill;
  struct DFHACK_EXPORT unit_soul {
    int32_t unit_id;
    df::language_name name;
    uint32_t race;
    int8_t sex; /*!< -1 n/a, 0 female, 1 male */
    uint16_t caste;
    df::orientation_flags orientation_flags;
    int32_t unk2;
    int32_t unk3;
    int32_t unk4;
    int32_t anon_1; /*!< v0.34.01 */
    int32_t anon_2; /*!< v0.34.01 */
    int32_t anon_3; /*!< v0.34.01 */
    int32_t anon_4; /*!< v0.34.01 */
    int32_t anon_5; /*!< v0.40.01 */
    df::unit_attribute mental_attrs[13];
    std::vector<df::unit_skill* > skills;
    std::vector<df::unit_preference* > preferences;
    df::unit_personality personality;
    static struct_identity _identity;
  public:
    unit_soul();
  };
}
#endif
