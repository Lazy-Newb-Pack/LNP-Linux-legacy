/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_CREATURE_VARIATION_H
#define DF_CREATURE_VARIATION_H
namespace df {
  struct creature_variation_convert_tag;
  struct DFHACK_EXPORT creature_variation {
    std::string id;
    std::vector<df::creature_variation_convert_tag* > cv_convert_tag;
    std::vector<std::string* > cv_new_tag;
    std::vector<std::string* > cv_remove_tag;
    std::vector<std::string* > cv_unk_tag; /*!< v0.40.1 */
    std::vector<std::string* > unk_v40_1;
    std::vector<int32_t > unk_v40_2;
    std::vector<std::string* > unk_v40_3;
    static struct_identity _identity;
    static std::vector<creature_variation*> &get_vector();
    static creature_variation *find(int id);
  public:
    creature_variation();
  };
}
#endif
