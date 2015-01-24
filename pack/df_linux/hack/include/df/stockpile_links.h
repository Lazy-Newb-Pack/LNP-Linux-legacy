/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_STOCKPILE_LINKS_H
#define DF_STOCKPILE_LINKS_H
namespace df {
  struct building;
  struct DFHACK_EXPORT stockpile_links {
    std::vector<df::building* > give_to_pile;
    std::vector<df::building* > take_from_pile;
    std::vector<df::building* > give_to_workshop;
    std::vector<df::building* > take_from_workshop;
    static struct_identity _identity;
  public:
    stockpile_links();
  };
}
#endif
