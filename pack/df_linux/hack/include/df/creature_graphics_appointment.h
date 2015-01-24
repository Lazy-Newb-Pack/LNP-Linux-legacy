/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_CREATURE_GRAPHICS_APPOINTMENT_H
#define DF_CREATURE_GRAPHICS_APPOINTMENT_H
namespace df {
  struct DFHACK_EXPORT creature_graphics_appointment {
    std::string token;
    int32_t texpos[6];
    int32_t texpos_gs[6];
    bool add_color[6];
    static struct_identity _identity;
    typedef creature_graphics_appointment* key_pointer_type;
    typedef std::string key_field_type;
    static int binsearch_index(const std::vector<creature_graphics_appointment*> &vec, key_field_type key, bool exact = true);
    static int binsearch_index(const std::vector<creature_graphics_appointment*> &vec, key_pointer_type key, bool exact = true);
  public:
    creature_graphics_appointment();
  };
}
#endif
