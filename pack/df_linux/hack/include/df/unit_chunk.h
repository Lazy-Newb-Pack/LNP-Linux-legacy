/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_UNIT_CHUNK_H
#define DF_UNIT_CHUNK_H
namespace df {
  struct item;
  struct unit;
  struct DFHACK_EXPORT unit_chunk {
    int32_t id; /*!< unit_*.dat */
    struct DFHACK_EXPORT T_units {
      std::vector<df::item* > items;
      df::unit* unit;
      static struct_identity _identity;
    public:
      T_units();
    };
    T_units units[100];
    static struct_identity _identity;
    typedef unit_chunk* key_pointer_type;
    typedef int32_t key_field_type;
    static int binsearch_index(const std::vector<unit_chunk*> &vec, key_field_type key, bool exact = true);
    static int binsearch_index(const std::vector<unit_chunk*> &vec, key_pointer_type key, bool exact = true);
    static std::vector<unit_chunk*> &get_vector();
    static unit_chunk *find(key_field_type id);
  public:
    unit_chunk();
  };
}
#endif
