/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_LANGUAGE_SYMBOL_H
#define DF_LANGUAGE_SYMBOL_H
namespace df {
  struct DFHACK_EXPORT language_symbol {
    std::string name;
    std::vector<void* > unknown; /*!< empty */
    std::vector<int32_t > words;
    int32_t flags; /*!< v0.40.01 */
    std::vector<std::string* > str; /*!< v0.40.01 */
    static struct_identity _identity;
    static std::vector<language_symbol*> &get_vector();
    static language_symbol *find(int id);
  public:
    language_symbol();
  };
}
#endif
