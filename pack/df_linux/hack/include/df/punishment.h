/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_PUNISHMENT_H
#define DF_PUNISHMENT_H
namespace df {
  struct building;
  struct unit;
  struct DFHACK_EXPORT punishment {
    df::unit* criminal;
    df::unit* officer;
    int16_t beating;
    int16_t hammer_strikes;
    int32_t prison_counter;
    int16_t unk_10; /*!< 10080 */
    df::building* chain;
    std::vector<df::unit* > victims;
    static struct_identity _identity;
  public:
    punishment();
  };
}
#endif
