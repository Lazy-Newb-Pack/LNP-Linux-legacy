/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_VIEWSCREEN_DUNGEON_MONSTERSTATUSST_H
#define DF_VIEWSCREEN_DUNGEON_MONSTERSTATUSST_H
#ifndef DF_VIEWSCREEN_H
#include "viewscreen.h"
#endif
namespace df {
  struct spatter;
  struct unit;
  struct unit_inventory_item;
  struct DFHACK_EXPORT viewscreen_dungeon_monsterstatusst : viewscreen {
    df::unit* unit;
    int32_t inventory_cursor;
    int32_t body_part_cursor;
    std::vector<int16_t > body_part;
    bool view_skills;
    std::vector<df::unit_inventory_item* > inventory;
    std::vector<df::spatter* > spatters;
    static virtual_identity _identity;
  protected:
    viewscreen_dungeon_monsterstatusst(virtual_identity *_id = &viewscreen_dungeon_monsterstatusst::_identity);
    friend void *df::allocator_fn<viewscreen_dungeon_monsterstatusst>(void*,const void*);
  };
}
#endif
