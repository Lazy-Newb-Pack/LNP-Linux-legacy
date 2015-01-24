/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_JOB_SUBTYPE_SURGERY_H
#define DF_JOB_SUBTYPE_SURGERY_H
namespace df {
  namespace enums {
    namespace job_subtype_surgery {
      enum job_subtype_surgery : int32_t {
        Surgery,
        StopBleeding,
        RepairCompoundFracture,
        RemoveRottenTissue
      };
    }
  }
  using enums::job_subtype_surgery::job_subtype_surgery;
  template<> struct DFHACK_EXPORT identity_traits<job_subtype_surgery> {
    static enum_identity identity;
    static enum_identity *get() { return &identity; }
  };
  template<> struct DFHACK_EXPORT enum_traits<job_subtype_surgery> {
    typedef int32_t base_type;
    typedef job_subtype_surgery enum_type;
    static const base_type first_item_value = 0;
    static const base_type last_item_value = 3;
    static inline bool is_valid(enum_type value) {
      return (base_type(value) >= first_item_value && base_type(value) <= last_item_value);
    }
    static const enum_type first_item = (enum_type)first_item_value;
    static const enum_type last_item = (enum_type)last_item_value;
    static const char *const key_table[4];
  };
}
#endif
