/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_BLOCK_SQUARE_EVENT_TYPE_H
#define DF_BLOCK_SQUARE_EVENT_TYPE_H
namespace df {
  namespace enums {
    namespace block_square_event_type {
      enum block_square_event_type : int32_t {
        mineral,
        frozen_liquid,
        world_construction,
        material_spatter,
        grass,
        spoor,
        item_spatter,
        designation_priority
      };
    }
  }
  using enums::block_square_event_type::block_square_event_type;
  template<> struct DFHACK_EXPORT identity_traits<block_square_event_type> {
    static enum_identity identity;
    static enum_identity *get() { return &identity; }
  };
  template<> struct DFHACK_EXPORT enum_traits<block_square_event_type> {
    typedef int32_t base_type;
    typedef block_square_event_type enum_type;
    static const base_type first_item_value = 0;
    static const base_type last_item_value = 7;
    static inline bool is_valid(enum_type value) {
      return (base_type(value) >= first_item_value && base_type(value) <= last_item_value);
    }
    static const enum_type first_item = (enum_type)first_item_value;
    static const enum_type last_item = (enum_type)last_item_value;
    static const char *const key_table[8];
  };
}
#endif
