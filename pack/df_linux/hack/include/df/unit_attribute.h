/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_UNIT_ATTRIBUTE_H
#define DF_UNIT_ATTRIBUTE_H
namespace df {
  struct DFHACK_EXPORT unit_attribute {
    int32_t value; /*!< effective = value - soft_demotion */
    int32_t max_value;
    int32_t improve_counter; /*!< counts to PHYS_ATT_RATES improve cost; then value++ */
    int32_t unused_counter; /*!< counts to PHYS_ATT_RATES unused rate; then rust_counter++ */
    int32_t soft_demotion; /*!< 0-100; when not 0 blocks improve_counter */
    int32_t rust_counter; /*!< counts to PHYS_ATT_RATES rust; then demotion_counter++ */
    int32_t demotion_counter; /*!< counts to PHYS_ATT_RATES demotion; then value--; soft_demotion++ */
    static struct_identity _identity;
  public:
    unit_attribute();
  };
}
#endif
