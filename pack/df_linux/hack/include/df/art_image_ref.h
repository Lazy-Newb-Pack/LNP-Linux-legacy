/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_ART_IMAGE_REF_H
#define DF_ART_IMAGE_REF_H
namespace df {
  struct DFHACK_EXPORT art_image_ref {
    int32_t id;
    int16_t subid;
    int32_t civ_id; /*!< v0.34.01 */
    int32_t site_id; /*!< v0.34.01 */
    static struct_identity _identity;
  public:
    art_image_ref();
  };
}
#endif
