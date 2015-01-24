/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_MATERIAL_COMMON_H
#define DF_MATERIAL_COMMON_H
#ifndef DF_ITEM_TYPE_H
#include "item_type.h"
#endif
#ifndef DF_MATERIAL_FLAGS_H
#include "material_flags.h"
#endif
#ifndef DF_MATERIAL_VEC_REF_H
#include "material_vec_ref.h"
#endif
namespace df {
  struct syndrome;
  struct DFHACK_EXPORT material_common {
    std::string id;
    std::string gem_name1;
    std::string gem_name2;
    std::string stone_name;
    struct DFHACK_EXPORT T_heat {
      uint16_t spec_heat;
      uint16_t heatdam_point;
      uint16_t colddam_point;
      uint16_t ignite_point;
      uint16_t melting_point;
      uint16_t boiling_point;
      uint16_t mat_fixed_temp;
      static struct_identity _identity;
    public:
      T_heat();
    };
    T_heat heat;
    int32_t solid_density;
    int32_t liquid_density;
    int32_t molar_mass;
    int32_t state_color[6];
    std::string state_name[6];
    std::string state_adj[6];
    struct DFHACK_EXPORT T_strength {
      int32_t absorption;
      int32_t yield[6];
      int32_t fracture[6];
      int32_t strain_at_yield[6];
      int32_t max_edge;
      static struct_identity _identity;
    public:
      T_strength();
    };
    T_strength strength;
    int32_t material_value;
    BitArray<df::material_flags> flags;
    df::item_type extract_storage;
    df::item_type butcher_special_type;
    int16_t butcher_special_subtype;
    std::string meat_name[3];
    std::string block_name[2];
    struct DFHACK_EXPORT T_reaction_product {
      std::vector<std::string* > id;
      std::vector<int16_t > item_type;
      std::vector<int16_t > item_subtype;
      df::material_vec_ref material;
      std::vector<std::string* > str[5];
      static struct_identity _identity;
    public:
      T_reaction_product();
    };
    T_reaction_product reaction_product;
    struct DFHACK_EXPORT T_hardens_with_water {
      int16_t mat_type;
      int32_t mat_index;
      std::string str[3];
      static struct_identity _identity;
    public:
      T_hardens_with_water();
    };
    T_hardens_with_water hardens_with_water;
    std::vector<std::string* > reaction_class;
    uint8_t tile;
    int16_t basic_color[2];
    int16_t build_color[3];
    int16_t tile_color[3];
    uint8_t item_symbol;
    int16_t powder_dye;
    int16_t temp_diet_info;
    std::vector<df::syndrome* > syndrome;
    int32_t soap_level;
    std::vector<void* > unk_41c; /*!< v0.40.1 */
    static struct_identity _identity;
  public:
    material_common();
  };
}
#endif
