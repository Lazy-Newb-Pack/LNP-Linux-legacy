/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_WORLD_HISTORY_H
#define DF_WORLD_HISTORY_H
namespace df {
  struct historical_figure;
  struct history_era;
  struct history_event;
  struct history_event_collection;
  struct DFHACK_EXPORT world_history {
    std::vector<df::history_event* > events;
    std::vector<df::history_event* > events2;
    std::vector<df::historical_figure* > figures;
    struct DFHACK_EXPORT T_event_collections {
      std::vector<df::history_event_collection* > all;
      std::vector<df::history_event_collection* > other[9];
      static struct_identity _identity;
    public:
      T_event_collections();
    };
    T_event_collections event_collections;
    std::vector<df::history_era* > eras;
    std::vector<int32_t > unk1;
    std::vector<int16_t > unk2;
    int32_t anon_1;
    int32_t total_powers; /*!< also includes megabeasts */
    int32_t total_megabeasts;
    int32_t total_semimegabeasts;
    std::vector<void* > anon_2;
    std::vector<void* > anon_3;
    std::vector<void* > anon_4;
    std::vector<void* > anon_5;
    std::vector<void* > anon_6;
    std::vector<void* > anon_7;
    std::vector<void* > unk_v40_1[12]; /*!< v0.40.01 */
    std::vector<void* > anon_8; /*!< v0.40.01 */
    bool anon_9;
    std::vector<void* > anon_10; /*!< v0.40.01 */
    int32_t anon_11;
    int32_t anon_12;
    int32_t anon_13;
    static struct_identity _identity;
  public:
    world_history();
  };
}
#endif
