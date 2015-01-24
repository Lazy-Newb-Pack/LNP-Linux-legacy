/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_VIEWSCREEN_H
#define DF_VIEWSCREEN_H
#ifndef DF_INTERFACE_BREAKDOWN_TYPES_H
#include "interface_breakdown_types.h"
#endif
#ifndef DF_INTERFACE_KEY_H
#include "interface_key.h"
#endif
namespace df {
  struct DFHACK_EXPORT viewscreen : virtual_class {
    df::viewscreen* child;
    df::viewscreen* parent;
    df::interface_breakdown_types breakdown_level;
    int8_t option_key_pressed;
    static virtual_identity _identity;
#include "custom/viewscreen.methods.inc"
  public:
    virtual void feed(std::set<df::interface_key >*) { /*0*/ };
    virtual void logic() { /*1*/ };
    virtual void render() { /*2*/ };
    virtual void resize(int32_t, int32_t) { /*3*/ };
    virtual void help() { /*4*/ };
    virtual int8_t movies_okay() { return int8_t(); /*5*/ };
    virtual int8_t is_option_screen() { return int8_t(); /*6*/ };
    virtual int8_t is_save_screen() { return int8_t(); /*7*/ };
    virtual ~viewscreen() { /*8*/ };
    virtual bool key_conflict(df::interface_key) { return bool(); /*9*/ };
  protected:
    viewscreen(virtual_identity *_id = &viewscreen::_identity);
    friend void *df::allocator_fn<viewscreen>(void*,const void*);
  };
}
#endif
