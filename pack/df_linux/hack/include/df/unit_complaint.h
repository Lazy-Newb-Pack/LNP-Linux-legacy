/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_UNIT_COMPLAINT_H
#define DF_UNIT_COMPLAINT_H
#ifndef DF_GUILD_ID_H
#include "guild_id.h"
#endif
namespace df {
  struct DFHACK_EXPORT unit_complaint {
    enum T_type : int16_t {
      SelfUnemployed,
      GuildUnemployed,
      /**
       * no longer used
       */
      NeedWeapons,
      IsAngry,
      IsSad
    };
    T_type type;
    enum_field<df::guild_id,int16_t> guild;
    int32_t age;
    static struct_identity _identity;
  public:
    unit_complaint();
  };
  template<> struct DFHACK_EXPORT identity_traits<unit_complaint::T_type> {
    static enum_identity identity;
    static enum_identity *get() { return &identity; }
  };
  template<> struct DFHACK_EXPORT enum_traits<unit_complaint::T_type> {
    typedef int16_t base_type;
    typedef unit_complaint::T_type enum_type;
    static const base_type first_item_value = 0;
    static const base_type last_item_value = 4;
    static inline bool is_valid(enum_type value) {
      return (base_type(value) >= first_item_value && base_type(value) <= last_item_value);
    }
    static const enum_type first_item = (enum_type)first_item_value;
    static const enum_type last_item = (enum_type)last_item_value;
    static const char *const key_table[5];
  };
}
#endif
