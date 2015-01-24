/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_CULTURAL_IDENTITY_H
#define DF_CULTURAL_IDENTITY_H
namespace df {
  struct entity_event;
  struct DFHACK_EXPORT cultural_identity {
    int32_t id;
    int32_t site_id;
    int32_t civ_id;
    struct DFHACK_EXPORT T_unk_c {
      int32_t group_id;
      int32_t unk_4;
      int32_t unk_8;
      int32_t unk_c;
      int32_t unk_10;
      int32_t unk_14;
      int32_t unk_18;
      int32_t unk_1c;
      int32_t unk_20;
      std::vector<int32_t > unk_24;
      std::vector<int32_t > unk_34;
      int32_t unk_44;
      static struct_identity _identity;
    public:
      T_unk_c();
    };
    std::vector<T_unk_c* > unk_c;
    int16_t unk_1c[22];
    int32_t unk_48[32];
    std::vector<df::entity_event* > unk_c8;
    int32_t unk_d8;
    std::vector<int32_t > unk_dc;
    int32_t unk_ec;
    int32_t unk_f0;
    int32_t unk_f4;
    int32_t unk_f8;
    static struct_identity _identity;
    typedef cultural_identity* key_pointer_type;
    typedef int32_t key_field_type;
    static int binsearch_index(const std::vector<cultural_identity*> &vec, key_field_type key, bool exact = true);
    static int binsearch_index(const std::vector<cultural_identity*> &vec, key_pointer_type key, bool exact = true);
    static std::vector<cultural_identity*> &get_vector();
    static cultural_identity *find(key_field_type id);
  public:
    cultural_identity();
  };
}
#endif
