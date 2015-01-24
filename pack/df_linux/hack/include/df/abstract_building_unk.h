/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_ABSTRACT_BUILDING_UNK_H
#define DF_ABSTRACT_BUILDING_UNK_H
namespace df {
  struct DFHACK_EXPORT abstract_building_unk {
    struct DFHACK_EXPORT T_anon_1 {
      int32_t anon_1;
      int32_t race;
      int32_t anon_2;
      int32_t anon_3;
      int32_t anon_4;
      int32_t anon_5;
      int32_t anon_6;
      int32_t anon_7; /*!< v0.40.01 */
      static struct_identity _identity;
    public:
      T_anon_1();
    };
    std::vector<T_anon_1* > anon_1;
    std::vector<int32_t > histfigs;
    static struct_identity _identity;
  public:
    abstract_building_unk();
  };
}
#endif
