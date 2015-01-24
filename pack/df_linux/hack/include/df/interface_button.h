/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_INTERFACE_BUTTON_H
#define DF_INTERFACE_BUTTON_H
#ifndef DF_INTERFACE_KEY_H
#include "interface_key.h"
#endif
namespace df {
  struct DFHACK_EXPORT interface_button : virtual_class {
    df::interface_key hotkey_id;
    bool is_hidden;
    int32_t anon_1; /*!< v0.40.23 */
    static virtual_identity _identity;
  public:
    virtual void printSlabStatus(int32_t, int32_t, int32_t) { /*0*/ }; /*!< ghost, buried, memorialized */
    virtual void getLabel(std::string*) { /*1*/ };
    virtual void click() { /*2*/ };
    virtual void setColor(bool) { /*3*/ };
    virtual void makeHidden() { /*4*/ };
    virtual uint8_t getTrackGlyph() { return uint8_t(); /*5*/ };
    virtual void setTrackGlyphColor() { /*6*/ };
    virtual ~interface_button() { /*7*/ };
  protected:
    interface_button(virtual_identity *_id = &interface_button::_identity);
    friend void *df::allocator_fn<interface_button>(void*,const void*);
  };
}
#endif
