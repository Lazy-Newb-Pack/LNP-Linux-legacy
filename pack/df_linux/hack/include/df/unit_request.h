/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_UNIT_REQUEST_H
#define DF_UNIT_REQUEST_H
#ifndef DF_GUILD_ID_H
#include "guild_id.h"
#endif
namespace df {
  struct DFHACK_EXPORT unit_request {
    enum T_type : int16_t {
      DoGuildJobs
    };
    T_type type;
    enum_field<df::guild_id,int16_t> guild;
    int16_t count;
    static struct_identity _identity;
  public:
    unit_request();
  };
  template<> struct DFHACK_EXPORT identity_traits<unit_request::T_type> {
    static enum_identity identity;
    static enum_identity *get() { return &identity; }
  };
  template<> struct DFHACK_EXPORT enum_traits<unit_request::T_type> {
    typedef int16_t base_type;
    typedef unit_request::T_type enum_type;
    static const base_type first_item_value = 0;
    static const base_type last_item_value = 0;
    static inline bool is_valid(enum_type value) {
      return (base_type(value) >= first_item_value && base_type(value) <= last_item_value);
    }
    static const enum_type first_item = (enum_type)first_item_value;
    static const enum_type last_item = (enum_type)last_item_value;
    static const char *const key_table[1];
  };
}
#endif
