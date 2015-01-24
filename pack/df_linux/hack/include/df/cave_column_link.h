/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_CAVE_COLUMN_LINK_H
#define DF_CAVE_COLUMN_LINK_H
namespace df {
  struct cave_column;
  struct DFHACK_EXPORT cave_column_link {
    df::cave_column* item;
    df::cave_column_link* prev;
    df::cave_column_link* next;
    static struct_identity _identity;
  public:
    cave_column_link();
  };
}
#endif
