/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_INIT_INPUT_H
#define DF_INIT_INPUT_H
#ifndef DF_INIT_INPUT_FLAGS_H
#include "init_input_flags.h"
#endif
namespace df {
  struct DFHACK_EXPORT init_input {
    int32_t hold_time;
    int32_t repeat_time;
    int32_t macro_time;
    int32_t pause_zoom_no_interface_ms;
    BitArray<df::init_input_flags> flag;
    int32_t zoom_speed;
    int32_t repeat_accel_start;
    int32_t repeat_accel_limit;
    static struct_identity _identity;
  public:
    init_input();
  };
}
#endif
