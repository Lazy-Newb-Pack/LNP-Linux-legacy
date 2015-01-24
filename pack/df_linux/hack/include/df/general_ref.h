/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_GENERAL_REF_H
#define DF_GENERAL_REF_H
#ifndef DF_GENERAL_REF_TYPE_H
#include "general_ref_type.h"
#endif
namespace df {
  struct artifact_record;
  struct building;
  struct file_compressorst;
  struct historical_entity;
  struct item;
  struct nemesis_record;
  struct projectile;
  struct unit;
  struct DFHACK_EXPORT general_ref : virtual_class {
    static virtual_identity _identity;
  public:
    virtual void write_file(df::file_compressorst*) { /*0*/ };
    virtual void read_file(df::file_compressorst*, int32_t) { /*1*/ };
    virtual df::general_ref_type getType() { return df::general_ref_type(); /*2*/ };
    virtual df::item* getItem() { return 0; /*3*/ };
    virtual df::unit* getUnit() { return 0; /*4*/ };
    virtual df::projectile* getProjectile() { return 0; /*5*/ };
    virtual df::building* getBuilding() { return 0; /*6*/ };
    virtual df::historical_entity* getEntity() { return 0; /*7*/ };
    virtual df::artifact_record* getArtifact() { return 0; /*8*/ };
    virtual df::nemesis_record* getNemesis() { return 0; /*9*/ };
    virtual void setID(int32_t) { /*10*/ };
    virtual int32_t getID() { return int32_t(); /*11*/ };
    virtual void setLocation(int32_t, int32_t, int32_t) { /*12*/ };
    virtual void getLocation(int32_t*, int32_t*, int32_t*) { /*13*/ };
    virtual ~general_ref() { /*14*/ };
    virtual df::general_ref* clone() { return 0; /*15*/ };
  protected:
    virtual void anon_vmethod_16(int32_t, std::string*) { /*16*/ };
  public:
    virtual void getSecretName(std::string*) { /*17*/ }; /*!< for interactions */
  protected:
    general_ref(virtual_identity *_id = &general_ref::_identity);
    friend void *df::allocator_fn<general_ref>(void*,const void*);
  };
}
#endif
