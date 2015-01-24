/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_LANGUAGE_WORD_H
#define DF_LANGUAGE_WORD_H
#ifndef DF_LANGUAGE_WORD_FLAGS_H
#include "language_word_flags.h"
#endif
namespace df {
  struct DFHACK_EXPORT language_word {
    std::string word;
    std::string forms[9];
    uint8_t adj_dist;
    char anon_1[7]; /*!< looks like garbage */
    df::language_word_flags flags;
    std::vector<std::string* > str; /*!< v0.40.01 */
    static struct_identity _identity;
    static std::vector<language_word*> &get_vector();
    static language_word *find(int id);
  public:
    language_word();
  };
}
#endif
