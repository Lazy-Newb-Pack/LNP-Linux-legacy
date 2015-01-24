/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_WRITTEN_CONTENT_STYLE_H
#define DF_WRITTEN_CONTENT_STYLE_H
namespace df {
  namespace enums {
    namespace written_content_style {
      enum written_content_style : int32_t {
        Meandering,
        Cheerful,
        Depressing,
        Rigid,
        Serious,
        Disjointed,
        Ornate,
        Forceful,
        Humorous,
        Immature,
        SelfIndulgent,
        Touching,
        Compassionate,
        Vicious,
        Concise,
        Scornful,
        Witty,
        Ranting
      };
    }
  }
  using enums::written_content_style::written_content_style;
  template<> struct DFHACK_EXPORT identity_traits<written_content_style> {
    static enum_identity identity;
    static enum_identity *get() { return &identity; }
  };
  template<> struct DFHACK_EXPORT enum_traits<written_content_style> {
    typedef int32_t base_type;
    typedef written_content_style enum_type;
    static const base_type first_item_value = 0;
    static const base_type last_item_value = 17;
    static inline bool is_valid(enum_type value) {
      return (base_type(value) >= first_item_value && base_type(value) <= last_item_value);
    }
    static const enum_type first_item = (enum_type)first_item_value;
    static const enum_type last_item = (enum_type)last_item_value;
    static const char *const key_table[18];
  };
}
#endif
