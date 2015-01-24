/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_INORGANIC_RAW_H
#define DF_INORGANIC_RAW_H
#ifndef DF_ENVIRONMENT_TYPE_H
#include "environment_type.h"
#endif
#ifndef DF_INCLUSION_TYPE_H
#include "inclusion_type.h"
#endif
#ifndef DF_INORGANIC_FLAGS_H
#include "inorganic_flags.h"
#endif
#ifndef DF_MATERIAL_H
#include "material.h"
#endif
namespace df {
  struct DFHACK_EXPORT inorganic_raw {
    std::string id;
    std::vector<std::string* > str; /*!< v0.34.01 */
    BitArray<df::inorganic_flags> flags;
    int32_t source_hfid;
    struct DFHACK_EXPORT T_metal_ore {
      std::vector<std::string* > str; /*!< only during parsing */
      std::vector<int16_t > mat_index;
      std::vector<int16_t > probability;
      static struct_identity _identity;
    public:
      T_metal_ore();
    };
    T_metal_ore metal_ore;
    struct DFHACK_EXPORT T_thread_metal {
      std::vector<std::string* > str; /*!< only during parsing */
      std::vector<int16_t > mat_index;
      std::vector<int16_t > probability;
      static struct_identity _identity;
    public:
      T_thread_metal();
    };
    T_thread_metal thread_metal;
    std::vector<int32_t > economic_uses;
    struct DFHACK_EXPORT T_environment_spec {
      std::vector<std::string* > str; /*!< only during parsing */
      std::vector<int16_t > mat_index;
      std::vector<df::inclusion_type > inclusion_type;
      std::vector<int8_t > probability;
      static struct_identity _identity;
    public:
      T_environment_spec();
    };
    T_environment_spec environment_spec;
    struct DFHACK_EXPORT T_environment {
      std::vector<df::environment_type > location;
      std::vector<df::inclusion_type > type;
      std::vector<int8_t > probability;
      static struct_identity _identity;
    public:
      T_environment();
    };
    T_environment environment;
    int32_t unk2;
    df::material material;
    static struct_identity _identity;
    static std::vector<inorganic_raw*> &get_vector();
    static inorganic_raw *find(int id);
#include "custom/inorganic_raw.methods.inc"
  public:
    inorganic_raw();
  };
}
#endif
