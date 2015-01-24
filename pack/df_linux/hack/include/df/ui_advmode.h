/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_UI_ADVMODE_H
#define DF_UI_ADVMODE_H
#ifndef DF_COORD_PATH_H
#include "coord_path.h"
#endif
#ifndef DF_UI_ADVMODE_MENU_H
#include "ui_advmode_menu.h"
#endif
namespace df {
  struct activity_entry;
  struct activity_event;
  struct adventure_movement_option;
  struct talk_choice;
  struct unit;
  struct DFHACK_EXPORT ui_advmode {
    df::ui_advmode_menu menu;
    int8_t anon_1;
    int32_t anon_2;
    int32_t anon_3;
    int32_t anon_4;
    bool travel_clouds;
    enum T_travel_right_map : int8_t {
      MapNone,
      MapSite,
      MapWorld
    };
    T_travel_right_map travel_right_map;
    int8_t unk4a;
    bool travel_not_moved;
    int8_t unk4b;
    uint8_t travel_move_countdown;
    int32_t tick_counter; /*!< goes up to XXX */
    int32_t frame_counter; /*!< goes up to 10000 (ticks?) */
    int16_t unk6;
    bool sleeping;
    int8_t anon_5;
    int32_t bogeymen_timer; /*!< initialized to 4-7 when the cackling starts */
    int32_t bogeymen_killed;
    int32_t unk9; /*!< initialized to 60 when the cackling starts */
    int32_t unk10;
    std::vector<int32_t > searched_x;
    std::vector<int32_t > searched_y;
    std::vector<int32_t > searched_z;
    std::vector<int32_t > searched_timeout;
    int8_t anon_6;
    int32_t anon_7;
    int32_t anon_8;
    int32_t anon_9;
    int8_t anon_10;
    std::vector<int32_t > unk20;
    std::vector<int32_t > unk21;
    std::vector<int32_t > unk22;
    int32_t anon_11;
    int32_t anon_12;
    int8_t anon_13;
    int32_t anon_14[1000];
    int32_t anon_15[1000];
    int32_t anon_16[1000];
    int32_t anon_17;
    int32_t anon_18;
    int32_t anon_19;
    int16_t anon_20[9];
    int16_t anon_21[9];
    int16_t anon_22[9];
    struct DFHACK_EXPORT T_unk_v40_1 {
      int16_t anon_1;
      int8_t anon_2;
      int32_t anon_3;
      int32_t anon_4;
      int32_t anon_5;
      static struct_identity _identity;
    public:
      T_unk_v40_1();
    };
    T_unk_v40_1 unk_v40_1[9];
    int8_t anon_23[9];
    int8_t anon_24[9];
    int32_t anon_25[9];
    int8_t anon_26[9];
    int32_t anon_27; /*!< race */
    int32_t anon_28; /*!< caste */
    int8_t anon_29;
    int32_t anon_30;
    int32_t anon_31;
    int8_t anon_32;
    int32_t anon_33;
    int32_t anon_34;
    int32_t anon_35;
    int32_t anon_36;
    int8_t anon_37;
    int32_t anon_38;
    int32_t anon_39;
    int32_t anon_40;
    std::vector<void* > unk_30d8;
    int32_t anon_41;
    int8_t anon_42;
    int16_t unk23;
    int16_t unk24;
    int16_t unk25;
    int16_t unk26;
    int32_t player_id;
    int16_t anon_43;
    int16_t anon_44;
    int16_t anon_45;
    int32_t anon_46;
    struct DFHACK_EXPORT T_conversation {
      std::vector<df::activity_entry* > activity;
      std::vector<df::activity_event* > activity_event;
      int32_t cursor_activity;
      int32_t cursor_choice;
      int32_t unk4;
      std::vector<int32_t > unk5;
      std::vector<int32_t > unk6;
      struct DFHACK_EXPORT T_choices {
        df::talk_choice* choice;
        std::vector<std::string* > keywords;
        std::vector<std::string* > title;
        int32_t unk_1c;
        int32_t unk_20;
        static struct_identity _identity;
      public:
        T_choices();
      };
      std::vector<T_choices* > choices;
      std::string filter;
      struct DFHACK_EXPORT T_targets {
        int32_t unit_id;
        int32_t histfig_id;
        int32_t unk_8;
        static struct_identity _identity;
      public:
        T_targets();
      };
      std::vector<T_targets* > targets;
      int32_t cursor_target;
      static struct_identity _identity;
    public:
      T_conversation();
    };
    T_conversation conversation;
    std::vector<void* > anon_47;
    int32_t anon_48;
    std::vector<void* > unk28;
    std::vector<void* > unk29;
    std::vector<void* > unk30;
    std::vector<df::adventure_movement_option* > actions;
    std::vector<void* > unk31; /*!< v0.34.08 */
    int32_t anon_49;
    int8_t anon_50;
    int8_t anon_51;
    int8_t anon_52;
    int8_t anon_53;
    int8_t anon_54;
    int8_t anon_55;
    int8_t anon_56;
    int32_t anon_57;
    struct DFHACK_EXPORT T_companions {
      std::vector<df::unit* > unit;
      std::vector<bool> unit_visible;
      df::coord_path unit_position;
      std::vector<int32_t > all_histfigs; /*!< includes dead */
      static struct_identity _identity;
    public:
      T_companions();
    };
    T_companions companions;
    std::vector<void* > unk37;
    std::vector<void* > unk38;
    int32_t unk_1e4;
    int32_t unk_1e8;
    int32_t unk_1ec;
    int32_t unk_1f0;
    int32_t unk_1f4;
    int32_t unk_1f8;
    int32_t unk_1fc;
    int32_t unk_200;
    std::string unk39;
    int32_t unk_220;
    int32_t unk_224;
    struct DFHACK_EXPORT T_unk_v40_2 {
      std::vector<void* > anon_1;
      std::vector<void* > anon_2;
      std::vector<void* > anon_3;
      std::vector<void* > anon_4;
      int8_t anon_5;
      std::vector<void* > anon_6;
      std::vector<void* > anon_7;
      static struct_identity _identity;
    public:
      T_unk_v40_2();
    };
    T_unk_v40_2 unk_v40_2;
    struct DFHACK_EXPORT T_unk_v40_3 {
      int32_t anon_1;
      std::vector<void* > anon_2;
      static struct_identity _identity;
    public:
      T_unk_v40_3();
    };
    T_unk_v40_3 unk_v40_3;
    int32_t anon_58;
    int32_t anon_59;
    int32_t anon_60;
    struct DFHACK_EXPORT T_unk_v40_4 {
      struct DFHACK_EXPORT T_unk_v40_4a {
        int32_t anon_1;
        int16_t anon_2;
        int16_t anon_3;
        int16_t anon_4;
        int16_t anon_5;
        int16_t anon_6;
        int16_t anon_7;
        int16_t anon_8;
        int32_t anon_9;
        int32_t anon_10;
        static struct_identity _identity;
      public:
        T_unk_v40_4a();
      };
      T_unk_v40_4a unk_v40_4a[100];
      int32_t anon_1;
      static struct_identity _identity;
    public:
      T_unk_v40_4();
    };
    T_unk_v40_4 unk_v40_4;
    struct DFHACK_EXPORT T_unk_v40_5 {
      std::vector<void* > anon_1;
      std::vector<void* > anon_2;
      std::vector<void* > anon_3;
      int32_t anon_4;
      std::vector<void* > anon_5;
      std::vector<void* > anon_6;
      static struct_identity _identity;
    public:
      T_unk_v40_5();
    };
    T_unk_v40_5 unk_v40_5;
    static struct_identity _identity;
  public:
    ui_advmode();
  };
  template<> struct DFHACK_EXPORT identity_traits<ui_advmode::T_travel_right_map> {
    static enum_identity identity;
    static enum_identity *get() { return &identity; }
  };
  template<> struct DFHACK_EXPORT enum_traits<ui_advmode::T_travel_right_map> {
    typedef int8_t base_type;
    typedef ui_advmode::T_travel_right_map enum_type;
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
