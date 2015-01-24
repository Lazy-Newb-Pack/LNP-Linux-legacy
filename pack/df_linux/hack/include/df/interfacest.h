/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_INTERFACEST_H
#define DF_INTERFACEST_H
#ifndef DF_VIEWSCREEN_H
#include "viewscreen.h"
#endif
namespace df {
  struct DFHACK_EXPORT interfacest {
    int32_t original_fps;
    df::viewscreen view;
    uint32_t flag;
    int32_t shutdown_interface_tickcount;
    int32_t shutdown_interface_for_ms;
    int8_t supermovie_on;
    int32_t supermovie_pos;
    int32_t supermovie_delayrate;
    int32_t supermovie_delaystep;
    std::vector<std::string* > supermovie_sound;
    int32_t supermovie_sound_time[16][200]; /*!< SOUND_CHANNELNUM */
    char supermoviebuffer[800000];
    char supermoviebuffer_comp[1000000];
    int32_t currentblocksize;
    int32_t nextfilepos;
    int8_t first_movie_write;
    std::string movie_file;
    static struct_identity _identity;
  public:
    interfacest();
  };
}
#endif
