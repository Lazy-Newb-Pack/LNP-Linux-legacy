/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_VIEWSCREEN_CHOOSE_START_SITEST_H
#define DF_VIEWSCREEN_CHOOSE_START_SITEST_H
#ifndef DF_EMBARK_FINDER_OPTION_H
#include "embark_finder_option.h"
#endif
#ifndef DF_EMBARK_LOCATION_H
#include "embark_location.h"
#endif
#ifndef DF_VIEWSCREEN_H
#include "viewscreen.h"
#endif
namespace df {
  struct historical_entity;
  struct history_event;
  struct world_site;
  struct DFHACK_EXPORT viewscreen_choose_start_sitest : viewscreen {
    enum T_page : int32_t {
      Biome,
      Neighbors,
      Civilization,
      Elevation,
      Cliffs,
      Reclaim,
      Reclaim2,
      Find,
      Notes
    };
    T_page page;
    df::embark_location location;
    int32_t biome_idx;
    bool biome_highlighted;
    bool in_embark_aquifer;
    bool in_embark_salt;
    bool in_embark_large;
    bool in_embark_normal;
    std::vector<df::world_site* > highlighted_sites;
    std::vector<df::world_site* > local_sites;
    int32_t unk_74;
    int32_t civ_idx;
    std::vector<df::historical_entity* > available_civs;
    std::vector<std::string* > site_info; /*!< v0.40.01 */
    df::history_event* site_abandoned; /*!< v0.40.01 */
    df::history_event* site_created; /*!< v0.40.01 */
    int32_t unk_a4; /*!< v0.40.01 */
    struct DFHACK_EXPORT T_finder {
      int32_t anon_1;
      int32_t search_x; /*!< to world width / 16 */
      int32_t search_y; /*!< to world height / 16 */
      int32_t cursor;
      int32_t options[22];
      bool unmatched[22];
      std::vector<df::embark_finder_option > visible_options;
      int16_t finder_state; /*!< 0=find, 1=none, 2=partial, 3=suitable */
      int16_t unk_11e;
      int16_t unk_120;
      int16_t unk_122;
      int16_t unk_124;
      int16_t unk_126;
      int16_t unk_128;
      static struct_identity _identity;
    public:
      T_finder();
    };
    T_finder finder;
    std::vector<void* > unk_12c;
    std::vector<void* > unk_13c;
    int32_t unk_14c;
    int32_t unk_150;
    int16_t unk_154;
    int16_t unk_156;
    int16_t unk_158;
    int16_t unk_15a;
    int32_t unk_15c;
    static virtual_identity _identity;
  protected:
    viewscreen_choose_start_sitest(virtual_identity *_id = &viewscreen_choose_start_sitest::_identity);
    friend void *df::allocator_fn<viewscreen_choose_start_sitest>(void*,const void*);
  };
  template<> struct DFHACK_EXPORT identity_traits<viewscreen_choose_start_sitest::T_page> {
    static enum_identity identity;
    static enum_identity *get() { return &identity; }
  };
  template<> struct DFHACK_EXPORT enum_traits<viewscreen_choose_start_sitest::T_page> {
    typedef int32_t base_type;
    typedef viewscreen_choose_start_sitest::T_page enum_type;
    static const base_type first_item_value = 0;
    static const base_type last_item_value = 8;
    static inline bool is_valid(enum_type value) {
      return (base_type(value) >= first_item_value && base_type(value) <= last_item_value);
    }
    static const enum_type first_item = (enum_type)first_item_value;
    static const enum_type last_item = (enum_type)last_item_value;
    static const char *const key_table[9];
  };
}
#endif
