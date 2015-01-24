/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_ENGRAVING_H
#define DF_ENGRAVING_H
#ifndef DF_COORD_H
#include "coord.h"
#endif
#ifndef DF_ENGRAVING_FLAGS_H
#include "engraving_flags.h"
#endif
#ifndef DF_ITEM_QUALITY_H
#include "item_quality.h"
#endif
#ifndef DF_SKILL_RATING_H
#include "skill_rating.h"
#endif
namespace df {
  struct DFHACK_EXPORT engraving {
    int32_t artist;
    int32_t masterpiece_event;
    df::skill_rating skill_rating; /*!< at the moment of creation */
    df::coord pos;
    df::engraving_flags flags;
    int8_t tile;
    int32_t art_id;
    int16_t art_subid;
    df::item_quality quality;
    int32_t unk1; /*!< v0.34.06 */
    int32_t unk2; /*!< v0.34.06 */
    static struct_identity _identity;
    static std::vector<engraving*> &get_vector();
    static engraving *find(int id);
  public:
    engraving();
  };
}
#endif
