/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_BLOCK_SQUARE_EVENT_H
#define DF_BLOCK_SQUARE_EVENT_H
#ifndef DF_BLOCK_SQUARE_EVENT_TYPE_H
#include "block_square_event_type.h"
#endif
namespace df {
  struct file_compressorst;
  struct DFHACK_EXPORT block_square_event : virtual_class {
    static virtual_identity _identity;
  public:
    virtual df::block_square_event_type getType() { return df::block_square_event_type(); /*0*/ };
    virtual void write_file(df::file_compressorst*) { /*1*/ };
    virtual void read_file(df::file_compressorst*, int32_t) { /*2*/ };
    virtual bool isEmpty() { return bool(); /*3*/ };
    virtual ~block_square_event() { /*4*/ };
    virtual void checkTemperature(int16_t, int16_t, int16_t) { /*5*/ };
  protected:
    block_square_event(virtual_identity *_id = &block_square_event::_identity);
    friend void *df::allocator_fn<block_square_event>(void*,const void*);
  };
}
#endif
