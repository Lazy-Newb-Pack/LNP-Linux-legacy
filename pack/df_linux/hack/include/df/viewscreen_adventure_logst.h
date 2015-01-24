/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_VIEWSCREEN_ADVENTURE_LOGST_H
#define DF_VIEWSCREEN_ADVENTURE_LOGST_H
#ifndef DF_VIEWSCREEN_H
#include "viewscreen.h"
#endif
namespace df {
  struct adventure_log_item;
  struct DFHACK_EXPORT viewscreen_adventure_logst : viewscreen {
    enum T_mode : int8_t {
      Info,
      Map
    };
    T_mode mode;
    int8_t map_islocalview;
    int8_t map_hidden;
    int16_t player_region_x;
    int16_t player_region_y;
    int16_t player_local_x;
    int16_t player_local_y;
    int16_t unk_8;
    int16_t unk_9;
    int16_t unk_10;
    int16_t unk_11;
    int16_t cursor_x;
    int16_t cursor_y;
    int32_t index; /*!< cursor position in info mode */
    int8_t map_draw_line;
    enum T_info_mode : int16_t {
      Events,
      Agreements,
      People,
      Sites,
      Groups,
      Regions,
      Bestiary
    };
    T_info_mode info_mode;
    int16_t local_area_x1; /*!< rectangle of 0 in local view */
    int16_t local_area_x2;
    int16_t local_area_y1;
    int16_t local_area_y2;
    int32_t unk_v40_1a;
    int32_t unk_v40_1b;
    int32_t unk_v40_1c;
    int32_t unk_v40_1d;
    int32_t unk_v40_1e;
    int32_t unk_v40_1f;
    std::string filter_str;
    int8_t in_filter;
    std::vector<df::adventure_log_item* > items[8];
    std::vector<df::adventure_log_item* > filtered_items[8];
    static virtual_identity _identity;
  protected:
    viewscreen_adventure_logst(virtual_identity *_id = &viewscreen_adventure_logst::_identity);
    friend void *df::allocator_fn<viewscreen_adventure_logst>(void*,const void*);
  };
  template<> struct DFHACK_EXPORT identity_traits<viewscreen_adventure_logst::T_mode> {
    static enum_identity identity;
    static enum_identity *get() { return &identity; }
  };
  template<> struct DFHACK_EXPORT enum_traits<viewscreen_adventure_logst::T_mode> {
    typedef int8_t base_type;
    typedef viewscreen_adventure_logst::T_mode enum_type;
    static const base_type first_item_value = 0;
    static const base_type last_item_value = 1;
    static inline bool is_valid(enum_type value) {
      return (base_type(value) >= first_item_value && base_type(value) <= last_item_value);
    }
    static const enum_type first_item = (enum_type)first_item_value;
    static const enum_type last_item = (enum_type)last_item_value;
    static const char *const key_table[2];
  };
  template<> struct DFHACK_EXPORT identity_traits<viewscreen_adventure_logst::T_info_mode> {
    static enum_identity identity;
    static enum_identity *get() { return &identity; }
  };
  template<> struct DFHACK_EXPORT enum_traits<viewscreen_adventure_logst::T_info_mode> {
    typedef int16_t base_type;
    typedef viewscreen_adventure_logst::T_info_mode enum_type;
    static const base_type first_item_value = 0;
    static const base_type last_item_value = 6;
    static inline bool is_valid(enum_type value) {
      return (base_type(value) >= first_item_value && base_type(value) <= last_item_value);
    }
    static const enum_type first_item = (enum_type)first_item_value;
    static const enum_type last_item = (enum_type)last_item_value;
    static const char *const key_table[7];
  };
}
#endif
