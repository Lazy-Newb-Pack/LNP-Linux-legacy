/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_HISTORICAL_FIGURE_INFO_H
#define DF_HISTORICAL_FIGURE_INFO_H
#ifndef DF_COORD2D_H
#include "coord2d.h"
#endif
#ifndef DF_JOB_SKILL_H
#include "job_skill.h"
#endif
#ifndef DF_SPHERE_TYPE_H
#include "sphere_type.h"
#endif
namespace df {
  struct artifact_record;
  struct entity_event;
  struct historical_kills;
  struct interaction;
  struct interaction_effect;
  struct unit_personality;
  struct DFHACK_EXPORT historical_figure_info {
    std::vector<enum_field<df::sphere_type,int16_t> >* spheres;
    struct DFHACK_EXPORT T_skills {
      std::vector<df::job_skill > skills;
      std::vector<int32_t > points;
      std::vector<int16_t > unk_20;
      std::vector<int32_t > unk_30;
      int16_t unk_60;
      static struct_identity _identity;
    public:
      T_skills();
    };
    T_skills* skills;
    std::vector<int16_t >* pets;
    df::unit_personality* personality;
    struct DFHACK_EXPORT T_masterpieces {
      std::vector<int32_t > events;
      std::vector<int32_t > events2; /*!< ones that were stolen??.. */
      static struct_identity _identity;
    public:
      T_masterpieces();
    };
    T_masterpieces* masterpieces;
    struct DFHACK_EXPORT T_unk_14 {
      int16_t unk_0;
      int32_t site;
      int32_t region_id;
      int32_t beast_id; /*!< for FB */
      int32_t anon_1;
      int32_t anon_2;
      int32_t anon_3;
      int32_t anon_4;
      int32_t anon_5;
      df::coord2d region;
      int8_t unk_14;
      int32_t unk_18;
      int32_t unk_1c;
      static struct_identity _identity;
    public:
      T_unk_14();
    };
    T_unk_14* unk_14;
    df::historical_kills* kills;
    struct DFHACK_EXPORT T_wounds {
      std::vector<int32_t > events;
      std::vector<bool> status;
      int32_t anon_1;
      int32_t anon_2;
      int32_t anon_3; /*!< v0.40.17-19 */
      static struct_identity _identity;
    public:
      T_wounds();
    };
    T_wounds* wounds;
    struct DFHACK_EXPORT T_secret {
      std::vector<df::interaction* > interactions;
      int32_t unk_10;
      std::vector<int32_t > anon_1;
      std::vector<int32_t > anon_2;
      struct DFHACK_EXPORT T_anon_3 {
        int32_t anon_1;
        int32_t anon_2;
        int32_t anon_3;
        int32_t anon_4;
        int32_t anon_5;
        int32_t anon_6;
        static struct_identity _identity;
      public:
        T_anon_3();
      };
      std::vector<T_anon_3* > anon_3;
      std::vector<df::entity_event* > anon_4;
      std::vector<int32_t > anon_5;
      std::vector<int32_t > anon_6;
      std::vector<int32_t > anon_7;
      std::vector<int32_t > anon_8;
      struct DFHACK_EXPORT T_anon_9 {
        int32_t anon_1;
        int32_t anon_2;
        std::vector<int32_t > anon_3;
        std::vector<int32_t > anon_4;
        std::vector<int32_t > anon_5;
        static struct_identity _identity;
      public:
        T_anon_9();
      };
      std::vector<T_anon_9* > anon_9;
      static struct_identity _identity;
    public:
      T_secret();
    };
    T_secret* secret; /*!< v0.34.01 */
    struct DFHACK_EXPORT T_curse {
      std::vector<df::interaction* > active_interactions;
      std::vector<df::interaction_effect* > active_effects;
      std::vector<df::interaction* > can_do;
      int32_t unk_30;
      int32_t unk_34;
      int32_t unk_38;
      int32_t unk_3c;
      int8_t unk_40;
      std::string name;
      std::string name_plural;
      std::string name_adjective;
      int32_t race;
      int16_t caste;
      std::vector<int32_t > unk_a0;
      std::vector<int32_t > unk_b0;
      std::vector<int32_t > unk_c0;
      int32_t unk_d0;
      int32_t unk_d4;
      int32_t unk_d8;
      int32_t unk_dc;
      std::string unk_e0;
      int32_t unk_fc;
      static struct_identity _identity;
    public:
      T_curse();
    };
    T_curse* curse; /*!< v0.34.01 */
    std::vector<df::artifact_record* >* books; /*!< v0.34.01 */
    struct DFHACK_EXPORT T_reputation {
      struct DFHACK_EXPORT T_wanted {
        int32_t entity_id;
        std::vector<int32_t > anon_1;
        std::vector<int32_t > anon_2;
        int32_t discovered_year;
        int32_t discovered_time;
        int32_t unsolved_murders;
        static struct_identity _identity;
      public:
        T_wanted();
      };
      std::vector<T_wanted* > wanted;
      struct DFHACK_EXPORT T_anon_1 {
        int32_t entity_id;
        std::vector<int32_t > anon_1;
        std::vector<int32_t > anon_2;
        int32_t discovered_year;
        int32_t discovered_time;
        int32_t unsolved_murders;
        static struct_identity _identity;
      public:
        T_anon_1();
      };
      std::vector<T_anon_1* > anon_1;
      int32_t cur_identity;
      std::vector<int32_t > all_identities;
      int32_t anon_2;
      static struct_identity _identity;
    public:
      T_reputation();
    };
    T_reputation* reputation; /*!< v0.34.01 */
    struct DFHACK_EXPORT T_relationships {
      struct DFHACK_EXPORT T_anon_1 {
        int32_t anon_1;
        int32_t anon_2;
        std::vector<int32_t > anon_3;
        std::vector<int32_t > anon_4;
        std::vector<int32_t > anon_5;
        int32_t anon_6;
        int32_t anon_7;
        int32_t anon_8;
        static struct_identity _identity;
      public:
        T_anon_1();
      };
      std::vector<T_anon_1* > anon_1;
      std::vector<int32_t > identities;
      static struct_identity _identity;
    public:
      T_relationships();
    };
    T_relationships* relationships;
    static struct_identity _identity;
  public:
    historical_figure_info();
  };
}
#endif
