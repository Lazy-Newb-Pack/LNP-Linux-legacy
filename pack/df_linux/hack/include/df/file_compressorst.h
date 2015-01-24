/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_FILE_COMPRESSORST_H
#define DF_FILE_COMPRESSORST_H
namespace df {
  struct DFHACK_EXPORT file_compressorst {
    bool compressed;
    std::fstream f;
    uint8_t* in_buffer;
    int32_t in_buffersize;
    int32_t in_buffer_amount_loaded;
    int32_t in_buffer_position;
    uint8_t* out_buffer;
    int32_t out_buffersize;
    int32_t out_buffer_amount_written;
    static struct_identity _identity;
#include "custom/file_compressorst.methods.inc"
  public:
    file_compressorst();
  };
}
#endif
