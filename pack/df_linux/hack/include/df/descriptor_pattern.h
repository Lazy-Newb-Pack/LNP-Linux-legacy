/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_DESCRIPTOR_PATTERN_H
#define DF_DESCRIPTOR_PATTERN_H
#ifndef DF_PATTERN_TYPE_H
#include "pattern_type.h"
#endif
namespace df {
  struct DFHACK_EXPORT descriptor_pattern {
    std::string id;
    std::vector<int16_t > colors;
    df::pattern_type pattern;
    std::vector<void* > cp_color;
    static struct_identity _identity;
    static std::vector<descriptor_pattern*> &get_vector();
    static descriptor_pattern *find(int id);
  public:
    descriptor_pattern();
  };
}
#endif
