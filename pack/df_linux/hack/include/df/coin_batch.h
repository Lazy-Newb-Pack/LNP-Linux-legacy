/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_COIN_BATCH_H
#define DF_COIN_BATCH_H
namespace df {
  struct DFHACK_EXPORT coin_batch {
    int32_t year;
    int16_t mat_type;
    int32_t mat_index;
    int32_t entity;
    int32_t ruler;
    struct DFHACK_EXPORT T_image_front {
      int32_t id;
      int16_t subid;
      static struct_identity _identity;
    public:
      T_image_front();
    };
    T_image_front image_front;
    struct DFHACK_EXPORT T_image_back {
      int32_t id;
      int16_t subid;
      static struct_identity _identity;
    public:
      T_image_back();
    };
    T_image_back image_back;
    static struct_identity _identity;
    static std::vector<coin_batch*> &get_vector();
    static coin_batch *find(int id);
  public:
    coin_batch();
  };
}
#endif
