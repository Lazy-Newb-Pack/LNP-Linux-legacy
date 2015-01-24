/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_EMBARK_ITEM_CHOICE_H
#define DF_EMBARK_ITEM_CHOICE_H
#ifndef DF_ITEM_TYPE_H
#include "item_type.h"
#endif
namespace df {
  struct DFHACK_EXPORT embark_item_choice {
    struct DFHACK_EXPORT T_list {
      df::item_type item_type;
      int16_t item_subtype;
      int16_t mattype;
      int32_t matindex;
      int8_t unk_c; /*!< 1 if new, -1 if added */
      static struct_identity _identity;
    public:
      T_list();
    };
    std::vector<T_list* > list[107];
    static struct_identity _identity;
  public:
    embark_item_choice();
  };
}
#endif
