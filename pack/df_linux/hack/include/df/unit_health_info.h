/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_UNIT_HEALTH_INFO_H
#define DF_UNIT_HEALTH_INFO_H
#ifndef DF_JOB_TYPE_H
#include "job_type.h"
#endif
#ifndef DF_UNIT_BP_HEALTH_FLAGS_H
#include "unit_bp_health_flags.h"
#endif
#ifndef DF_UNIT_HEALTH_FLAGS_H
#include "unit_health_flags.h"
#endif
namespace df {
  struct DFHACK_EXPORT unit_health_info {
    int32_t unit_id;
    df::unit_health_flags flags;
    std::vector<df::unit_bp_health_flags > body_part_flags;
    int16_t unk_18_cntdn;
    int16_t immobilize_cntdn;
    int16_t dressing_cntdn;
    int16_t suture_cntdn;
    int16_t crutch_cntdn;
    struct DFHACK_EXPORT T_op_history {
      df::job_type job_type;
      union DFHACK_EXPORT T_info {
        struct DFHACK_EXPORT T_crutch {
          int32_t item_type;
          int32_t item_subtype;
          int32_t mat_type;
          int32_t mat_index;
          int32_t item_id;
        };
        T_crutch crutch;
        int32_t bed_id;
        struct DFHACK_EXPORT T_bandage {
          int32_t mat_type;
          int32_t mat_index;
          int32_t body_part_id;
          int32_t item_id;
        };
        T_bandage bandage;
      };
      T_info info;
      int32_t year;
      int32_t year_time;
      int32_t doctor_id;
      static struct_identity _identity;
    public:
      T_op_history();
    };
    std::vector<T_op_history* > op_history;
    std::vector<void* > unk_34;
    static struct_identity _identity;
  public:
    unit_health_info();
  };
  template<> struct DFHACK_EXPORT identity_traits<unit_health_info::T_op_history::T_info::T_crutch> {
    static struct_identity identity;
    static struct_identity *get() { return &identity; }
  };
  template<> struct DFHACK_EXPORT identity_traits<unit_health_info::T_op_history::T_info::T_bandage> {
    static struct_identity identity;
    static struct_identity *get() { return &identity; }
  };
  template<> struct DFHACK_EXPORT identity_traits<unit_health_info::T_op_history::T_info> {
    static struct_identity identity;
    static struct_identity *get() { return &identity; }
  };
}
#endif
