/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_ART_IMAGE_PROPERTY_H
#define DF_ART_IMAGE_PROPERTY_H
#ifndef DF_ART_IMAGE_PROPERTY_TYPE_H
#include "art_image_property_type.h"
#endif
namespace df {
  struct art_image_element;
  struct file_compressorst;
  struct DFHACK_EXPORT art_image_property : virtual_class {
    BitArray<int> flags;
    static virtual_identity _identity;
  public:
    virtual void write_file(df::file_compressorst*) { /*0*/ };
    virtual void read_file(df::file_compressorst*, int32_t) { /*1*/ };
    virtual df::art_image_property_type getType() { return df::art_image_property_type(); /*2*/ };
    virtual ~art_image_property() { /*3*/ };
    virtual df::art_image_element* clone() { return 0; /*4*/ };
    virtual void getName(std::string*, void*, void*) { /*5*/ };
  protected:
    art_image_property(virtual_identity *_id = &art_image_property::_identity);
    friend void *df::allocator_fn<art_image_property>(void*,const void*);
  };
}
#endif
