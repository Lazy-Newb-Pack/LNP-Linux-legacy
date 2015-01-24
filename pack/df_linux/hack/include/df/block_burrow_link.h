/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_BLOCK_BURROW_LINK_H
#define DF_BLOCK_BURROW_LINK_H
namespace df {
  struct block_burrow;
  struct DFHACK_EXPORT block_burrow_link {
    df::block_burrow* item;
    df::block_burrow_link* prev;
    df::block_burrow_link* next;
    static struct_identity _identity;
  public:
    block_burrow_link();
  };
}
#endif
