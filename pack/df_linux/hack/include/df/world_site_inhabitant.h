/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_WORLD_SITE_INHABITANT_H
#define DF_WORLD_SITE_INHABITANT_H
namespace df {
  struct DFHACK_EXPORT world_site_inhabitant {
    int32_t count;
    int32_t race;
    int32_t unk_8;
    int32_t outcast_id;
    int32_t unk_10; /*!< v0.40.1 */
    int32_t unk_14; /*!< v0.40.1 */
    int32_t unk_18; /*!< v0.40.1 */
    int32_t unk_1c; /*!< v0.40.1 */
    int32_t unk_20; /*!< v0.40.1 */
    int32_t unk_24; /*!< v0.40.1 */
    int32_t unk_28; /*!< v0.40.1 */
    static struct_identity _identity;
  public:
    world_site_inhabitant();
  };
}
#endif
