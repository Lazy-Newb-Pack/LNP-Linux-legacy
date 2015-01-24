/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_CONSTRUCTION_TYPE_H
#define DF_CONSTRUCTION_TYPE_H
namespace df {
  namespace enums {
    namespace construction_type {
      enum construction_type : int16_t {
        Fortification,
        Wall,
        Floor,
        UpStair,
        DownStair,
        UpDownStair,
        Ramp,
        TrackN,
        TrackS,
        TrackE,
        TrackW,
        TrackNS,
        TrackNE,
        TrackNW,
        TrackSE,
        TrackSW,
        TrackEW,
        TrackNSE,
        TrackNSW,
        TrackNEW,
        TrackSEW,
        TrackNSEW,
        TrackRampN,
        TrackRampS,
        TrackRampE,
        TrackRampW,
        TrackRampNS,
        TrackRampNE,
        TrackRampNW,
        TrackRampSE,
        TrackRampSW,
        TrackRampEW,
        TrackRampNSE,
        TrackRampNSW,
        TrackRampNEW,
        TrackRampSEW,
        TrackRampNSEW
      };
    }
  }
  using enums::construction_type::construction_type;
  template<> struct DFHACK_EXPORT identity_traits<construction_type> {
    static enum_identity identity;
    static enum_identity *get() { return &identity; }
  };
  template<> struct DFHACK_EXPORT enum_traits<construction_type> {
    typedef int16_t base_type;
    typedef construction_type enum_type;
    static const base_type first_item_value = 0;
    static const base_type last_item_value = 36;
    static inline bool is_valid(enum_type value) {
      return (base_type(value) >= first_item_value && base_type(value) <= last_item_value);
    }
    static const enum_type first_item = (enum_type)first_item_value;
    static const enum_type last_item = (enum_type)last_item_value;
    static const char *const key_table[37];
  };
}
#endif
