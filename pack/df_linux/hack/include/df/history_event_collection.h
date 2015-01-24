/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_HISTORY_EVENT_COLLECTION_H
#define DF_HISTORY_EVENT_COLLECTION_H
#ifndef DF_HISTORY_EVENT_COLLECTION_TYPE_H
#include "history_event_collection_type.h"
#endif
namespace df {
  struct file_compressorst;
  struct DFHACK_EXPORT history_event_collection : virtual_class {
    std::vector<int32_t > events;
    std::vector<int32_t > collections;
    int32_t start_year;
    int32_t end_year;
    int32_t start_seconds;
    int32_t end_seconds;
    BitArray<int> flags;
    int32_t id;
    static virtual_identity _identity;
    typedef history_event_collection* key_pointer_type;
    typedef int32_t key_field_type;
    static int binsearch_index(const std::vector<history_event_collection*> &vec, key_field_type key, bool exact = true);
    static int binsearch_index(const std::vector<history_event_collection*> &vec, key_pointer_type key, bool exact = true);
    static std::vector<history_event_collection*> &get_vector();
    static history_event_collection *find(key_field_type id);
  public:
    virtual df::history_event_collection_type getType() { return df::history_event_collection_type(); /*0*/ };
    virtual void generate_xml(void*, void*) { /*1*/ };
    virtual void write_file(df::file_compressorst*) { /*2*/ };
    virtual void read_file(df::file_compressorst*, int32_t) { /*3*/ };
    virtual void categorize() { /*4*/ };
    virtual void uncategorize() { /*5*/ };
    virtual void getName(std::string*) { /*6*/ };
    virtual void getRegionCoords(int16_t*, int16_t*) { /*7*/ };
    virtual int32_t getParent() { return int32_t(); /*8*/ };
  protected:
    virtual int32_t anon_vmethod_9() { return int32_t(); /*9*/ };
  public:
    virtual int32_t isBetweenEntities(int32_t, int32_t) { return int32_t(); /*10*/ };
    virtual void updateEndTime() { /*11*/ };
    virtual ~history_event_collection() { /*12*/ };
  protected:
    history_event_collection(virtual_identity *_id = &history_event_collection::_identity);
    friend void *df::allocator_fn<history_event_collection>(void*,const void*);
  };
}
#endif
