/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_RESOURCE_ALLOTMENT_DATA_H
#define DF_RESOURCE_ALLOTMENT_DATA_H
namespace df {
  struct resource_allotment_specifier;
  struct DFHACK_EXPORT resource_allotment_data {
    int32_t index;
    std::vector<df::resource_allotment_specifier* > resource_allotments[100];
    int32_t unk1;
    int32_t unk2;
    int32_t unk3;
    int32_t unk_650;
    struct DFHACK_EXPORT T_unk_654 {
      int32_t unk_0;
      std::vector<int32_t > unk_4;
      std::vector<int32_t > unk_14;
      std::vector<int32_t > unk_24;
      static struct_identity _identity;
    public:
      T_unk_654();
    };
    std::vector<T_unk_654* > unk_654;
    static struct_identity _identity;
    static std::vector<resource_allotment_data*> &get_vector();
    static resource_allotment_data *find(int id);
  public:
    resource_allotment_data();
  };
}
#endif
