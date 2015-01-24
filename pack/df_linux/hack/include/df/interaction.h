/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_INTERACTION_H
#define DF_INTERACTION_H
namespace df {
  struct interaction_effect;
  struct interaction_source;
  struct interaction_target;
  struct DFHACK_EXPORT interaction {
    std::string name;
    int32_t id;
    std::vector<std::string* > str;
    BitArray<int> flags;
    std::vector<df::interaction_source* > sources;
    std::vector<df::interaction_target* > targets;
    std::vector<df::interaction_effect* > effects;
    int32_t source_hfid;
    static struct_identity _identity;
    typedef interaction* key_pointer_type;
    typedef int32_t key_field_type;
    static int binsearch_index(const std::vector<interaction*> &vec, key_field_type key, bool exact = true);
    static int binsearch_index(const std::vector<interaction*> &vec, key_pointer_type key, bool exact = true);
    static std::vector<interaction*> &get_vector();
    static interaction *find(key_field_type id);
  public:
    interaction();
  };
}
#endif
