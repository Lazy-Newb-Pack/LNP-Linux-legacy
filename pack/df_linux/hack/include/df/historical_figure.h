/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_HISTORICAL_FIGURE_H
#define DF_HISTORICAL_FIGURE_H
#ifndef DF_HISTFIG_FLAGS_H
#include "histfig_flags.h"
#endif
#ifndef DF_LANGUAGE_NAME_H
#include "language_name.h"
#endif
#ifndef DF_ORIENTATION_FLAGS_H
#include "orientation_flags.h"
#endif
#ifndef DF_PROFESSION_H
#include "profession.h"
#endif
namespace df {
  struct histfig_entity_link;
  struct histfig_hf_link;
  struct histfig_site_link;
  struct historical_figure_info;
  struct world_site;
  struct world_underground_region;
  struct DFHACK_EXPORT historical_figure {
    df::profession profession;
    int16_t race;
    int16_t caste;
    int8_t sex; /*!< -1 n/a, 0 female, 1 male */
    df::orientation_flags orientation_flags;
    int32_t appeared_year;
    int32_t born_year;
    int32_t born_seconds;
    int32_t curse_year; /*!< v0.34.01 */
    int32_t curse_seconds; /*!< v0.34.01 */
    int32_t birth_year_bias; /*!< v0.34.01 */
    int32_t birth_time_bias; /*!< v0.34.01 */
    int32_t old_year;
    int32_t old_seconds;
    int32_t died_year;
    int32_t died_seconds;
    df::language_name name;
    int32_t civ_id;
    int32_t population_id;
    int32_t breed_id; /*!< from legends export */
    int32_t cultural_identity; /*!< v0.40.1 */
    BitArray<df::histfig_flags> flags;
    int32_t unit_id;
    int32_t unit_id2; /*!< v0.40.1, sometimes garbage */
    int32_t id;
    int32_t unk4;
    std::vector<df::histfig_entity_link* > entity_links;
    std::vector<df::histfig_site_link* > site_links;
    std::vector<df::histfig_hf_link* > histfig_links;
    df::historical_figure_info* info;
    struct DFHACK_EXPORT T_worldgen {
      df::world_site* unk_0;
      df::language_name* unk_4;
      df::world_underground_region* unk_8;
      struct DFHACK_EXPORT T_unk_c {
        DfArray<uint8_t > unk_0;
        DfArray<int16_t > unk_8;
        static struct_identity _identity;
      public:
        T_unk_c();
      };
      T_unk_c* unk_c;
      int32_t unk_10;
      static struct_identity _identity;
    public:
      T_worldgen();
    };
    T_worldgen worldgen;
    int32_t unk_v4019_1; /*!< v0.40.17-19 */
    static struct_identity _identity;
    typedef historical_figure* key_pointer_type;
    typedef int32_t key_field_type;
    static int binsearch_index(const std::vector<historical_figure*> &vec, key_field_type key, bool exact = true);
    static int binsearch_index(const std::vector<historical_figure*> &vec, key_pointer_type key, bool exact = true);
    static std::vector<historical_figure*> &get_vector();
    static historical_figure *find(key_field_type id);
  public:
    historical_figure();
  };
}
#endif
