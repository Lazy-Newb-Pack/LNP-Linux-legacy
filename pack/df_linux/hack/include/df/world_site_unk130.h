/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_WORLD_SITE_UNK130_H
#define DF_WORLD_SITE_UNK130_H
namespace df {
  struct DFHACK_EXPORT world_site_unk130 {
    int32_t index;
    struct DFHACK_EXPORT T_unk_4 {
      int32_t unk_0;
      int32_t index;
      int32_t unk_8;
      std::vector<int32_t > unk_c;
      static struct_identity _identity;
    public:
      T_unk_4();
    };
    std::vector<T_unk_4* > unk_4[4];
    static struct_identity _identity;
  public:
    world_site_unk130();
  };
}
#endif
