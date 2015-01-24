/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_HISTORY_EVENT_H
#define DF_HISTORY_EVENT_H
#ifndef DF_HISTORY_EVENT_TYPE_H
#include "history_event_type.h"
#endif
namespace df {
  struct art_image;
  struct file_compressorst;
  struct history_event_context;
  struct DFHACK_EXPORT history_event : virtual_class {
    int32_t year;
    int32_t seconds;
    BitArray<int> flags;
    int32_t id;
    static virtual_identity _identity;
    typedef history_event* key_pointer_type;
    typedef int32_t key_field_type;
    static int binsearch_index(const std::vector<history_event*> &vec, key_field_type key, bool exact = true);
    static int binsearch_index(const std::vector<history_event*> &vec, key_pointer_type key, bool exact = true);
    static std::vector<history_event*> &get_vector();
    static history_event *find(key_field_type id);
  public:
    virtual df::history_event_type getType() { return df::history_event_type(); /*0*/ };
    virtual int32_t getWarStatus(int32_t, int32_t) { return int32_t(); /*1*/ };
    virtual int32_t getAngerModifier(int32_t, int32_t) { return int32_t(); /*2*/ };
    virtual int32_t getHappinessModifier(int32_t, int32_t) { return int32_t(); /*3*/ };
    virtual bool madeFirstContact(int32_t, int32_t, int32_t) { return bool(); /*4*/ };
    virtual int32_t getKilledHistfigID(int32_t) { return int32_t(); /*5*/ };
    virtual bool wasHistfigKilled(int32_t) { return bool(); /*6*/ };
    virtual bool wasHistfigRevived(int32_t) { return bool(); /*7*/ };
  protected:
    virtual void anon_vmethod_8(int32_t) { /*8*/ };
    virtual void anon_vmethod_9(int32_t) { /*9*/ };
  public:
    virtual void getRelatedHistfigIDs(std::vector<int32_t >*) { /*10*/ };
    virtual void getRelatedSiteIDs(std::vector<int32_t >*) { /*11*/ };
    virtual void getRelatedSiteStructureIDs(std::vector<int32_t >*, std::vector<int32_t >*) { /*12*/ };
    virtual void getRelatedArtifactIDs(std::vector<int32_t >*) { /*13*/ };
    virtual void getRelatedRegionIDs(std::vector<int32_t >*) { /*14*/ };
    virtual void getRelatedLayerIDs(std::vector<int32_t >*) { /*15*/ };
    virtual void getRelatedEntityIDs(std::vector<int32_t >*) { /*16*/ };
    virtual bool isRelatedToHistfigID(int32_t) { return bool(); /*17*/ };
    virtual bool isRelatedToSiteID(int32_t) { return bool(); /*18*/ };
    virtual bool isRelatedToSiteStructure(int32_t, int32_t) { return bool(); /*19*/ };
    virtual bool isRelatedToArtifactID(int32_t) { return bool(); /*20*/ };
    virtual bool isRelatedToRegionID(int32_t) { return bool(); /*21*/ };
    virtual bool isRelatedToLayerID(int32_t) { return bool(); /*22*/ };
  protected:
    virtual bool anon_vmethod_23(int32_t) { return bool(); /*23*/ };
  public:
    virtual bool isRelatedToEntityID(int32_t) { return bool(); /*24*/ };
  protected:
    virtual bool anon_vmethod_25(int32_t) { return bool(); /*25*/ };
  public:
    virtual void getSentence(std::string*, df::history_event_context*, int32_t, int32_t) { /*26*/ };
    virtual void getPhrase(std::string*, df::history_event_context*, int32_t, int32_t) { /*27*/ };
    virtual void populateArtImage(df::art_image*) { /*28*/ };
  protected:
    virtual void anon_vmethod_29() { /*29*/ };
    virtual void anon_vmethod_30() { /*30*/ };
    virtual bool anon_vmethod_31(int32_t) { return bool(); /*31*/ };
    virtual void anon_vmethod_32() { /*32*/ };
    virtual void anon_vmethod_33() { /*33*/ };
  public:
    virtual void generate_xml(void*, void*) { /*34*/ };
    virtual void write_file(df::file_compressorst*) { /*35*/ };
    virtual void read_file(df::file_compressorst*, int32_t) { /*36*/ };
  protected:
    virtual void anon_vmethod_37() { /*37*/ };
  public:
    virtual ~history_event() { /*38*/ };
  protected:
    history_event(virtual_identity *_id = &history_event::_identity);
    friend void *df::allocator_fn<history_event>(void*,const void*);
  };
}
#endif
