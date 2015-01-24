/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_CONVERSATION_H
#define DF_CONVERSATION_H
namespace df {
  struct building;
  struct historical_entity;
  struct nemesis_record;
  struct DFHACK_EXPORT conversation {
    std::string conv_title;
    enum T_state : int32_t {
      started,
      active,
      finished,
      quit
    };
    T_state state;
    std::vector<int16_t > talk_choices;
    int32_t unk_30;
    int32_t unk_34;
    int32_t unk_38;
    int32_t unk_3c;
    int32_t unk_40;
    int32_t unk_44;
    int32_t unk_48;
    int32_t unk_4c;
    int32_t unk_50;
    std::vector<df::nemesis_record* > unk_54;
    std::vector<df::historical_entity* > unk_64;
    int8_t unk_74;
    int32_t unk_78;
    int32_t unk_7c;
    int16_t unk_80;
    std::vector<void* > unk_84;
    std::vector<void* > unk_94;
    std::vector<void* > unk_a4;
    df::building* location; /*!< civzone */
    int8_t unk_b8;
    int32_t unk_bc;
    struct DFHACK_EXPORT T_speech {
      std::vector<std::string* > text; /*!< wordwrap */
      int32_t speaker;
      int32_t unk_14;
      int32_t unk_18;
      int16_t fg;
      int16_t bg;
      int16_t bright;
      static struct_identity _identity;
    public:
      T_speech();
    };
    std::vector<T_speech* > speech;
    static struct_identity _identity;
  public:
    conversation();
  };
  template<> struct DFHACK_EXPORT identity_traits<conversation::T_state> {
    static enum_identity identity;
    static enum_identity *get() { return &identity; }
  };
  template<> struct DFHACK_EXPORT enum_traits<conversation::T_state> {
    typedef int32_t base_type;
    typedef conversation::T_state enum_type;
    static const base_type first_item_value = 0;
    static const base_type last_item_value = 3;
    static inline bool is_valid(enum_type value) {
      return (base_type(value) >= first_item_value && base_type(value) <= last_item_value);
    }
    static const enum_type first_item = (enum_type)first_item_value;
    static const enum_type last_item = (enum_type)last_item_value;
    static const char *const key_table[4];
  };
}
#endif
