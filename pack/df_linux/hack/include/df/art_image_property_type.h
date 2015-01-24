/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_ART_IMAGE_PROPERTY_TYPE_H
#define DF_ART_IMAGE_PROPERTY_TYPE_H
namespace df {
  namespace enums {
    namespace art_image_property_type {
      enum art_image_property_type : int32_t {
        transitive_verb,
        intransitive_verb
      };
    }
  }
  using enums::art_image_property_type::art_image_property_type;
  template<> struct DFHACK_EXPORT identity_traits<art_image_property_type> {
    static enum_identity identity;
    static enum_identity *get() { return &identity; }
  };
  template<> struct DFHACK_EXPORT enum_traits<art_image_property_type> {
    typedef int32_t base_type;
    typedef art_image_property_type enum_type;
    static const base_type first_item_value = 0;
    static const base_type last_item_value = 1;
    static inline bool is_valid(enum_type value) {
      return (base_type(value) >= first_item_value && base_type(value) <= last_item_value);
    }
    static const enum_type first_item = (enum_type)first_item_value;
    static const enum_type last_item = (enum_type)last_item_value;
    static const char *const key_table[2];
  };
}
#endif
