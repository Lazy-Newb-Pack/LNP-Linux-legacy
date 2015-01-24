/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_ENTITY_TISSUE_STYLE_H
#define DF_ENTITY_TISSUE_STYLE_H
namespace df {
  struct DFHACK_EXPORT entity_tissue_style {
    std::string name;
    std::vector<int16_t > preferred_shapings;
    std::vector<int32_t > anon_1; /*!< maybe probability? */
    int32_t maintain_length_min;
    int32_t maintain_length_max;
    int32_t id;
    static struct_identity _identity;
    typedef entity_tissue_style* key_pointer_type;
    typedef int32_t key_field_type;
    static int binsearch_index(const std::vector<entity_tissue_style*> &vec, key_field_type key, bool exact = true);
    static int binsearch_index(const std::vector<entity_tissue_style*> &vec, key_pointer_type key, bool exact = true);
  public:
    entity_tissue_style();
  };
}
#endif
