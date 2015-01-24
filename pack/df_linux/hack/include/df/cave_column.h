/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_CAVE_COLUMN_H
#define DF_CAVE_COLUMN_H
namespace df {
  struct file_compressorst;
  struct DFHACK_EXPORT cave_column : virtual_class {
    int16_t anon_1;
    int16_t anon_2;
    int16_t anon_3;
    int8_t anon_4;
    static virtual_identity _identity;
  public:
    virtual void write_file(df::file_compressorst*) { /*0*/ };
    virtual void read_file(df::file_compressorst*, int32_t) { /*1*/ };
  protected:
    cave_column(virtual_identity *_id = &cave_column::_identity);
    friend void *df::allocator_fn<cave_column>(void*,const void*);
  };
}
#endif
