/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_PARTY_INFO_H
#define DF_PARTY_INFO_H
namespace df {
  struct building;
  struct unit;
  struct DFHACK_EXPORT party_info {
    std::vector<df::unit* > units;
    df::building* location;
    int32_t timer; /*!< -1 per 10 */
    int32_t id; /*!< assigned during Save */
    static struct_identity _identity;
  public:
    party_info();
  };
}
#endif
