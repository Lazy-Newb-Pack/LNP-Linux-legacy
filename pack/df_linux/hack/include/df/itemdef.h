/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_ITEMDEF_H
#define DF_ITEMDEF_H
namespace df {
  struct DFHACK_EXPORT itemdef : virtual_class {
    std::string id;
    int16_t subtype;
    BitArray<int> base_flags; /*!< v0.34.08; [0] = generated */
    int32_t source_hfid; /*!< v0.40.01 */
    std::vector<std::string* > raw_strings;
    static virtual_identity _identity;
  protected:
    virtual void anon_vmethod_0() { /*0*/ };
  public:
    virtual void parseRaws(void*, void*, void*, void*, void*) { /*1*/ };
    virtual void categorize() { /*2*/ }; /*!< add to world.raws.itemdefs.whatever */
    virtual void finalize() { /*3*/ }; /*!< calculate stuff like base value */
  protected:
    virtual void anon_vmethod_4() { /*4*/ };
  public:
    virtual ~itemdef() { /*5*/ };
  protected:
    itemdef(virtual_identity *_id = &itemdef::_identity);
    friend void *df::allocator_fn<itemdef>(void*,const void*);
  };
}
#endif
