/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_LOADGAME_SAVE_INFO_H
#define DF_LOADGAME_SAVE_INFO_H
#ifndef DF_GAME_TYPE_H
#include "game_type.h"
#endif
namespace df {
  struct DFHACK_EXPORT loadgame_save_info {
    int32_t save_info[32];
    enum_field<df::game_type,int16_t> game_type;
    std::string fort_name;
    std::string world_name;
    int32_t year;
    std::string folder_name;
    static struct_identity _identity;
  public:
    loadgame_save_info();
  };
}
#endif
