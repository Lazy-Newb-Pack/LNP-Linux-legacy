/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_ITEM_FLAGS_H
#define DF_ITEM_FLAGS_H
namespace df {
  union item_flags {
    uint32_t whole;
    struct {
      uint32_t on_ground : 1; /*!< Item on ground */
      uint32_t in_job : 1; /*!< Item currently being used in a job */
      uint32_t hostile : 1; /*!< Item owned by hostile */
      uint32_t in_inventory : 1; /*!< Item in a creature, workshop or container inventory */
      uint32_t removed : 1; /*!< completely invisible and with no position */
      uint32_t in_building : 1; /*!< Part of a building (including mechanisms, bodies in coffins) */
      uint32_t container : 1; /*!< Set on anything that contains or contained items? */
      uint32_t dead_dwarf : 1; /*!< Dwarfs dead body or body part */
      uint32_t rotten : 1; /*!< Rotten food */
      uint32_t spider_web : 1; /*!< Thread in spider web */
      uint32_t construction : 1; /*!< Material used in construction */
      uint32_t encased : 1; /*!< Item encased in ice or obsidian */
      uint32_t unk12 : 1; /*!< unknown, unseen */
      uint32_t murder : 1; /*!< Implies murder - used in fell moods */
      uint32_t foreign : 1; /*!< Item is imported */
      uint32_t trader : 1; /*!< Item ownwed by trader */
      uint32_t owned : 1; /*!< Item is owned by a dwarf */
      uint32_t garbage_collect : 1; /*!< Marked for deallocation by DF it seems */
      uint32_t artifact : 1; /*!< Artifact */
      uint32_t forbid : 1; /*!< Forbidden item */
      uint32_t already_uncategorized : 1; /*!< unknown, unseen */
      uint32_t dump : 1; /*!< Designated for dumping */
      uint32_t on_fire : 1; /*!< Indicates if item is on fire, Will Set Item On Fire if Set! */
      uint32_t melt : 1; /*!< Designated for melting, if applicable */
      uint32_t hidden : 1; /*!< Hidden item */
      uint32_t in_chest : 1; /*!< Stored in chest/part of well? */
      uint32_t use_recorded : 1; /*!< transient in unit.used_items update */
      uint32_t artifact_mood : 1; /*!< created by mood/named existing item */
      uint32_t temps_computed : 1; /*!< melting/boiling/ignite/etc. points */
      uint32_t weight_computed : 1;
      uint32_t unk30 : 1; /*!< unknown, unseen */
      uint32_t from_worldgen : 1; /*!< created by underground critters? */
    } bits;
    enum Shift {
      shift_on_ground = 0,
      shift_in_job = 1,
      shift_hostile = 2,
      shift_in_inventory = 3,
      shift_removed = 4,
      shift_in_building = 5,
      shift_container = 6,
      shift_dead_dwarf = 7,
      shift_rotten = 8,
      shift_spider_web = 9,
      shift_construction = 10,
      shift_encased = 11,
      shift_unk12 = 12,
      shift_murder = 13,
      shift_foreign = 14,
      shift_trader = 15,
      shift_owned = 16,
      shift_garbage_collect = 17,
      shift_artifact = 18,
      shift_forbid = 19,
      shift_already_uncategorized = 20,
      shift_dump = 21,
      shift_on_fire = 22,
      shift_melt = 23,
      shift_hidden = 24,
      shift_in_chest = 25,
      shift_use_recorded = 26,
      shift_artifact_mood = 27,
      shift_temps_computed = 28,
      shift_weight_computed = 29,
      shift_unk30 = 30,
      shift_from_worldgen = 31
    };
    enum Mask : uint32_t {
      mask_on_ground = 0x1U,
      mask_in_job = 0x2U,
      mask_hostile = 0x4U,
      mask_in_inventory = 0x8U,
      mask_removed = 0x10U,
      mask_in_building = 0x20U,
      mask_container = 0x40U,
      mask_dead_dwarf = 0x80U,
      mask_rotten = 0x100U,
      mask_spider_web = 0x200U,
      mask_construction = 0x400U,
      mask_encased = 0x800U,
      mask_unk12 = 0x1000U,
      mask_murder = 0x2000U,
      mask_foreign = 0x4000U,
      mask_trader = 0x8000U,
      mask_owned = 0x10000U,
      mask_garbage_collect = 0x20000U,
      mask_artifact = 0x40000U,
      mask_forbid = 0x80000U,
      mask_already_uncategorized = 0x100000U,
      mask_dump = 0x200000U,
      mask_on_fire = 0x400000U,
      mask_melt = 0x800000U,
      mask_hidden = 0x1000000U,
      mask_in_chest = 0x2000000U,
      mask_use_recorded = 0x4000000U,
      mask_artifact_mood = 0x8000000U,
      mask_temps_computed = 0x10000000U,
      mask_weight_computed = 0x20000000U,
      mask_unk30 = 0x40000000U,
      mask_from_worldgen = 0x80000000U
    };
    item_flags(uint32_t whole_ = 0) : whole(whole_) {};
  };
  template<> struct DFHACK_EXPORT bitfield_traits<item_flags> {
    typedef uint32_t base_type;
    typedef item_flags bitfield_type;
    static const int bit_count = sizeof(base_type)*8;
    static const bitfield_item_info bits[bit_count];
  };
  template<> struct DFHACK_EXPORT identity_traits<item_flags> {
    static bitfield_identity identity;
    static bitfield_identity *get() { return &identity; }
  };
}
#endif
