/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_LANGUAGE_WORD_TABLE_H
#define DF_LANGUAGE_WORD_TABLE_H
#ifndef DF_PART_OF_SPEECH_H
#include "part_of_speech.h"
#endif
namespace df {
  struct DFHACK_EXPORT language_word_table {
    std::vector<int32_t > words[6];
    std::vector<df::part_of_speech > parts[6];
    static struct_identity _identity;
  public:
    language_word_table();
  };
}
#endif
