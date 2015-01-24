/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_CREATURE_VARIATION_CONVERT_TAG_H
#define DF_CREATURE_VARIATION_CONVERT_TAG_H
namespace df {
  struct DFHACK_EXPORT creature_variation_convert_tag {
    std::string cvct_master;
    std::string cvct_target;
    std::string cvct_replacement;
    int32_t unk_v40_1; /*!< v0.40.1 */
    std::string unk_v40_2; /*!< v0.40.1 */
    static struct_identity _identity;
  public:
    creature_variation_convert_tag();
  };
}
#endif
