/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_SQUAD_EVENT_TYPE_H
#define DF_SQUAD_EVENT_TYPE_H
namespace df {
  namespace enums {
    namespace squad_event_type {
      enum squad_event_type : int16_t {
        None = -1,
        Unk0,
        Unk1,
        Unk2
      };
    }
  }
  using enums::squad_event_type::squad_event_type;
  template<> struct DFHACK_EXPORT identity_traits<squad_event_type> {
    static enum_identity identity;
    static enum_identity *get() { return &identity; }
  };
  template<> struct DFHACK_EXPORT enum_traits<squad_event_type> {
    typedef int16_t base_type;
    typedef squad_event_type enum_type;
    static const base_type first_item_value = -1;
    static const base_type last_item_value = 2;
    static inline bool is_valid(enum_type value) {
      return (base_type(value) >= first_item_value && base_type(value) <= last_item_value);
    }
    static const enum_type first_item = (enum_type)first_item_value;
    static const enum_type last_item = (enum_type)last_item_value;
    static const char *const key_table[4];
  };
}
#endif
