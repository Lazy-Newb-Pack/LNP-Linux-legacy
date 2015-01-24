/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_DIPSCRIPT_INFO_H
#define DF_DIPSCRIPT_INFO_H
namespace df {
  struct script_stepst;
  struct script_varst;
  struct DFHACK_EXPORT dipscript_info {
    int32_t id; /*!< assigned during Save */
    std::string script_file; /*!< data/dipscript/dwarf_liaison */
    std::vector<df::script_stepst* > script_steps;
    std::vector<df::script_varst* > script_vars;
    std::string code; /*!< DWARF_LIAISON etc */
    static struct_identity _identity;
  public:
    dipscript_info();
  };
}
#endif
