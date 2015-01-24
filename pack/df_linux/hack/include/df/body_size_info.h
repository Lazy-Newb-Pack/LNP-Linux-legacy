/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_BODY_SIZE_INFO_H
#define DF_BODY_SIZE_INFO_H
namespace df {
  struct DFHACK_EXPORT body_size_info {
    int32_t size_cur;
    int32_t size_base;
    int32_t area_cur; /*!< size_cur^0.666 */
    int32_t area_base; /*!< size_base^0.666 */
    int32_t length_cur; /*!< (size_cur*10000)^0.333 */
    int32_t length_base; /*!< (size_base*10000)^0.333 */
    static struct_identity _identity;
  public:
    body_size_info();
  };
}
#endif
