/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_LAYER_OBJECT_H
#define DF_LAYER_OBJECT_H
#ifndef DF_INTERFACE_KEY_H
#include "interface_key.h"
#endif
namespace df {
  struct DFHACK_EXPORT layer_object : virtual_class {
    bool enabled;
    bool active;
    static virtual_identity _identity;
  public:
    virtual int32_t getFirstVisible() { return int32_t(); /*0*/ };
    virtual int32_t getLastVisible() { return int32_t(); /*1*/ };
    virtual int32_t getX1() { return int32_t(); /*2*/ };
    virtual int32_t getY1() { return int32_t(); /*3*/ };
    virtual int32_t getX2() { return int32_t(); /*4*/ };
    virtual int32_t getY2() { return int32_t(); /*5*/ };
  protected:
    virtual int32_t anon_vmethod_6() { return int32_t(); /*6*/ }; /*!< list 1; button,base -1 */
  public:
    virtual int32_t getListCursor() { return int32_t(); /*7*/ };
    virtual void setListCursor(int32_t) { /*8*/ };
    virtual void feed(std::set<df::interface_key >*) { /*9*/ };
    virtual bool isSetMouseLRCur() { return bool(); /*10*/ };
    virtual bool isSetMouseLCur() { return bool(); /*11*/ };
    virtual bool isSetMouseRCur() { return bool(); /*12*/ };
    virtual int32_t getMouseLCur() { return int32_t(); /*13*/ };
    virtual int32_t getMouseRCur() { return int32_t(); /*14*/ };
  protected:
    virtual void anon_vmethod_15(int32_t*, int32_t*) { /*15*/ };
    virtual void anon_vmethod_16(int32_t*, int32_t*) { /*16*/ };
  public:
    virtual int32_t getListLength() { return int32_t(); /*17*/ };
    virtual void setListLength(int32_t) { /*18*/ };
  protected:
    virtual int32_t anon_vmethod_19() { return int32_t(); /*19*/ };
    virtual int32_t anon_vmethod_20() { return int32_t(); /*20*/ };
    virtual int32_t anon_vmethod_21() { return int32_t(); /*21*/ };
    virtual int32_t anon_vmethod_22() { return int32_t(); /*22*/ };
  protected:
    layer_object(virtual_identity *_id = &layer_object::_identity);
    friend void *df::allocator_fn<layer_object>(void*,const void*);
  };
}
#endif
