/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_LANGUAGE_TRANSLATION_H
#define DF_LANGUAGE_TRANSLATION_H
namespace df {
  struct DFHACK_EXPORT language_translation {
    std::string name;
    std::vector<void* > unknown1; /*!< empty */
    std::vector<void* > unknown2; /*!< empty */
    std::vector<std::string* > words;
    int32_t flags; /*!< v0.40.01; 1 = generated */
    std::vector<std::string* > str; /*!< v0.40.01 */
    static struct_identity _identity;
    static std::vector<language_translation*> &get_vector();
    static language_translation *find(int id);
  public:
    language_translation();
  };
}
#endif
