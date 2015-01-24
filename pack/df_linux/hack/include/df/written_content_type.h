/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_WRITTEN_CONTENT_TYPE_H
#define DF_WRITTEN_CONTENT_TYPE_H
namespace df {
  namespace enums {
    namespace written_content_type {
      enum written_content_type : int32_t {
        Manual,
        Guide,
        Chronicle,
        ShortStory,
        Novel,
        Biography,
        Autobiography,
        Poem,
        Play,
        Letter,
        Essay,
        Dialog
      };
    }
  }
  using enums::written_content_type::written_content_type;
  template<> struct DFHACK_EXPORT identity_traits<written_content_type> {
    static enum_identity identity;
    static enum_identity *get() { return &identity; }
  };
  template<> struct DFHACK_EXPORT enum_traits<written_content_type> {
    typedef int32_t base_type;
    typedef written_content_type enum_type;
    static const base_type first_item_value = 0;
    static const base_type last_item_value = 11;
    static inline bool is_valid(enum_type value) {
      return (base_type(value) >= first_item_value && base_type(value) <= last_item_value);
    }
    static const enum_type first_item = (enum_type)first_item_value;
    static const enum_type last_item = (enum_type)last_item_value;
    static const char *const key_table[12];
  };
}
#endif
