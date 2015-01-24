/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_INCIDENT_H
#define DF_INCIDENT_H
#ifndef DF_DEATH_TYPE_H
#include "death_type.h"
#endif
namespace df {
  struct DFHACK_EXPORT incident {
    int32_t id;
    int32_t unk_4;
    std::vector<int32_t > witnesses;
    int32_t victim;
    int32_t victim_hfid; /*!< v0.40.01 */
    int32_t victim_race; /*!< v0.40.01 */
    int32_t victim_caste; /*!< v0.40.01 */
    int32_t unk_v40_1b; /*!< v0.40.01 */
    int32_t unk_v40_1c; /*!< v0.40.01 */
    int32_t killer;
    int32_t killer_hfid; /*!< v0.40.01 */
    int32_t killer_race; /*!< v0.40.01 */
    int32_t killer_caste; /*!< v0.40.01 */
    int32_t entity1; /*!< v0.40.01 */
    int32_t unk_v40_2c; /*!< v0.40.01 */
    int32_t crime_id;
    int32_t site;
    int32_t unk_v40_3a; /*!< v0.40.01 */
    int32_t unk_v40_3b; /*!< v0.40.01 */
    int32_t entity;
    int32_t event_year;
    int32_t event_time;
    union T_flags {
      uint32_t whole;
      struct {
        uint32_t announced_missing : 1;
        uint32_t discovered : 1;
        uint32_t unk2 : 1; /*!< v0.40.01 */
      } bits;
      enum Shift {
        shift_announced_missing = 0,
        shift_discovered = 1,
        shift_unk2 = 2
      };
      enum Mask : uint32_t {
        mask_announced_missing = 0x1U,
        mask_discovered = 0x2U,
        mask_unk2 = 0x4U
      };
      T_flags(uint32_t whole_ = 0) : whole(whole_) {};
    };
    T_flags flags;
    enum_field<df::death_type,int16_t> death_cause;
    int32_t unk_6c;
    int32_t unk_70;
    int32_t world_x;
    int32_t world_y;
    int32_t world_z;
    int32_t unk_80;
    static struct_identity _identity;
    typedef incident* key_pointer_type;
    typedef int32_t key_field_type;
    static int binsearch_index(const std::vector<incident*> &vec, key_field_type key, bool exact = true);
    static int binsearch_index(const std::vector<incident*> &vec, key_pointer_type key, bool exact = true);
    static std::vector<incident*> &get_vector();
    static incident *find(key_field_type id);
  public:
    incident();
  };
  template<> struct DFHACK_EXPORT bitfield_traits<incident::T_flags> {
    typedef uint32_t base_type;
    typedef incident::T_flags bitfield_type;
    static const int bit_count = sizeof(base_type)*8;
    static const bitfield_item_info bits[bit_count];
  };
  template<> struct DFHACK_EXPORT identity_traits<incident::T_flags> {
    static bitfield_identity identity;
    static bitfield_identity *get() { return &identity; }
  };
}
#endif
