/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_PART_OF_SPEECH_H
#define DF_PART_OF_SPEECH_H
namespace df {
  namespace enums {
    namespace part_of_speech {
      enum part_of_speech : int32_t {
        Noun,
        NounPlural,
        Adjective,
        Prefix,
        Verb,
        Verb3rdPerson,
        VerbPast,
        VerbPassive,
        VerbGerund
      };
    }
  }
  using enums::part_of_speech::part_of_speech;
  template<> struct DFHACK_EXPORT identity_traits<part_of_speech> {
    static enum_identity identity;
    static enum_identity *get() { return &identity; }
  };
  template<> struct DFHACK_EXPORT enum_traits<part_of_speech> {
    typedef int32_t base_type;
    typedef part_of_speech enum_type;
    static const base_type first_item_value = 0;
    static const base_type last_item_value = 8;
    static inline bool is_valid(enum_type value) {
      return (base_type(value) >= first_item_value && base_type(value) <= last_item_value);
    }
    static const enum_type first_item = (enum_type)first_item_value;
    static const enum_type last_item = (enum_type)last_item_value;
    static const char *const key_table[9];
  };
}
#endif
