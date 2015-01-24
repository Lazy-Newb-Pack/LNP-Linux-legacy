/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_UNIT_ACTION_H
#define DF_UNIT_ACTION_H
#ifndef DF_UNIT_ACTION_TYPE_H
#include "unit_action_type.h"
#endif
namespace df {
  struct DFHACK_EXPORT unit_action {
    df::unit_action_type type;
    int32_t id;
    union DFHACK_EXPORT T_data {
      struct DFHACK_EXPORT T_move {
        int16_t x;
        int16_t y;
        int16_t z;
        int32_t timer;
        int32_t timer_init;
        int32_t fatigue;
        int32_t flags; /*!< cannot put bitfields inside unions */
      };
      T_move move;
      struct DFHACK_EXPORT T_attack {
        int32_t target_unit_id;
        struct DFHACK_EXPORT T_unk_4 {
          int32_t wrestle_type; /*!< 0=wrestle, 1=grab */
          int16_t unk_4;
          int16_t unk_6;
          int32_t unk_8;
          int32_t unk_c;
          int32_t unk_10;
          int16_t unk_14;
        };
        T_unk_4 unk_4;
        int32_t attack_item_id;
        int16_t target_body_part_id;
        int16_t attack_body_part_id;
        int32_t attack_id; /*!< refers to weapon_attack or caste_attack */
        int32_t unk_28;
        int32_t unk_2c;
        int32_t unk_30;
        int32_t flags; /*!< cannot put bitfields inside unions */
        int16_t unk_38;
        int32_t unk_3c;
        int32_t timer1; /*!< prepare */
        int32_t timer2; /*!< recover */
      };
      T_attack attack;
      struct DFHACK_EXPORT T_jump {
        int16_t x1;
        int16_t y1;
        int16_t z1;
        int16_t x2;
        int16_t y2;
        int16_t z2;
      };
      T_jump jump;
      struct DFHACK_EXPORT T_holdterrain {
        int16_t x1;
        int16_t y1;
        int16_t z1;
        int16_t x2;
        int16_t y2;
        int16_t z2;
        int16_t x3;
        int16_t y3;
        int16_t z3;
        int32_t timer;
        int32_t fatigue;
      };
      T_holdterrain holdterrain;
      struct DFHACK_EXPORT T_releaseterrain {
        int16_t x;
        int16_t y;
        int16_t z;
      };
      T_releaseterrain releaseterrain;
      struct DFHACK_EXPORT T_climb {
        int16_t x1;
        int16_t y1;
        int16_t z1;
        int16_t x2;
        int16_t y2;
        int16_t z2;
        int16_t x3;
        int16_t y3;
        int16_t z3;
        int32_t timer;
        int32_t timer_init;
        int32_t fatigue;
      };
      T_climb climb;
      struct DFHACK_EXPORT T_job {
        int16_t x;
        int16_t y;
        int16_t z;
        int32_t timer;
      };
      T_job job;
      struct DFHACK_EXPORT T_talk {
        int32_t unk_0;
        int32_t activity_id;
        int32_t activity_event_idx;
        int32_t event[10];
        int32_t unk_34;
        int32_t timer;
        int32_t unk_3c;
        int32_t unk_40;
        int32_t unk_44;
        int32_t unk_48;
        int32_t unk_4c;
        int32_t unk_50;
        int32_t unk_54;
      };
      T_talk talk;
      struct DFHACK_EXPORT T_unsteady {
        int32_t timer;
      };
      T_unsteady unsteady;
      struct DFHACK_EXPORT T_parry {
        int32_t unit_id;
        int32_t target_action;
        int32_t parry_item_id;
      };
      T_parry parry;
      struct DFHACK_EXPORT T_block {
        int32_t unit_id;
        int32_t target_action;
        int32_t block_item_id;
      };
      T_block block;
      struct DFHACK_EXPORT T_dodge {
        int16_t x1;
        int16_t y1;
        int16_t z1;
        int32_t timer;
        int16_t x2;
        int16_t y2;
        int16_t z2;
      };
      T_dodge dodge;
      struct DFHACK_EXPORT T_recover {
        int32_t timer;
        int32_t unk_4;
      };
      T_recover recover;
      struct DFHACK_EXPORT T_standup {
        int32_t timer;
      };
      T_standup standup;
      struct DFHACK_EXPORT T_liedown {
        int32_t timer;
      };
      T_liedown liedown;
      struct DFHACK_EXPORT T_job2 {
        int32_t timer;
      };
      T_job2 job2;
      struct DFHACK_EXPORT T_pushobject {
        int16_t x1;
        int16_t y1;
        int16_t z1;
        int16_t x2;
        int16_t y2;
        int16_t z2;
        int16_t x3;
        int16_t y3;
        int16_t z3;
        int32_t timer;
        int32_t unk_18;
      };
      T_pushobject pushobject;
      struct DFHACK_EXPORT T_suckblood {
        int32_t unit_id;
        int32_t timer;
      };
      T_suckblood suckblood;
      struct DFHACK_EXPORT T_holditem {
        int16_t x1;
        int16_t y1;
        int16_t z1;
        int16_t x2;
        int16_t y2;
        int16_t z2;
        int32_t unk_c;
        int32_t unk_10;
        int32_t unk_14;
      };
      T_holditem holditem;
      struct DFHACK_EXPORT T_releaseitem {
        int32_t unk_0;
      };
      T_releaseitem releaseitem;
      int32_t raw_data[22];
    };
    T_data data;
    static struct_identity _identity;
  public:
    unit_action();
  };
  template<> struct DFHACK_EXPORT identity_traits<unit_action::T_data::T_move> {
    static struct_identity identity;
    static struct_identity *get() { return &identity; }
  };
  template<> struct DFHACK_EXPORT identity_traits<unit_action::T_data::T_attack::T_unk_4> {
    static struct_identity identity;
    static struct_identity *get() { return &identity; }
  };
  template<> struct DFHACK_EXPORT identity_traits<unit_action::T_data::T_attack> {
    static struct_identity identity;
    static struct_identity *get() { return &identity; }
  };
  template<> struct DFHACK_EXPORT identity_traits<unit_action::T_data::T_jump> {
    static struct_identity identity;
    static struct_identity *get() { return &identity; }
  };
  template<> struct DFHACK_EXPORT identity_traits<unit_action::T_data::T_holdterrain> {
    static struct_identity identity;
    static struct_identity *get() { return &identity; }
  };
  template<> struct DFHACK_EXPORT identity_traits<unit_action::T_data::T_releaseterrain> {
    static struct_identity identity;
    static struct_identity *get() { return &identity; }
  };
  template<> struct DFHACK_EXPORT identity_traits<unit_action::T_data::T_climb> {
    static struct_identity identity;
    static struct_identity *get() { return &identity; }
  };
  template<> struct DFHACK_EXPORT identity_traits<unit_action::T_data::T_job> {
    static struct_identity identity;
    static struct_identity *get() { return &identity; }
  };
  template<> struct DFHACK_EXPORT identity_traits<unit_action::T_data::T_talk> {
    static struct_identity identity;
    static struct_identity *get() { return &identity; }
  };
  template<> struct DFHACK_EXPORT identity_traits<unit_action::T_data::T_unsteady> {
    static struct_identity identity;
    static struct_identity *get() { return &identity; }
  };
  template<> struct DFHACK_EXPORT identity_traits<unit_action::T_data::T_parry> {
    static struct_identity identity;
    static struct_identity *get() { return &identity; }
  };
  template<> struct DFHACK_EXPORT identity_traits<unit_action::T_data::T_block> {
    static struct_identity identity;
    static struct_identity *get() { return &identity; }
  };
  template<> struct DFHACK_EXPORT identity_traits<unit_action::T_data::T_dodge> {
    static struct_identity identity;
    static struct_identity *get() { return &identity; }
  };
  template<> struct DFHACK_EXPORT identity_traits<unit_action::T_data::T_recover> {
    static struct_identity identity;
    static struct_identity *get() { return &identity; }
  };
  template<> struct DFHACK_EXPORT identity_traits<unit_action::T_data::T_standup> {
    static struct_identity identity;
    static struct_identity *get() { return &identity; }
  };
  template<> struct DFHACK_EXPORT identity_traits<unit_action::T_data::T_liedown> {
    static struct_identity identity;
    static struct_identity *get() { return &identity; }
  };
  template<> struct DFHACK_EXPORT identity_traits<unit_action::T_data::T_job2> {
    static struct_identity identity;
    static struct_identity *get() { return &identity; }
  };
  template<> struct DFHACK_EXPORT identity_traits<unit_action::T_data::T_pushobject> {
    static struct_identity identity;
    static struct_identity *get() { return &identity; }
  };
  template<> struct DFHACK_EXPORT identity_traits<unit_action::T_data::T_suckblood> {
    static struct_identity identity;
    static struct_identity *get() { return &identity; }
  };
  template<> struct DFHACK_EXPORT identity_traits<unit_action::T_data::T_holditem> {
    static struct_identity identity;
    static struct_identity *get() { return &identity; }
  };
  template<> struct DFHACK_EXPORT identity_traits<unit_action::T_data::T_releaseitem> {
    static struct_identity identity;
    static struct_identity *get() { return &identity; }
  };
  template<> struct DFHACK_EXPORT identity_traits<unit_action::T_data> {
    static struct_identity identity;
    static struct_identity *get() { return &identity; }
  };
}
#endif
