/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_SYNDROME_H
#define DF_SYNDROME_H
#ifndef DF_SYNDROME_FLAGS_H
#include "syndrome_flags.h"
#endif
namespace df {
  struct creature_interaction_effect;
  struct DFHACK_EXPORT syndrome {
    std::string syn_name;
    std::vector<df::creature_interaction_effect* > ce;
    std::vector<std::string* > syn_affected_class;
    std::vector<std::string* > syn_affected_creature;
    std::vector<std::string* > syn_affected_caste;
    std::vector<std::string* > syn_immune_class;
    std::vector<std::string* > syn_immune_creature;
    std::vector<std::string* > syn_immune_caste;
    std::vector<std::string* > syn_class; /*!< v0.34.01 */
    df::syndrome_flags flags;
    int32_t id;
    static struct_identity _identity;
    static std::vector<syndrome*> &get_vector();
    static syndrome *find(int id);
  public:
    syndrome();
  };
}
#endif
