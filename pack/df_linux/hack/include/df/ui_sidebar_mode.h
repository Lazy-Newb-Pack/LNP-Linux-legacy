/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_UI_SIDEBAR_MODE_H
#define DF_UI_SIDEBAR_MODE_H
namespace df {
  namespace enums {
    namespace ui_sidebar_mode {
      enum ui_sidebar_mode : int32_t {
        Default,
        Squads,
        DesignateMine,
        DesignateRemoveRamps,
        DesignateUpStair,
        DesignateDownStair,
        DesignateUpDownStair,
        DesignateUpRamp,
        DesignateChannel,
        DesignateGatherPlants,
        DesignateRemoveDesignation,
        DesignateSmooth,
        DesignateCarveTrack,
        DesignateEngrave,
        DesignateCarveFortification,
        Stockpiles,
        Build,
        QueryBuilding,
        Orders,
        OrdersForbid,
        OrdersRefuse,
        OrdersWorkshop,
        OrdersZone,
        BuildingItems,
        ViewUnits,
        LookAround,
        DesignateItemsClaim,
        DesignateItemsForbid,
        DesignateItemsMelt,
        DesignateItemsUnmelt,
        DesignateItemsDump,
        DesignateItemsUndump,
        DesignateItemsHide,
        DesignateItemsUnhide,
        DesignateChopTrees,
        DesignateToggleEngravings,
        DesignateToggleMarker,
        Hotkeys,
        DesignateTrafficHigh,
        DesignateTrafficNormal,
        DesignateTrafficLow,
        DesignateTrafficRestricted,
        Zones,
        ZonesPenInfo,
        ZonesPitInfo,
        ZonesHospitalInfo,
        ZonesGatherInfo,
        DesignateRemoveConstruction,
        DepotAccess,
        NotesPoints,
        NotesRoutes,
        Burrows,
        Hauling
      };
    }
  }
  using enums::ui_sidebar_mode::ui_sidebar_mode;
  template<> struct DFHACK_EXPORT identity_traits<ui_sidebar_mode> {
    static enum_identity identity;
    static enum_identity *get() { return &identity; }
  };
  template<> struct DFHACK_EXPORT enum_traits<ui_sidebar_mode> {
    typedef int32_t base_type;
    typedef ui_sidebar_mode enum_type;
    static const base_type first_item_value = 0;
    static const base_type last_item_value = 52;
    static inline bool is_valid(enum_type value) {
      return (base_type(value) >= first_item_value && base_type(value) <= last_item_value);
    }
    static const enum_type first_item = (enum_type)first_item_value;
    static const enum_type last_item = (enum_type)last_item_value;
    static const char *const key_table[53];
  };
}
#endif
