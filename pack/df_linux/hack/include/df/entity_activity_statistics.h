/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_ENTITY_ACTIVITY_STATISTICS_H
#define DF_ENTITY_ACTIVITY_STATISTICS_H
namespace df {
  struct DFHACK_EXPORT entity_activity_statistics {
    struct DFHACK_EXPORT T_food {
      int32_t total;
      int32_t meat;
      int32_t fish;
      int32_t other;
      int32_t seeds;
      int32_t plant;
      int32_t drink;
      static struct_identity _identity;
    public:
      T_food();
    };
    T_food food;
    int16_t unit_counts[152];
    int16_t population;
    int16_t anon_1;
    int16_t anon_2;
    int16_t anon_3;
    int16_t trained_animals;
    int16_t other_animals;
    int16_t anon_4;
    int32_t anon_5;
    int32_t item_counts[112];
    std::vector<int32_t > created_weapons;
    struct DFHACK_EXPORT T_wealth {
      int32_t total;
      int32_t weapons;
      int32_t armor;
      int32_t furniture;
      int32_t other;
      int32_t architecture;
      int32_t displayed;
      int32_t held;
      int32_t imported;
      int32_t anon_1;
      int32_t exported;
      static struct_identity _identity;
    public:
      T_wealth();
    };
    T_wealth wealth;
    int32_t recent_jobs[7][260];
    int32_t excavated_tiles; /*!< unhidden, subterranean, and excluding map features */
    int32_t death_history[5];
    int32_t insanity_history[5];
    int32_t execution_history[5];
    int32_t noble_death_history[5];
    int32_t total_deaths;
    int32_t total_insanities;
    int32_t total_executions;
    int32_t num_artifacts;
    int32_t anon_6;
    std::vector<char > discovered_creature_foods;
    std::vector<char > discovered_creatures;
    std::vector<char > discovered_plant_foods;
    std::vector<char > discovered_plants; /*!< allows planting of seeds */
    int16_t discovered_water_features;
    int16_t discovered_subterranean_features;
    int16_t discovered_chasm_features; /*!< unused since 40d */
    int16_t discovered_magma_features;
    int16_t discovered_feature_layers; /*!< back in 40d, this counted HFS */
    int32_t migrant_wave_idx; /*!< when >= 2, no migrants */
    std::vector<int32_t > found_minerals; /*!< Added after 'you have struck' announcement */
    union T_found_misc {
      uint32_t whole;
      struct {
        uint32_t deep_special : 1;
      } bits;
      enum Shift {
        shift_deep_special = 0
      };
      enum Mask : uint32_t {
        mask_deep_special = 0x1U
      };
      T_found_misc(uint32_t whole_ = 0) : whole(whole_) {};
    };
    T_found_misc found_misc;
    static struct_identity _identity;
  public:
    entity_activity_statistics();
  };
  template<> struct DFHACK_EXPORT bitfield_traits<entity_activity_statistics::T_found_misc> {
    typedef uint32_t base_type;
    typedef entity_activity_statistics::T_found_misc bitfield_type;
    static const int bit_count = sizeof(base_type)*8;
    static const bitfield_item_info bits[bit_count];
  };
  template<> struct DFHACK_EXPORT identity_traits<entity_activity_statistics::T_found_misc> {
    static bitfield_identity identity;
    static bitfield_identity *get() { return &identity; }
  };
}
#endif
