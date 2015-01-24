/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_JOB_ITEM_FLAGS2_H
#define DF_JOB_ITEM_FLAGS2_H
namespace df {
  union job_item_flags2 {
    uint32_t whole;
    struct {
      uint32_t dye : 1; /*!< vtable[106] */
      uint32_t dyeable : 1; /*!< vtable[159] */
      uint32_t dyed : 1; /*!< vtable[161] */
      uint32_t sewn_imageless : 1; /*!< vtable[162] */
      uint32_t glass_making : 1; /*!< vtable[26] */
      uint32_t screw : 1; /*!< vtable[46] */
      uint32_t building_material : 1; /*!< vtable[47] */
      uint32_t fire_safe : 1; /*!< vtable[48],1 */
      uint32_t magma_safe : 1; /*!< vtable[48],2 */
      uint32_t deep_material : 1; /*!< check for inorganic material flag DEEP */
      uint32_t melt_designated : 1; /*!< check for item flag "melt" */
      uint32_t non_economic : 1; /*!< (call 0076be60) */
      uint32_t allow_melt_dump : 1; /*!< item can be designated for melting or dumping */
      uint32_t allow_artifact : 1; /*!< item can be artifact */
      uint32_t plant : 1; /*!< check if material is a PLANT_MAT */
      uint32_t silk : 1; /*!< check for material flag SILK */
      uint32_t leather : 1; /*!< check for material flag LEATHER */
      uint32_t bone : 1; /*!< check for material flag BONE */
      uint32_t shell : 1; /*!< check for material flag SHELL */
      uint32_t totemable : 1; /*!< vtable[158] */
      uint32_t horn : 1; /*!< check for material flag HORN */
      uint32_t pearl : 1; /*!< check for material flag PEARL */
      uint32_t plaster_containing : 1; /*!< vtable[17] */
      uint32_t anon_1 : 1;
      uint32_t soap : 1; /*!< check for material flag SOAP */
      uint32_t body_part : 1; /*!< itemtype CORPSE or CORPSEPIECE */
      uint32_t ivory_tooth : 1; /*!< check for material flag TOOTH */
      uint32_t lye_milk_free : 1; /*!< (call 00759110) */
      uint32_t blunt : 1; /*!< vtable[157] */
      uint32_t unengraved : 1; /*!< vtable[214] */
      uint32_t hair_wool : 1; /*!< ??? (pretty sure this is [ANY_STRAND_TISSUE]) */
      uint32_t yarn : 1; /*!< check for material flag YARN */
    } bits;
    enum Shift {
      shift_dye = 0,
      shift_dyeable = 1,
      shift_dyed = 2,
      shift_sewn_imageless = 3,
      shift_glass_making = 4,
      shift_screw = 5,
      shift_building_material = 6,
      shift_fire_safe = 7,
      shift_magma_safe = 8,
      shift_deep_material = 9,
      shift_melt_designated = 10,
      shift_non_economic = 11,
      shift_allow_melt_dump = 12,
      shift_allow_artifact = 13,
      shift_plant = 14,
      shift_silk = 15,
      shift_leather = 16,
      shift_bone = 17,
      shift_shell = 18,
      shift_totemable = 19,
      shift_horn = 20,
      shift_pearl = 21,
      shift_plaster_containing = 22,
      shift_anon_1 = 23,
      shift_soap = 24,
      shift_body_part = 25,
      shift_ivory_tooth = 26,
      shift_lye_milk_free = 27,
      shift_blunt = 28,
      shift_unengraved = 29,
      shift_hair_wool = 30,
      shift_yarn = 31
    };
    enum Mask : uint32_t {
      mask_dye = 0x1U,
      mask_dyeable = 0x2U,
      mask_dyed = 0x4U,
      mask_sewn_imageless = 0x8U,
      mask_glass_making = 0x10U,
      mask_screw = 0x20U,
      mask_building_material = 0x40U,
      mask_fire_safe = 0x80U,
      mask_magma_safe = 0x100U,
      mask_deep_material = 0x200U,
      mask_melt_designated = 0x400U,
      mask_non_economic = 0x800U,
      mask_allow_melt_dump = 0x1000U,
      mask_allow_artifact = 0x2000U,
      mask_plant = 0x4000U,
      mask_silk = 0x8000U,
      mask_leather = 0x10000U,
      mask_bone = 0x20000U,
      mask_shell = 0x40000U,
      mask_totemable = 0x80000U,
      mask_horn = 0x100000U,
      mask_pearl = 0x200000U,
      mask_plaster_containing = 0x400000U,
      mask_anon_1 = 0x800000U,
      mask_soap = 0x1000000U,
      mask_body_part = 0x2000000U,
      mask_ivory_tooth = 0x4000000U,
      mask_lye_milk_free = 0x8000000U,
      mask_blunt = 0x10000000U,
      mask_unengraved = 0x20000000U,
      mask_hair_wool = 0x40000000U,
      mask_yarn = 0x80000000U
    };
    job_item_flags2(uint32_t whole_ = 0) : whole(whole_) {};
  };
  template<> struct DFHACK_EXPORT bitfield_traits<job_item_flags2> {
    typedef uint32_t base_type;
    typedef job_item_flags2 bitfield_type;
    static const int bit_count = sizeof(base_type)*8;
    static const bitfield_item_info bits[bit_count];
  };
  template<> struct DFHACK_EXPORT identity_traits<job_item_flags2> {
    static bitfield_identity identity;
    static bitfield_identity *get() { return &identity; }
  };
}
#endif
