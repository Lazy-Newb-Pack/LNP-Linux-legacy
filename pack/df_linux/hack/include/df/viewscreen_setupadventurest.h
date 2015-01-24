/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_VIEWSCREEN_SETUPADVENTUREST_H
#define DF_VIEWSCREEN_SETUPADVENTUREST_H
#ifndef DF_JOB_SKILL_H
#include "job_skill.h"
#endif
#ifndef DF_LANGUAGE_NAME_H
#include "language_name.h"
#endif
#ifndef DF_VIEWSCREEN_H
#include "viewscreen.h"
#endif
namespace df {
  struct world_site;
  struct DFHACK_EXPORT viewscreen_setupadventurest : viewscreen {
    int8_t editing_name;
    std::string saved_firstname;
    int32_t index_col1;
    int32_t index_skills;
    int32_t skill_points_remaining;
    enum T_subscreen : int16_t {
      Nemesis = 1,
      Skills,
      Name
    };
    T_subscreen subscreen;
    struct DFHACK_EXPORT T_adventurer {
      df::language_name name;
      int16_t race;
      int16_t caste;
      int32_t skills[118];
      int32_t entity;
      int16_t histfig;
      int32_t unk_7;
      int32_t unk_8;
      int16_t unk_9;
      int32_t attributes[19];
      enum T_status : int16_t {
        Peasant,
        Hero,
        Demigod
      };
      T_status status;
      static struct_identity _identity;
    public:
      T_adventurer();
    };
    T_adventurer adventurer;
    int32_t unk_v40_1a; /*!< v0.40.01 */
    int32_t site_id; /*!< v0.40.01 */
    int32_t deity_id; /*!< v0.40.01 */
    int32_t belief_strength; /*!< v0.40.01 */
    std::vector<std::string* > background; /*!< v0.40.01 */
    std::vector<df::world_site* > sites; /*!< v0.40.01 */
    std::vector<int32_t > background_type; /*!< v0.40.01 */
    int32_t sel_background; /*!< v0.40.01 */
    std::vector<int16_t > race_list;
    std::vector<int32_t > entity_list;
    std::vector<int16_t > nemesis_list;
    std::vector<df::job_skill > skill_list;
    int8_t focus_column;
    int32_t attribute_points_remaining;
    int32_t index_attributes;
    static virtual_identity _identity;
  protected:
    viewscreen_setupadventurest(virtual_identity *_id = &viewscreen_setupadventurest::_identity);
    friend void *df::allocator_fn<viewscreen_setupadventurest>(void*,const void*);
  };
  template<> struct DFHACK_EXPORT identity_traits<viewscreen_setupadventurest::T_subscreen> {
    static enum_identity identity;
    static enum_identity *get() { return &identity; }
  };
  template<> struct DFHACK_EXPORT enum_traits<viewscreen_setupadventurest::T_subscreen> {
    typedef int16_t base_type;
    typedef viewscreen_setupadventurest::T_subscreen enum_type;
    static const base_type first_item_value = 1;
    static const base_type last_item_value = 3;
    static inline bool is_valid(enum_type value) {
      return (base_type(value) >= first_item_value && base_type(value) <= last_item_value);
    }
    static const enum_type first_item = (enum_type)first_item_value;
    static const enum_type last_item = (enum_type)last_item_value;
    static const char *const key_table[3];
  };
  template<> struct DFHACK_EXPORT identity_traits<viewscreen_setupadventurest::T_adventurer::T_status> {
    static enum_identity identity;
    static enum_identity *get() { return &identity; }
  };
  template<> struct DFHACK_EXPORT enum_traits<viewscreen_setupadventurest::T_adventurer::T_status> {
    typedef int16_t base_type;
    typedef viewscreen_setupadventurest::T_adventurer::T_status enum_type;
    static const base_type first_item_value = 0;
    static const base_type last_item_value = 2;
    static inline bool is_valid(enum_type value) {
      return (base_type(value) >= first_item_value && base_type(value) <= last_item_value);
    }
    static const enum_type first_item = (enum_type)first_item_value;
    static const enum_type last_item = (enum_type)last_item_value;
    static const char *const key_table[3];
  };
}
#endif
