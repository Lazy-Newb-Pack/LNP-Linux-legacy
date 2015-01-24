/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_SCRIPT_STEP_DIPHISTORYST_H
#define DF_SCRIPT_STEP_DIPHISTORYST_H
#ifndef DF_SCRIPT_STEPST_H
#include "script_stepst.h"
#endif
namespace df {
  struct DFHACK_EXPORT script_step_diphistoryst : script_stepst {
    std::string event;
    static virtual_identity _identity;
  protected:
    script_step_diphistoryst(virtual_identity *_id = &script_step_diphistoryst::_identity);
    friend void *df::allocator_fn<script_step_diphistoryst>(void*,const void*);
  };
}
#endif
