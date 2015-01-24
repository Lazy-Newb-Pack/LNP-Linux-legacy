/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_BUILDING_EXTENTS_H
#define DF_BUILDING_EXTENTS_H
namespace df {
  struct DFHACK_EXPORT building_extents {
    /**
     * 0 - not room; 1 in stockpile; 2 wall; 3 inner; 4 distance boundary.
     */
    uint8_t* extents;
    int32_t x;
    int32_t y;
    int32_t width;
    int32_t height;
    static struct_identity _identity;
  public:
    building_extents();
  };
}
#endif
