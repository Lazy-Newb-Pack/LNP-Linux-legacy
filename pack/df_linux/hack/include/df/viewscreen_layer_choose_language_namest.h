/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_VIEWSCREEN_LAYER_CHOOSE_LANGUAGE_NAMEST_H
#define DF_VIEWSCREEN_LAYER_CHOOSE_LANGUAGE_NAMEST_H
#ifndef DF_LANGUAGE_WORD_TABLE_H
#include "language_word_table.h"
#endif
#ifndef DF_PART_OF_SPEECH_H
#include "part_of_speech.h"
#endif
#ifndef DF_VIEWSCREEN_LAYER_H
#include "viewscreen_layer.h"
#endif
namespace df {
  struct historical_entity;
  struct language_name;
  struct DFHACK_EXPORT viewscreen_layer_choose_language_namest : viewscreen_layer {
    df::historical_entity* entity;
    df::language_name* name;
    int32_t unk1a;
    int32_t unk1b;
    int32_t unk1c;
    df::language_word_table dictionary;
    std::vector<int32_t > list_word;
    std::vector<df::part_of_speech > list_part;
    std::string selector;
    static virtual_identity _identity;
  protected:
    viewscreen_layer_choose_language_namest(virtual_identity *_id = &viewscreen_layer_choose_language_namest::_identity);
    friend void *df::allocator_fn<viewscreen_layer_choose_language_namest>(void*,const void*);
  };
}
#endif
