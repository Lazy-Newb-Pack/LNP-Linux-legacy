/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_HISTORY_EVENT_COLLECTION_WARST_H
#define DF_HISTORY_EVENT_COLLECTION_WARST_H
#ifndef DF_ETHIC_TYPE_H
#include "ethic_type.h"
#endif
#ifndef DF_HISTORY_EVENT_COLLECTION_H
#include "history_event_collection.h"
#endif
#ifndef DF_LANGUAGE_NAME_H
#include "language_name.h"
#endif
namespace df {
  struct DFHACK_EXPORT history_event_collection_warst : history_event_collection {
    df::language_name name;
    std::vector<int32_t > attacker_civ;
    std::vector<int32_t > defender_civ;
    struct DFHACK_EXPORT T_unk {
      std::vector<int16_t > anon_1;
      std::vector<int32_t > anon_2;
      std::vector<int32_t > anon_3;
      std::vector<int32_t > anon_4;
      std::vector<int32_t > anon_5;
      int32_t anon_6;
      std::vector<int16_t > ethics_unk1;
      std::vector<df::ethic_type > disputed_ethics;
      std::vector<int32_t > ethics_unk3;
      std::vector<int32_t > dispute_severities;
      int32_t worst_severity;
      std::vector<int16_t > anon_7;
      std::vector<int32_t > anon_8;
      std::vector<int32_t > anon_9;
      int32_t anon_10;
      static struct_identity _identity;
    public:
      T_unk();
    };
    T_unk unk;
    static virtual_identity _identity;
  protected:
    history_event_collection_warst(virtual_identity *_id = &history_event_collection_warst::_identity);
    friend void *df::allocator_fn<history_event_collection_warst>(void*,const void*);
  };
}
#endif
