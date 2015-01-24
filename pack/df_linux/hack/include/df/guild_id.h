/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_GUILD_ID_H
#define DF_GUILD_ID_H
namespace df {
  namespace enums {
    namespace guild_id {
      enum guild_id : int32_t {
        None = -1,
        Miners,
        Carpenters,
        Masons,
        Metalsmiths,
        Jewelers,
        Craftsmen
      };
    }
  }
  using enums::guild_id::guild_id;
  template<> struct DFHACK_EXPORT identity_traits<guild_id> {
    static enum_identity identity;
    static enum_identity *get() { return &identity; }
  };
  template<> struct DFHACK_EXPORT enum_traits<guild_id> {
    typedef int32_t base_type;
    typedef guild_id enum_type;
    static const base_type first_item_value = -1;
    static const base_type last_item_value = 5;
    static inline bool is_valid(enum_type value) {
      return (base_type(value) >= first_item_value && base_type(value) <= last_item_value);
    }
    static const enum_type first_item = (enum_type)first_item_value;
    static const enum_type last_item = (enum_type)last_item_value;
    static const char *const key_table[7];
  };
}
#endif
