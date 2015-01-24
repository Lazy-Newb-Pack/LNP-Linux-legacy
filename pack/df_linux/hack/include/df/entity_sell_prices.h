/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_ENTITY_SELL_PRICES_H
#define DF_ENTITY_SELL_PRICES_H
namespace df {
  struct entity_sell_requests;
  struct DFHACK_EXPORT entity_sell_prices {
    df::entity_sell_requests* items;
    std::vector<int32_t > price[107];
    static struct_identity _identity;
  public:
    entity_sell_prices();
  };
}
#endif
