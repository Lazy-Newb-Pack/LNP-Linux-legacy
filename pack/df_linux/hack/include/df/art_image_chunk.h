/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_ART_IMAGE_CHUNK_H
#define DF_ART_IMAGE_CHUNK_H
namespace df {
  struct art_image;
  struct DFHACK_EXPORT art_image_chunk {
    int32_t id; /*!< art_image_*.dat */
    df::art_image* images[500];
    static struct_identity _identity;
    typedef art_image_chunk* key_pointer_type;
    typedef int32_t key_field_type;
    static int binsearch_index(const std::vector<art_image_chunk*> &vec, key_field_type key, bool exact = true);
    static int binsearch_index(const std::vector<art_image_chunk*> &vec, key_pointer_type key, bool exact = true);
    static std::vector<art_image_chunk*> &get_vector();
    static art_image_chunk *find(key_field_type id);
  public:
    art_image_chunk();
  };
}
#endif
