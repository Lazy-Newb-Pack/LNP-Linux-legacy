/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_TISSUE_STYLE_RAW_H
#define DF_TISSUE_STYLE_RAW_H
#ifndef DF_PART_OF_SPEECH_H
#include "part_of_speech.h"
#endif
namespace df {
  struct DFHACK_EXPORT tissue_style_raw {
    std::string token;
    std::vector<int16_t > part_idx;
    std::vector<int16_t > layer_idx;
    std::vector<int16_t > styles;
    std::vector<int32_t > list_idx;
    int32_t id;
    std::string noun;
    enum_field<df::part_of_speech,int16_t> word_type; /*!< 0 singular, 1 plural */
    static struct_identity _identity;
    typedef tissue_style_raw* key_pointer_type;
    typedef int32_t key_field_type;
    static int binsearch_index(const std::vector<tissue_style_raw*> &vec, key_field_type key, bool exact = true);
    static int binsearch_index(const std::vector<tissue_style_raw*> &vec, key_pointer_type key, bool exact = true);
  public:
    tissue_style_raw();
  };
}
#endif
