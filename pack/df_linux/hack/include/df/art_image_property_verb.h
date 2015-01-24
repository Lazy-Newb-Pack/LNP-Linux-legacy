/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_ART_IMAGE_PROPERTY_VERB_H
#define DF_ART_IMAGE_PROPERTY_VERB_H
namespace df {
  namespace enums {
    namespace art_image_property_verb {
      enum art_image_property_verb : int16_t {
        Withering,
        SurroundedBy,
        Massacring,
        Fighting,
        Laboring,
        Greeting,
        Refusing,
        Speaking,
        Embracing,
        StrikingDown,
        MenacingPose,
        Traveling,
        Raising,
        Hiding,
        LookingConfused,
        LookingTerrified,
        Devouring,
        Admiring,
        Burning,
        Weeping,
        LookingDejected,
        Cringing,
        Screaming,
        SubmissiveGesture,
        FetalPosition,
        SmearedIntoSpiral,
        Falling,
        Dead,
        Laughing,
        LookingOffended,
        BeingShot,
        PlaintiveGesture,
        Melting,
        Shooting,
        Torturing,
        CommittingDepravedAct,
        Praying,
        Contemplating,
        Cooking,
        Engraving,
        Prostrating,
        Suffering,
        BeingImpaled,
        BeingContorted,
        BeingFlayed,
        HangingFrom,
        BeingMutilated,
        TriumphantPose
      };
    }
  }
  using enums::art_image_property_verb::art_image_property_verb;
  template<> struct DFHACK_EXPORT identity_traits<art_image_property_verb> {
    static enum_identity identity;
    static enum_identity *get() { return &identity; }
  };
  template<> struct DFHACK_EXPORT enum_traits<art_image_property_verb> {
    typedef int16_t base_type;
    typedef art_image_property_verb enum_type;
    static const base_type first_item_value = 0;
    static const base_type last_item_value = 47;
    static inline bool is_valid(enum_type value) {
      return (base_type(value) >= first_item_value && base_type(value) <= last_item_value);
    }
    static const enum_type first_item = (enum_type)first_item_value;
    static const enum_type last_item = (enum_type)last_item_value;
    static const char *const key_table[48];
  };
}
#endif
