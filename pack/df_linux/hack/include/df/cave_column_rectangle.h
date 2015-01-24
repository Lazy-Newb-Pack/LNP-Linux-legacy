/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_CAVE_COLUMN_RECTANGLE_H
#define DF_CAVE_COLUMN_RECTANGLE_H
namespace df {
  struct file_compressorst;
  struct DFHACK_EXPORT cave_column_rectangle : virtual_class {
    int32_t anon_1;
    int16_t anon_2;
    int16_t anon_3;
    int16_t anon_4;
    int16_t anon_5;
    int16_t anon_6;
    std::vector<int16_t > anon_7;
    std::vector<int16_t > anon_8;
    std::vector<int16_t > anon_9;
    int32_t anon_10;
    static virtual_identity _identity;
  public:
    virtual void write_file(df::file_compressorst*) { /*0*/ };
    virtual void read_file(df::file_compressorst*, int32_t) { /*1*/ };
  protected:
    cave_column_rectangle(virtual_identity *_id = &cave_column_rectangle::_identity);
    friend void *df::allocator_fn<cave_column_rectangle>(void*,const void*);
  };
}
#endif
