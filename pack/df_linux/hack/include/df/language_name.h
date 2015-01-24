/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_LANGUAGE_NAME_H
#define DF_LANGUAGE_NAME_H
#ifndef DF_PART_OF_SPEECH_H
#include "part_of_speech.h"
#endif
namespace df {
  struct DFHACK_EXPORT language_name {
    std::string first_name;
    std::string nickname;
    int32_t words[7];
    enum_field<df::part_of_speech,int16_t> parts_of_speech[7];
    int32_t language;
    int16_t unknown;
    bool has_name;
    static struct_identity _identity;
  public:
    language_name();
  };
}
#endif
