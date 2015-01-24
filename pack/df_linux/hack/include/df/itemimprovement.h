/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_ITEMIMPROVEMENT_H
#define DF_ITEMIMPROVEMENT_H
#ifndef DF_IMPROVEMENT_TYPE_H
#include "improvement_type.h"
#endif
#ifndef DF_ITEM_QUALITY_H
#include "item_quality.h"
#endif
#ifndef DF_SKILL_RATING_H
#include "skill_rating.h"
#endif
namespace df {
  struct art_image;
  struct caravan_state;
  struct file_compressorst;
  struct DFHACK_EXPORT itemimprovement : virtual_class {
    int16_t mat_type;
    int32_t mat_index;
    int32_t maker;
    int32_t masterpiece_event;
    df::item_quality quality;
    df::skill_rating skill_rating; /*!< at the moment of creation */
    int32_t anon_1;
    static virtual_identity _identity;
  public:
    virtual df::art_image* getImage(int32_t) { return 0; /*0*/ };
    virtual void getColorAndShape(std::vector<int16_t >*, std::vector<int16_t >*, void*) { /*1*/ };
    virtual df::itemimprovement* clone() { return 0; /*2*/ };
    virtual void write_file(df::file_compressorst*) { /*3*/ };
    virtual void read_file(df::file_compressorst*, int32_t) { /*4*/ };
    virtual df::improvement_type getType() { return df::improvement_type(); /*5*/ };
  protected:
    virtual void anon_vmethod_6() { /*6*/ };
  public:
    virtual ~itemimprovement() { /*7*/ };
    virtual int32_t getDyeValue(df::caravan_state*) { return int32_t(); /*8*/ };
    virtual void setShape(int32_t) { /*9*/ };
  protected:
    itemimprovement(virtual_identity *_id = &itemimprovement::_identity);
    friend void *df::allocator_fn<itemimprovement>(void*,const void*);
  };
}
#endif
