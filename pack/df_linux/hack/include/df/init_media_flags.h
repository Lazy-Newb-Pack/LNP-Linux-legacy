/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_INIT_MEDIA_FLAGS_H
#define DF_INIT_MEDIA_FLAGS_H
namespace df {
  namespace enums {
    namespace init_media_flags {
      enum init_media_flags : int32_t {
        SOUND_OFF,
        INTRO_OFF,
        COMPRESS_SAVES
      };
    }
  }
  using enums::init_media_flags::init_media_flags;
  template<> struct DFHACK_EXPORT identity_traits<init_media_flags> {
    static enum_identity identity;
    static enum_identity *get() { return &identity; }
  };
  template<> struct DFHACK_EXPORT enum_traits<init_media_flags> {
    typedef int32_t base_type;
    typedef init_media_flags enum_type;
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
