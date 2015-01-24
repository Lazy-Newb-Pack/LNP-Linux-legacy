/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_ABSTRACT_BUILDING_H
#define DF_ABSTRACT_BUILDING_H
#ifndef DF_ABSTRACT_BUILDING_TYPE_H
#include "abstract_building_type.h"
#endif
namespace df {
  struct abstract_building_unk;
  struct file_compressorst;
  struct language_name;
  struct DFHACK_EXPORT abstract_building : virtual_class {
    int32_t id;
    struct DFHACK_EXPORT T_inhabitants {
      int16_t anon_1;
      int32_t anon_2;
      static struct_identity _identity;
    public:
      T_inhabitants();
    };
    std::vector<T_inhabitants* > inhabitants;
    BitArray<int> flags;
    struct DFHACK_EXPORT T_unk1 {
      std::vector<int32_t > hfig;
      int32_t anon_1;
      std::vector<int16_t > anon_2;
      int16_t mat_type; /*!< just a guess */
      int32_t mat_index;
      static struct_identity _identity;
    public:
      T_unk1();
    };
    T_unk1* unk1; /*!< in temples; hfig is the god */
    std::vector<int32_t > unk2;
    int32_t unk3;
    std::vector<int32_t > unk4;
    int32_t site_owner_id;
    int32_t site_id; /*!< not initialized/saved/loaded, assumed member of base class */
    static virtual_identity _identity;
    typedef abstract_building* key_pointer_type;
    typedef int32_t key_field_type;
    static int binsearch_index(const std::vector<abstract_building*> &vec, key_field_type key, bool exact = true);
    static int binsearch_index(const std::vector<abstract_building*> &vec, key_pointer_type key, bool exact = true);
  public:
    virtual df::abstract_building_type getType() { return df::abstract_building_type(); /*0*/ };
    virtual int16_t getSubtype() { return int16_t(); /*1*/ }; /*!< for stores */
    virtual void getDisplayTile(uint8_t*, uint16_t*, uint16_t*, uint16_t*) { /*2*/ }; /*!< on navigation minimap */
    virtual df::language_name* getName() { return 0; /*3*/ };
    virtual void write_file(df::file_compressorst*) { /*4*/ };
    virtual void read_file(df::file_compressorst*, int32_t) { /*5*/ };
    virtual ~abstract_building() { /*6*/ };
  protected:
    virtual int32_t anon_vmethod_7() { return int32_t(); /*7*/ };
    virtual bool anon_vmethod_8() { return bool(); /*8*/ };
    virtual bool anon_vmethod_9() { return bool(); /*9*/ };
    virtual int32_t anon_vmethod_10() { return int32_t(); /*10*/ };
    virtual df::abstract_building_unk* anon_vmethod_11() { return 0; /*11*/ };
  protected:
    abstract_building(virtual_identity *_id = &abstract_building::_identity);
    friend void *df::allocator_fn<abstract_building>(void*,const void*);
  };
}
#endif
