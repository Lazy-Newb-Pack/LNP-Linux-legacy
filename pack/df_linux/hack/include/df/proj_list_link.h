/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_PROJ_LIST_LINK_H
#define DF_PROJ_LIST_LINK_H
namespace df {
  struct projectile;
  struct DFHACK_EXPORT proj_list_link {
    df::projectile* item;
    df::proj_list_link* prev;
    df::proj_list_link* next;
    static struct_identity _identity;
  public:
    proj_list_link();
  };
}
#endif
