/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_D_INIT_FLAGS4_H
#define DF_D_INIT_FLAGS4_H
namespace df {
  namespace enums {
    namespace d_init_flags4 {
      enum d_init_flags4 : int32_t {
        TEMPERATURE,
        WEATHER,
        ECONOMY,
        ZERO_RENT,
        AUTOSAVE_SEASONAL,
        AUTOSAVE_YEARLY,
        AUTOSAVE_PAUSE,
        AUTOBACKUP,
        INITIAL_SAVE,
        INVADERS,
        CAVEINS,
        ARTIFACTS,
        LOG_MAP_REJECTS,
        PAUSE_ON_LOAD,
        EMBARK_WARNING_ALWAYS,
        SHOW_ALL_HISTORY_IN_DWARF_MODE,
        TESTING_ARENA,
        WALKING_SPREADS_SPATTER_DWF,
        WALKING_SPREADS_SPATTER_ADV
      };
    }
  }
  using enums::d_init_flags4::d_init_flags4;
  template<> struct DFHACK_EXPORT identity_traits<d_init_flags4> {
    static enum_identity identity;
    static enum_identity *get() { return &identity; }
  };
  template<> struct DFHACK_EXPORT enum_traits<d_init_flags4> {
    typedef int32_t base_type;
    typedef d_init_flags4 enum_type;
    static const base_type first_item_value = 0;
    static const base_type last_item_value = 18;
    static inline bool is_valid(enum_type value) {
      return (base_type(value) >= first_item_value && base_type(value) <= last_item_value);
    }
    static const enum_type first_item = (enum_type)first_item_value;
    static const enum_type last_item = (enum_type)last_item_value;
    static const char *const key_table[19];
  };
}
#endif
