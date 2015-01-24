/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_ANIMAL_TRAINING_LEVEL_H
#define DF_ANIMAL_TRAINING_LEVEL_H
namespace df {
  namespace enums {
    namespace animal_training_level {
      enum animal_training_level : int32_t {
        SemiWild,
        Trained,
        WellTrained,
        SkilfullyTrained,
        ExpertlyTrained,
        ExceptionallyTrained,
        MasterfullyTrained,
        Domesticated,
        Unk8,
        /**
         * Seems to be used as default when not flags1.tame
         */
        WildUntamed
      };
    }
  }
  using enums::animal_training_level::animal_training_level;
  template<> struct DFHACK_EXPORT identity_traits<animal_training_level> {
    static enum_identity identity;
    static enum_identity *get() { return &identity; }
  };
  template<> struct DFHACK_EXPORT enum_traits<animal_training_level> {
    typedef int32_t base_type;
    typedef animal_training_level enum_type;
    static const base_type first_item_value = 0;
    static const base_type last_item_value = 9;
    static inline bool is_valid(enum_type value) {
      return (base_type(value) >= first_item_value && base_type(value) <= last_item_value);
    }
    static const enum_type first_item = (enum_type)first_item_value;
    static const enum_type last_item = (enum_type)last_item_value;
    static const char *const key_table[10];
  };
}
#endif
