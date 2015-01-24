/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_TRAINING_KNOWLEDGE_LEVEL_H
#define DF_TRAINING_KNOWLEDGE_LEVEL_H
namespace df {
  namespace enums {
    namespace training_knowledge_level {
      enum training_knowledge_level : int32_t {
        None,
        FewFacts,
        GeneralFamiliarity,
        Knowledgeable,
        Expert,
        Domesticated
      };
    }
  }
  using enums::training_knowledge_level::training_knowledge_level;
  template<> struct DFHACK_EXPORT identity_traits<training_knowledge_level> {
    static enum_identity identity;
    static enum_identity *get() { return &identity; }
  };
  template<> struct DFHACK_EXPORT enum_traits<training_knowledge_level> {
    typedef int32_t base_type;
    typedef training_knowledge_level enum_type;
    static const base_type first_item_value = 0;
    static const base_type last_item_value = 5;
    static inline bool is_valid(enum_type value) {
      return (base_type(value) >= first_item_value && base_type(value) <= last_item_value);
    }
    static const enum_type first_item = (enum_type)first_item_value;
    static const enum_type last_item = (enum_type)last_item_value;
    static const char *const key_table[6];
  };
}
#endif
