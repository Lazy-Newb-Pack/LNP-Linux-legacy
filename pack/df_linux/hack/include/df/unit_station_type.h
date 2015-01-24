/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_UNIT_STATION_TYPE_H
#define DF_UNIT_STATION_TYPE_H
namespace df {
  namespace enums {
    namespace unit_station_type {
      enum unit_station_type : int16_t {
        None = -1,
        Nonsense,
        DungeonCommander,
        InsaneMood,
        UndeadHunt,
        SiegerPatrol,
        MaraudeTarget,
        SiegerBasepoint,
        SiegerMill,
        AmbushPatrol,
        MarauderMill,
        WildernessCuriousWander,
        WildernessCuriousStealTarget,
        WildernessRoamer,
        PatternPatrol,
        InactiveMarauder,
        Owner,
        Commander,
        ChainedAnimal,
        MeetingLocation,
        MeetingLocationBuilding,
        Depot,
        VerminHunting,
        SeekCommander,
        ReturnToBase,
        MillAnywhere,
        Wagon,
        MillBuilding,
        HeadForEdge,
        MillingFlood,
        MillingBurrow,
        SquadMove,
        SquadKillList,
        SquadPatrol,
        SquadDefendBurrow,
        SquadDefendBurrowFromTarget,
        LairHunter,
        Graze,
        Guard,
        Alarm,
        MoveToSite,
        ClaimSite,
        WaitOrder
      };
    }
  }
  using enums::unit_station_type::unit_station_type;
  template<> struct DFHACK_EXPORT identity_traits<unit_station_type> {
    static enum_identity identity;
    static enum_identity *get() { return &identity; }
  };
  template<> struct DFHACK_EXPORT enum_traits<unit_station_type> {
    typedef int16_t base_type;
    typedef unit_station_type enum_type;
    static const base_type first_item_value = -1;
    static const base_type last_item_value = 41;
    static inline bool is_valid(enum_type value) {
      return (base_type(value) >= first_item_value && base_type(value) <= last_item_value);
    }
    static const enum_type first_item = (enum_type)first_item_value;
    static const enum_type last_item = (enum_type)last_item_value;
    static const char *const key_table[43];
  };
}
#endif
