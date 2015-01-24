/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_JOB_SKILL_H
#define DF_JOB_SKILL_H
#ifndef DF_JOB_SKILL_CLASS_H
#include "job_skill_class.h"
#endif
#ifndef DF_PROFESSION_H
#include "profession.h"
#endif
#ifndef DF_UNIT_LABOR_H
#include "unit_labor.h"
#endif
namespace df {
  namespace enums {
    namespace job_skill {
      enum job_skill : int16_t {
        NONE = -1,
        MINING,
        WOODCUTTING,
        CARPENTRY,
        DETAILSTONE,
        MASONRY,
        ANIMALTRAIN,
        ANIMALCARE,
        DISSECT_FISH,
        DISSECT_VERMIN,
        PROCESSFISH,
        BUTCHER,
        TRAPPING,
        TANNER,
        WEAVING,
        BREWING,
        ALCHEMY,
        CLOTHESMAKING,
        MILLING,
        PROCESSPLANTS,
        CHEESEMAKING,
        MILK,
        COOK,
        PLANT,
        HERBALISM,
        FISH,
        SMELT,
        EXTRACT_STRAND,
        FORGE_WEAPON,
        FORGE_ARMOR,
        FORGE_FURNITURE,
        CUTGEM,
        ENCRUSTGEM,
        WOODCRAFT,
        STONECRAFT,
        METALCRAFT,
        GLASSMAKER,
        LEATHERWORK,
        BONECARVE,
        AXE,
        SWORD,
        DAGGER,
        MACE,
        HAMMER,
        SPEAR,
        CROSSBOW,
        SHIELD,
        ARMOR,
        SIEGECRAFT,
        SIEGEOPERATE,
        BOWYER,
        PIKE,
        WHIP,
        BOW,
        BLOWGUN,
        THROW,
        MECHANICS,
        MAGIC_NATURE,
        SNEAK,
        DESIGNBUILDING,
        DRESS_WOUNDS,
        DIAGNOSE,
        SURGERY,
        SET_BONE,
        SUTURE,
        CRUTCH_WALK,
        WOOD_BURNING,
        LYE_MAKING,
        SOAP_MAKING,
        POTASH_MAKING,
        DYER,
        OPERATE_PUMP,
        SWIMMING,
        PERSUASION,
        NEGOTIATION,
        JUDGING_INTENT,
        APPRAISAL,
        ORGANIZATION,
        RECORD_KEEPING,
        LYING,
        INTIMIDATION,
        CONVERSATION,
        COMEDY,
        FLATTERY,
        CONSOLE,
        PACIFY,
        TRACKING,
        KNOWLEDGE_ACQUISITION,
        CONCENTRATION,
        DISCIPLINE,
        SITUATIONAL_AWARENESS,
        WRITING,
        PROSE,
        POETRY,
        READING,
        SPEAKING,
        COORDINATION,
        BALANCE,
        LEADERSHIP,
        TEACHING,
        MELEE_COMBAT,
        RANGED_COMBAT,
        WRESTLING,
        BITE,
        GRASP_STRIKE,
        STANCE_STRIKE,
        DODGING,
        MISC_WEAPON,
        KNAPPING,
        MILITARY_TACTICS,
        SHEARING,
        SPINNING,
        POTTERY,
        GLAZING,
        PRESSING,
        BEEKEEPING,
        WAX_WORKING,
        CLIMBING,
        GELD
      };
    }
  }
  using enums::job_skill::job_skill;
  template<> struct DFHACK_EXPORT identity_traits<job_skill> {
    static enum_identity identity;
    static enum_identity *get() { return &identity; }
  };
  template<> struct DFHACK_EXPORT enum_traits<job_skill> {
    typedef int16_t base_type;
    typedef job_skill enum_type;
    static const base_type first_item_value = -1;
    static const base_type last_item_value = 117;
    static inline bool is_valid(enum_type value) {
      return (base_type(value) >= first_item_value && base_type(value) <= last_item_value);
    }
    static const enum_type first_item = (enum_type)first_item_value;
    static const enum_type last_item = (enum_type)last_item_value;
    static const char *const key_table[119];
    struct attr_entry_type {
      const char* caption;
      const char* caption_noun;
      df::profession profession;
      df::unit_labor labor;
      df::job_skill_class type;
      static struct_identity _identity;
    };
    static const attr_entry_type attr_table[119+1];
    static const attr_entry_type &attrs(enum_type value);
  };
}
#endif
