/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_ASSIGN_TRADE_STATUS_H
#define DF_ASSIGN_TRADE_STATUS_H
namespace df {
  struct item;
  struct DFHACK_EXPORT assign_trade_status {
    df::item* item;
    int32_t distance;
    enum T_status : int8_t {
      RemoveTrading = -2,
      RemovePending,
      None,
      AddPending,
      Pending,
      Trading
    };
    T_status status;
    bool unk; /*!< mandate? */
    int32_t value;
    int32_t weight;
    static struct_identity _identity;
  public:
    assign_trade_status();
  };
  template<> struct DFHACK_EXPORT identity_traits<assign_trade_status::T_status> {
    static enum_identity identity;
    static enum_identity *get() { return &identity; }
  };
  template<> struct DFHACK_EXPORT enum_traits<assign_trade_status::T_status> {
    typedef int8_t base_type;
    typedef assign_trade_status::T_status enum_type;
    static const base_type first_item_value = -2;
    static const base_type last_item_value = 3;
    static inline bool is_valid(enum_type value) {
      return (base_type(value) >= first_item_value && base_type(value) <= last_item_value);
    }
    static const enum_type first_item = (enum_type)first_item_value;
    static const enum_type last_item = (enum_type)last_item_value;
    static const char *const key_table[6];
  };
}
#endif
