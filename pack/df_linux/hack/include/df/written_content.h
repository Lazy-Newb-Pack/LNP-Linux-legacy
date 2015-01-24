/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_WRITTEN_CONTENT_H
#define DF_WRITTEN_CONTENT_H
#ifndef DF_WRITTEN_CONTENT_STYLE_H
#include "written_content_style.h"
#endif
#ifndef DF_WRITTEN_CONTENT_TYPE_H
#include "written_content_type.h"
#endif
namespace df {
  struct general_ref;
  struct DFHACK_EXPORT written_content {
    int32_t id;
    int32_t page_start;
    int32_t page_end;
    std::vector<df::general_ref* > refs; /*!< interactions learned */
    std::vector<int32_t > ref_aux; /*!< if nonzero, corresponding ref is ignored */
    int32_t anon_1;
    int32_t anon_2;
    df::written_content_type type;
    std::vector<df::written_content_style > styles;
    std::vector<int32_t > style_strength; /*!< 0 = maximum, 1 = significant, 2 = partial */
    int32_t author;
    int32_t anon_3;
    static struct_identity _identity;
    typedef written_content* key_pointer_type;
    typedef int32_t key_field_type;
    static int binsearch_index(const std::vector<written_content*> &vec, key_field_type key, bool exact = true);
    static int binsearch_index(const std::vector<written_content*> &vec, key_pointer_type key, bool exact = true);
    static std::vector<written_content*> &get_vector();
    static written_content *find(key_field_type id);
  public:
    written_content();
  };
}
#endif
