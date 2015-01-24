/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_CRIME_H
#define DF_CRIME_H
namespace df {
  struct DFHACK_EXPORT crime {
    int32_t id;
    enum T_mode : int32_t {
      ProductionOrderViolation,
      ExportViolation,
      JobOrderViolation,
      ConspiracyToSlowLabor,
      Murder,
      DisorderlyBehavior,
      BuildingDestruction,
      Vandalism,
      Theft,
      Robbery,
      BloodDrinking
    };
    T_mode mode;
    struct DFHACK_EXPORT T_punishment {
      int32_t hammerstrikes;
      int32_t prison_time;
      int32_t give_beating;
      static struct_identity _identity;
    public:
      T_punishment();
    };
    T_punishment punishment;
    int32_t criminal;
    int32_t convicted;
    int32_t victim;
    union T_flags {
      uint32_t whole;
      struct {
        uint32_t sentenced : 1;
        uint32_t discovered : 1;
        uint32_t needs_trial : 1; /*!< i.e. the player chooses whom to convict */
      } bits;
      enum Shift {
        shift_sentenced = 0,
        shift_discovered = 1,
        shift_needs_trial = 2
      };
      enum Mask : uint32_t {
        mask_sentenced = 0x1U,
        mask_discovered = 0x2U,
        mask_needs_trial = 0x4U
      };
      T_flags(uint32_t whole_ = 0) : whole(whole_) {};
    };
    T_flags flags;
    int32_t death_id;
    int32_t event_year;
    int32_t event_time;
    int32_t discovered_year;
    int32_t discovered_time;
    int32_t site;
    int32_t entity;
    struct DFHACK_EXPORT T_anon_1 {
      int32_t death_id;
      int32_t crime_id;
      int32_t unk1; /*!< unk1 of witness_reports; 1 = found body? */
      int32_t event_year;
      int32_t event_time;
      int32_t witness;
      int32_t accuses;
      int32_t report_year;
      int32_t report_time;
      static struct_identity _identity;
    public:
      T_anon_1();
    };
    std::vector<T_anon_1* > anon_1; /*!< reports */
    static struct_identity _identity;
    typedef crime* key_pointer_type;
    typedef int32_t key_field_type;
    static int binsearch_index(const std::vector<crime*> &vec, key_field_type key, bool exact = true);
    static int binsearch_index(const std::vector<crime*> &vec, key_pointer_type key, bool exact = true);
    static std::vector<crime*> &get_vector();
    static crime *find(key_field_type id);
  public:
    crime();
  };
  template<> struct DFHACK_EXPORT identity_traits<crime::T_mode> {
    static enum_identity identity;
    static enum_identity *get() { return &identity; }
  };
  template<> struct DFHACK_EXPORT enum_traits<crime::T_mode> {
    typedef int32_t base_type;
    typedef crime::T_mode enum_type;
    static const base_type first_item_value = 0;
    static const base_type last_item_value = 10;
    static inline bool is_valid(enum_type value) {
      return (base_type(value) >= first_item_value && base_type(value) <= last_item_value);
    }
    static const enum_type first_item = (enum_type)first_item_value;
    static const enum_type last_item = (enum_type)last_item_value;
    static const char *const key_table[11];
  };
  template<> struct DFHACK_EXPORT bitfield_traits<crime::T_flags> {
    typedef uint32_t base_type;
    typedef crime::T_flags bitfield_type;
    static const int bit_count = sizeof(base_type)*8;
    static const bitfield_item_info bits[bit_count];
  };
  template<> struct DFHACK_EXPORT identity_traits<crime::T_flags> {
    static bitfield_identity identity;
    static bitfield_identity *get() { return &identity; }
  };
}
#endif
