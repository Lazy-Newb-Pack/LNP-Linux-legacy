/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_SKILL_RATING_H
#define DF_SKILL_RATING_H
namespace df {
  namespace enums {
    namespace skill_rating {
      enum skill_rating : int32_t {
        Dabbling,
        Novice,
        Adequate,
        Competent,
        Skilled,
        Proficient,
        Talented,
        Adept,
        Expert,
        Professional,
        Accomplished,
        Great,
        Master,
        HighMaster,
        GrandMaster,
        Legendary,
        Legendary1,
        Legendary2,
        Legendary3,
        Legendary4,
        Legendary5
      };
    }
  }
  using enums::skill_rating::skill_rating;
  template<> struct DFHACK_EXPORT identity_traits<skill_rating> {
    static enum_identity identity;
    static enum_identity *get() { return &identity; }
  };
  template<> struct DFHACK_EXPORT enum_traits<skill_rating> {
    typedef int32_t base_type;
    typedef skill_rating enum_type;
    static const base_type first_item_value = 0;
    static const base_type last_item_value = 20;
    static inline bool is_valid(enum_type value) {
      return (base_type(value) >= first_item_value && base_type(value) <= last_item_value);
    }
    static const enum_type first_item = (enum_type)first_item_value;
    static const enum_type last_item = (enum_type)last_item_value;
    static const char *const key_table[21];
    struct attr_entry_type {
      uint32_t xp_threshold;
      const char* caption;
      static struct_identity _identity;
    };
    static const attr_entry_type attr_table[21+1];
    static const attr_entry_type &attrs(enum_type value);
  };
}
#endif
