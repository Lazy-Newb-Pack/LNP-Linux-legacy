/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_ENTITY_BUY_PRICES_H
#define DF_ENTITY_BUY_PRICES_H
namespace df {
  struct entity_buy_requests;
  struct DFHACK_EXPORT entity_buy_prices {
    df::entity_buy_requests* items;
    std::vector<int32_t > price;
    static struct_identity _identity;
  public:
    entity_buy_prices();
  };
}
#endif
