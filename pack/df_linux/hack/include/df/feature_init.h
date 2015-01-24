/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_FEATURE_INIT_H
#define DF_FEATURE_INIT_H
#ifndef DF_FEATURE_INIT_FLAGS_H
#include "feature_init_flags.h"
#endif
#ifndef DF_FEATURE_TYPE_H
#include "feature_type.h"
#endif
namespace df {
  struct feature;
  struct feature_alteration;
  struct file_compressorst;
  struct DFHACK_EXPORT feature_init : virtual_class {
    BitArray<df::feature_init_flags> flags;
    std::vector<df::feature_alteration* > alterations;
    int16_t start_x;
    int16_t start_y;
    int16_t end_x;
    int16_t end_y;
    int16_t start_depth; /*!< in underground layers */
    int16_t end_depth;
    static virtual_identity _identity;
  public:
    virtual df::feature_type getType() { return df::feature_type(); /*0*/ };
    virtual void write_file(df::file_compressorst*, int32_t) { /*1*/ };
    virtual void read_file(df::file_compressorst*, int32_t, int32_t) { /*2*/ };
    virtual df::feature* createFeature() { return 0; /*3*/ };
    virtual df::feature* recreateFeature() { return 0; /*4*/ }; /*!< destroyFeature(), then createFeature() */
    virtual void destroyFeature() { /*5*/ };
    virtual df::feature* getFeature() { return 0; /*6*/ };
    virtual ~feature_init() { /*7*/ };
    virtual void getMaterial(int16_t*, int32_t*) { /*8*/ };
  protected:
    virtual bool anon_vmethod_9() { return bool(); /*9*/ };
    virtual bool anon_vmethod_10() { return bool(); /*10*/ };
    virtual bool anon_vmethod_11() { return bool(); /*11*/ };
    virtual bool anon_vmethod_12() { return bool(); /*12*/ };
  public:
    virtual void getColor(int16_t*, int16_t*, int8_t*) { /*13*/ };
    virtual void getName(std::string*) { /*14*/ };
    virtual bool isWater() { return bool(); /*15*/ };
    virtual bool isSubterranean() { return bool(); /*16*/ };
    virtual bool isMagma() { return bool(); /*17*/ };
    virtual bool isChasm() { return bool(); /*18*/ };
    virtual bool isLayer() { return bool(); /*19*/ };
  protected:
    virtual bool anon_vmethod_20() { return bool(); /*20*/ };
  public:
    virtual int32_t getLayer() { return int32_t(); /*21*/ };
  protected:
    feature_init(virtual_identity *_id = &feature_init::_identity);
    friend void *df::allocator_fn<feature_init>(void*,const void*);
  };
}
#endif
