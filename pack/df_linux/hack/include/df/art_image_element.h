/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_ART_IMAGE_ELEMENT_H
#define DF_ART_IMAGE_ELEMENT_H
#ifndef DF_ART_IMAGE_ELEMENT_TYPE_H
#include "art_image_element_type.h"
#endif
namespace df {
  struct file_compressorst;
  struct DFHACK_EXPORT art_image_element : virtual_class {
    int32_t count;
    static virtual_identity _identity;
  public:
    virtual void write_file(df::file_compressorst*) { /*0*/ };
    virtual void read_file(df::file_compressorst*, int32_t) { /*1*/ };
    virtual df::art_image_element_type getType() { return df::art_image_element_type(); /*2*/ };
    virtual void setID(int32_t) { /*3*/ };
    virtual ~art_image_element() { /*4*/ };
    virtual df::art_image_element* clone() { return 0; /*5*/ };
    virtual void getSymbol(int8_t*, int32_t*) { /*6*/ };
    virtual void getName1(std::string*, void*, void*) { /*7*/ };
    virtual void getName2(std::string*, void*) { /*8*/ };
  protected:
    virtual void anon_vmethod_9() { /*9*/ };
  public:
    virtual void getColorAndShape(std::vector<int16_t >*, std::vector<int16_t >*) { /*10*/ };
  protected:
    art_image_element(virtual_identity *_id = &art_image_element::_identity);
    friend void *df::allocator_fn<art_image_element>(void*,const void*);
  };
}
#endif
