/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_HISTFIG_RELATIONSHIP_TYPE_H
#define DF_HISTFIG_RELATIONSHIP_TYPE_H
namespace df {
  namespace enums {
    namespace histfig_relationship_type {
      enum histfig_relationship_type : int16_t {
        Mother,
        Father,
        Parent,
        Husband,
        Wife,
        Spouse,
        SonEldest,
        SonEldest2,
        SonEldest3,
        SonEldest4,
        SonEldest5,
        SonEldest6,
        SonEldest7,
        SonEldest8,
        SonEldest9,
        SonEldest10,
        Son,
        SonYoungest,
        SonOnly,
        DaughterEldest,
        DaughterEldest2,
        DaughterEldest3,
        DaughterEldest4,
        DaughterEldest5,
        DaughterEldest6,
        DaughterEldest7,
        DaughterEldest8,
        DaughterEldest9,
        DaughterEldest10,
        Daughter,
        DaughterOnly,
        DaughterYoungest,
        ChildEldest,
        ChildEldest2,
        ChildEldest3,
        ChildEldest4,
        ChildEldest5,
        ChildEldest6,
        ChildEldest7,
        ChildEldest8,
        ChildEldest9,
        ChildEldest10,
        Child,
        ChildYoungest,
        ChildOnly,
        PaternalGrandmother,
        PaternalGrandfather,
        MaternalGrandmother,
        MaternalGrandfather,
        Grandmother,
        Grandfather,
        Grandparent,
        OlderBrother,
        OlderSister,
        OlderSibling,
        YoungerBrother,
        YoungerSister,
        YoungerSibling,
        Cousin,
        Aunt,
        Uncle,
        Niece,
        Nephew,
        Sibling,
        Grandchild
      };
    }
  }
  using enums::histfig_relationship_type::histfig_relationship_type;
  template<> struct DFHACK_EXPORT identity_traits<histfig_relationship_type> {
    static enum_identity identity;
    static enum_identity *get() { return &identity; }
  };
  template<> struct DFHACK_EXPORT enum_traits<histfig_relationship_type> {
    typedef int16_t base_type;
    typedef histfig_relationship_type enum_type;
    static const base_type first_item_value = 0;
    static const base_type last_item_value = 64;
    static inline bool is_valid(enum_type value) {
      return (base_type(value) >= first_item_value && base_type(value) <= last_item_value);
    }
    static const enum_type first_item = (enum_type)first_item_value;
    static const enum_type last_item = (enum_type)last_item_value;
    static const char *const key_table[65];
  };
}
#endif
