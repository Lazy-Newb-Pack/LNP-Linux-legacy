/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_ADVENTURE_MOVEMENT_OPTION_H
#define DF_ADVENTURE_MOVEMENT_OPTION_H
namespace df {
  struct DFHACK_EXPORT adventure_movement_option : virtual_class {
    static virtual_identity _identity;
  protected:
    virtual ~adventure_movement_option() { /*0*/ };
  protected:
    adventure_movement_option(virtual_identity *_id = &adventure_movement_option::_identity);
    friend void *df::allocator_nodel_fn<adventure_movement_option>(void*,const void*);
  };
}
#endif
