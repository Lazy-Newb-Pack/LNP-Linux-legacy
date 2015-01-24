/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_UNIT_PERSONALITY_H
#define DF_UNIT_PERSONALITY_H
#ifndef DF_EMOTION_TYPE_H
#include "emotion_type.h"
#endif
#ifndef DF_GOAL_TYPE_H
#include "goal_type.h"
#endif
#ifndef DF_UNIT_THOUGHT_TYPE_H
#include "unit_thought_type.h"
#endif
#ifndef DF_VALUE_TYPE_H
#include "value_type.h"
#endif
namespace df {
  struct DFHACK_EXPORT unit_personality {
    struct DFHACK_EXPORT T_values {
      df::value_type type;
      int32_t strength;
      static struct_identity _identity;
    public:
      T_values();
    };
    std::vector<T_values* > values; /*!< v0.40.01 */
    struct DFHACK_EXPORT T_unk_v40_2 {
      int16_t unk1;
      int16_t unk2;
      static struct_identity _identity;
    public:
      T_unk_v40_2();
    };
    std::vector<T_unk_v40_2* > unk_v40_2; /*!< v0.40.01 */
    struct DFHACK_EXPORT T_emotions {
      df::emotion_type type;
      int32_t unk2;
      int32_t strength;
      df::unit_thought_type thought;
      int32_t subthought; /*!< for certain thoughts */
      int32_t severity;
      int32_t flags;
      int32_t unk7;
      int32_t year;
      int32_t year_tick;
      static struct_identity _identity;
    public:
      T_emotions();
    };
    std::vector<T_emotions* > emotions; /*!< v0.40.01 */
    struct DFHACK_EXPORT T_dreams {
      int32_t unk1;
      df::goal_type type;
      int32_t unk3;
      std::vector<int32_t > unk4;
      int32_t unk8;
      static struct_identity _identity;
    public:
      T_dreams();
    };
    std::vector<T_dreams* > dreams; /*!< v0.40.01 */
    int32_t next_dream_id; /*!< v0.40.01 */
    struct DFHACK_EXPORT T_unk_v40_6 {
      int32_t unk1;
      int32_t unk2;
      int32_t unk3;
      int32_t unk4;
      int32_t unk5;
      int32_t unk6;
      static struct_identity _identity;
    public:
      T_unk_v40_6();
    };
    std::vector<T_unk_v40_6* > unk_v40_6; /*!< v0.40.01 */
    uint16_t traits[50];
    int32_t civ_id; /*!< v0.40.01 */
    int32_t cultural_identity; /*!< v0.40.01 */
    struct DFHACK_EXPORT T_unk5 {
      int16_t unk1;
      int16_t unk2;
      static struct_identity _identity;
    public:
      T_unk5();
    };
    std::vector<T_unk5* > unk5;
    std::vector<int16_t > unk6;
    int32_t stress_level;
    int32_t unk_v4014_2; /*!< v0.40.14 */
    int32_t unk_v4014_3; /*!< v0.40.14 */
    int32_t unk_v4019_1; /*!< v0.40.17-19 */
    int32_t unk_v4019_2; /*!< v0.40.17-19 */
    static struct_identity _identity;
  public:
    unit_personality();
  };
}
#endif
