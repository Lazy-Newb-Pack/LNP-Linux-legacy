/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_CURSE_ATTR_CHANGE_H
#define DF_CURSE_ATTR_CHANGE_H
namespace df {
  struct DFHACK_EXPORT curse_attr_change {
    int32_t phys_att_perc[6];
    int32_t phys_att_add[6];
    int32_t ment_att_perc[13];
    int32_t ment_att_add[13];
    static struct_identity _identity;
  public:
    curse_attr_change();
  };
}
#endif
