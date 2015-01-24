/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_JOB_ITEM_REF_H
#define DF_JOB_ITEM_REF_H
namespace df {
  struct item;
  struct DFHACK_EXPORT job_item_ref {
    df::item* item;
    enum T_role : int32_t {
      anon_1,
      Reagent,
      Hauled,
      LinkToTarget,
      LinkToTrigger,
      anon_2,
      TargetContainer,
      QueuedContainer,
      PushHaulVehicle
    };
    T_role role;
    int32_t is_fetching; /*!< 0 immediately once taken to be brought */
    int32_t job_item_idx;
    static struct_identity _identity;
  public:
    job_item_ref();
  };
  template<> struct DFHACK_EXPORT identity_traits<job_item_ref::T_role> {
    static enum_identity identity;
    static enum_identity *get() { return &identity; }
  };
  template<> struct DFHACK_EXPORT enum_traits<job_item_ref::T_role> {
    typedef int32_t base_type;
    typedef job_item_ref::T_role enum_type;
    static const base_type first_item_value = 0;
    static const base_type last_item_value = 8;
    static inline bool is_valid(enum_type value) {
      return (base_type(value) >= first_item_value && base_type(value) <= last_item_value);
    }
    static const enum_type first_item = (enum_type)first_item_value;
    static const enum_type last_item = (enum_type)last_item_value;
    static const char *const key_table[9];
  };
}
#endif
