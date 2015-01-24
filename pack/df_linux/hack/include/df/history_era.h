/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_HISTORY_ERA_H
#define DF_HISTORY_ERA_H
#ifndef DF_ERA_TYPE_H
#include "era_type.h"
#endif
namespace df {
  struct DFHACK_EXPORT history_era {
    int32_t year;
    struct DFHACK_EXPORT T_title {
      df::era_type type;
      int32_t histfig_1;
      int32_t histfig_2;
      int32_t ordinal;
      std::string name;
      int32_t percent; /*!< either percentage of single race or percentage of mundane */
      static struct_identity _identity;
    public:
      T_title();
    };
    T_title title;
    struct DFHACK_EXPORT T_details {
      int32_t living_powers;
      int32_t living_megabeasts;
      int32_t living_semimegabeasts;
      int32_t power_hf1;
      int32_t power_hf2;
      int32_t power_hf3;
      std::vector<int32_t > civilized_races;
      int32_t civilized_total;
      int32_t civilized_mundane;
      static struct_identity _identity;
    public:
      T_details();
    };
    T_details details;
    static struct_identity _identity;
  public:
    history_era();
  };
}
#endif
