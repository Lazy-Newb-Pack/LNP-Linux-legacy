/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_DESCRIPTOR_COLOR_H
#define DF_DESCRIPTOR_COLOR_H
namespace df {
  struct DFHACK_EXPORT descriptor_color {
    std::string id;
    std::vector<void* > word_unk;
    std::vector<int32_t > words;
    std::string name;
    int8_t color;
    int8_t bold;
    float red;
    float green;
    float blue;
    static struct_identity _identity;
    static std::vector<descriptor_color*> &get_vector();
    static descriptor_color *find(int id);
  public:
    descriptor_color();
  };
}
#endif
