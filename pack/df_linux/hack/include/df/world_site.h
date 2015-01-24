/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_WORLD_SITE_H
#define DF_WORLD_SITE_H
#ifndef DF_COORD_H
#include "coord.h"
#endif
#ifndef DF_COORD2D_H
#include "coord2d.h"
#endif
#ifndef DF_LANGUAGE_NAME_H
#include "language_name.h"
#endif
#ifndef DF_WORLD_SITE_FLAGS_H
#include "world_site_flags.h"
#endif
#ifndef DF_WORLD_SITE_TYPE_H
#include "world_site_type.h"
#endif
namespace df {
  struct abstract_building;
  struct artifact_record;
  struct cultural_identity;
  struct entity_site_link;
  struct world_population;
  struct world_site_inhabitant;
  struct world_site_realization;
  struct world_site_unk130;
  struct DFHACK_EXPORT world_site {
    df::language_name name;
    int32_t civ_id;
    int32_t cur_owner_id;
    df::world_site_type type;
    df::coord2d pos;
    int32_t id;
    std::vector<int32_t > nemesis;
    std::vector<df::artifact_record* > artifacts;
    std::vector<df::world_population* > animals;
    std::vector<df::world_site_inhabitant* > inhabitants;
    struct DFHACK_EXPORT T_units {
      int32_t unit_id;
      int32_t pos_x;
      int32_t pos_y;
      int32_t pos_z;
      int32_t unk_10;
      static struct_identity _identity;
    public:
      T_units();
    };
    std::vector<T_units* > units;
    std::vector<void* > unk_d4;
    std::vector<void* > unk_v40_1a; /*!< v0.40.1 */
    char anon_1[4];
    std::vector<void* > unk_v40_1b; /*!< v0.40.1 */
    std::vector<void* > unk_v40_1c; /*!< v0.40.1 */
    std::vector<void* > unk_v40_1d; /*!< v0.40.1 */
    std::vector<void* > unk_v40_1e; /*!< v0.40.1 */
    std::vector<void* > unk_v40_1f; /*!< v0.40.1 */
    std::vector<void* > unk_v40_1g; /*!< v0.40.1 */
    std::vector<void* > unk_v40_1h; /*!< v0.40.1 */
    int32_t index;
    int16_t rgn_min_x; /*!< in embark tiles */
    int16_t rgn_max_x;
    int16_t rgn_min_y;
    int16_t rgn_max_y;
    int16_t rgn_min_z;
    int16_t rgn_max_z;
    int32_t global_min_x; /*!< in embark tiles */
    int32_t global_min_y;
    int32_t global_max_x;
    int32_t global_max_y;
    uint32_t seed1; /*!< random */
    uint32_t seed2; /*!< random */
    int32_t resident_count; /*!< count living in houses and shops */
    int32_t unk_110;
    int32_t unk_114;
    int32_t unk_118;
    int32_t unk_11c;
    int32_t unk_120;
    int32_t unk_124;
    int32_t unk_128;
    int32_t unk_12c;
    int32_t unk_130;
    int32_t unk_134;
    int32_t unk_138;
    int32_t site_level; /*!< v0.34.01 */
    struct DFHACK_EXPORT T_unk_13c {
      int32_t unk_0;
      int32_t unk_4;
      int32_t unk_8;
      int32_t unk_c;
      std::vector<void* > unk_10;
      std::vector<void* > unk_20;
      int32_t unk_30;
      static struct_identity _identity;
    public:
      T_unk_13c();
    };
    std::vector<T_unk_13c* > unk_13c; /*!< mountain halls */
    struct DFHACK_EXPORT T_unk_v40_2 {
      int32_t unk_0;
      int32_t unk_4;
      int32_t unk_8;
      int32_t unk_c;
      std::vector<int32_t > unk_10;
      std::vector<int32_t > unk_20;
      int32_t unk_30;
      static struct_identity _identity;
    public:
      T_unk_v40_2();
    };
    std::vector<T_unk_v40_2* > unk_v40_2; /*!< v0.40.1; forest retreat */
    BitArray<df::world_site_flags> flags;
    std::vector<df::abstract_building* > buildings;
    int32_t next_building_id;
    int32_t created_tick;
    int32_t created_year;
    int32_t unk_170;
    int32_t unk_174;
    df::coord unk_178;
    df::world_site_realization* realization;
    struct DFHACK_EXPORT T_subtype_info {
      int16_t is_tower; /*!< 1 => not fortress */
      int16_t is_monument; /*!< not tomb */
      int16_t lair_type; /*!< 2 monument, 3 shrine */
      std::vector<int16_t > unk_8;
      int32_t unk_14;
      int32_t unk_18;
      int32_t unk_1c;
      int32_t creator; /*!< v0.40.01 */
      int32_t unk_28; /*!< v0.40.01 */
      static struct_identity _identity;
    public:
      T_subtype_info();
    };
    T_subtype_info* subtype_info;
    struct DFHACK_EXPORT T_unk_21c {
      int32_t unk_0;
      int32_t unk_4;
      int32_t unk_8;
      int32_t unk_c;
      int32_t unk_10;
      int32_t unk_14;
      int32_t unk_18;
      int32_t unk_1c;
      static struct_identity _identity;
    public:
      T_unk_21c();
    };
    std::vector<T_unk_21c* > unk_21c; /*!< v0.34.01 */
    std::vector<int32_t > unk_22c; /*!< v0.34.01 */
    int32_t unk_v40_3a; /*!< v0.40.1 */
    int32_t unk_v40_3b; /*!< v0.40.1 */
    struct DFHACK_EXPORT T_unk_v40_4a {
      int32_t unk_0;
      int32_t entity_id;
      int32_t year;
      int32_t year_tick;
      int32_t unk_10;
      static struct_identity _identity;
    public:
      T_unk_v40_4a();
    };
    std::vector<T_unk_v40_4a* > unk_v40_4a; /*!< v0.40.1 */
    std::vector<void* > unk_v40_4b; /*!< v0.40.1 */
    std::vector<void* > unk_v40_4c; /*!< v0.40.1 */
    std::vector<void* > unk_v40_4d; /*!< v0.40.1 */
    int32_t unk_v40_5; /*!< v0.40.1 */
    df::world_site_unk130* unk_188;
    std::vector<void* > unk_18c;
    std::vector<void* > unk_19c;
    std::vector<df::entity_site_link* > entity_links; /*!< v0.40.1 */
    std::vector<df::cultural_identity* > cultural_identities; /*!< v0.40.1 */
    static struct_identity _identity;
    typedef world_site* key_pointer_type;
    typedef int32_t key_field_type;
    static int binsearch_index(const std::vector<world_site*> &vec, key_field_type key, bool exact = true);
    static int binsearch_index(const std::vector<world_site*> &vec, key_pointer_type key, bool exact = true);
    static std::vector<world_site*> &get_vector();
    static world_site *find(key_field_type id);
  public:
    world_site();
  };
}
#endif
