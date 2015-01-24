/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_VIEWSCREEN_TITLEST_H
#define DF_VIEWSCREEN_TITLEST_H
#ifndef DF_VIEWSCREEN_H
#include "viewscreen.h"
#endif
namespace df {
  struct DFHACK_EXPORT viewscreen_titlest : viewscreen {
    char str_histories[256];
    char menu_items[256];
    enum T_sel_subpage : int16_t {
      None,
      StartSelectWorld,
      StartSelectMode,
      Arena,
      About
    };
    T_sel_subpage sel_subpage;
    int32_t sel_menu_line;
    int32_t sel_submenu_line;
    int8_t loading;
    std::vector<int32_t > menu_line_id;
    std::vector<int32_t > submenu_line_id;
    std::vector<std::string* > submenu_line_text;
    std::vector<std::string* > start_savegames;
    std::vector<std::string* > continue_savegames;
    std::string str_slaves;
    std::string str_chapter;
    std::string str_copyright;
    std::string str_version;
    std::string str_unk;
    std::string str_programmed;
    std::string str_designed;
    std::string str_visit;
    std::string str_site;
    std::string unk_36c;
    int32_t unk_388; /*!< unset */
    int8_t unk_38c;
    int32_t unk_390; /*!< unset */
    int8_t unk_394;
    int32_t unk_398; /*!< unset */
    int8_t unk_39c;
    int32_t unk_3a0; /*!< unset */
    static virtual_identity _identity;
  protected:
    viewscreen_titlest(virtual_identity *_id = &viewscreen_titlest::_identity);
    friend void *df::allocator_fn<viewscreen_titlest>(void*,const void*);
  };
  template<> struct DFHACK_EXPORT identity_traits<viewscreen_titlest::T_sel_subpage> {
    static enum_identity identity;
    static enum_identity *get() { return &identity; }
  };
  template<> struct DFHACK_EXPORT enum_traits<viewscreen_titlest::T_sel_subpage> {
    typedef int16_t base_type;
    typedef viewscreen_titlest::T_sel_subpage enum_type;
    static const base_type first_item_value = 0;
    static const base_type last_item_value = 4;
    static inline bool is_valid(enum_type value) {
      return (base_type(value) >= first_item_value && base_type(value) <= last_item_value);
    }
    static const enum_type first_item = (enum_type)first_item_value;
    static const enum_type last_item = (enum_type)last_item_value;
    static const char *const key_table[5];
  };
}
#endif
