/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_BUILDING_H
#define DF_BUILDING_H
#ifndef DF_BUILDING_EXTENTS_H
#include "building_extents.h"
#endif
#ifndef DF_BUILDING_FLAGS_H
#include "building_flags.h"
#endif
#ifndef DF_BUILDING_TYPE_H
#include "building_type.h"
#endif
#ifndef DF_JOB_TYPE_H
#include "job_type.h"
#endif
namespace df {
  struct building_drawbuffer;
  struct building_squad_use;
  struct building_users;
  struct file_compressorst;
  struct general_ref;
  struct hospital_supplies;
  struct item;
  struct job;
  struct machine_info;
  struct machine_tile_set;
  struct map_viewport;
  struct power_info;
  struct specific_ref;
  struct stockpile_links;
  struct unit;
  struct workshop_profile;
  struct DFHACK_EXPORT building : virtual_class {
    int32_t x1; /*!< top left */
    int32_t y1;
    int32_t centerx; /*!< work location */
    int32_t x2; /*!< bottom right */
    int32_t y2;
    int32_t centery;
    int32_t z;
    df::building_flags flags;
    int16_t mat_type;
    int32_t mat_index;
    df::building_extents room;
    int32_t age;
    int16_t race;
    int32_t id;
    std::vector<df::job* > jobs;
    std::vector<df::specific_ref* > specific_refs;
    std::vector<df::general_ref* > general_refs;
    bool is_room;
    std::vector<df::building* > children; /*!< other buildings within this room */
    std::vector<df::building* > parents; /*!< rooms this building belongs to */
    int32_t owner_id; /*!< v0.40.1 */
    df::unit* owner;
    struct DFHACK_EXPORT T_job_claim_suppress {
      df::unit* unit;
      int32_t timer;
      static struct_identity _identity;
    public:
      T_job_claim_suppress();
    };
    std::vector<T_job_claim_suppress* > job_claim_suppress; /*!< after Remv Cre, prevents unit from taking jobs at building */
    std::string name;
    struct DFHACK_EXPORT T_activities {
      int32_t activity_id;
      int32_t event_id;
      static struct_identity _identity;
    public:
      T_activities();
    };
    std::vector<T_activities* > activities;
    int32_t world_data_id; /*!< v0.34.01 */
    int32_t world_data_subid; /*!< v0.34.01 */
    int32_t unk_v40_2; /*!< v0.40.1 */
    int32_t unk_v40_3; /*!< v0.40.1 */
    static virtual_identity _identity;
    typedef building* key_pointer_type;
    typedef int32_t key_field_type;
    static int binsearch_index(const std::vector<building*> &vec, key_field_type key, bool exact = true);
    static int binsearch_index(const std::vector<building*> &vec, key_pointer_type key, bool exact = true);
    static std::vector<building*> &get_vector();
    static building *find(key_field_type id);
  public:
    virtual int32_t getCustomType() { return int32_t(); /*0*/ };
    virtual void setCustomType(int32_t) { /*1*/ };
    virtual void countHospitalSupplies(df::hospital_supplies*) { /*2*/ };
    virtual df::stockpile_links* getStockpileLinks() { return 0; /*3*/ };
    virtual void detachWorldData() { /*4*/ }; /*!< ? */
    virtual bool canLinkToStockpile() { return bool(); /*5*/ }; /*!< used by the give to building ui of stockpile */
    virtual df::building_users* getUsers() { return 0; /*6*/ };
    virtual void moveBuilding(int16_t, int16_t, int16_t) { /*7*/ };
    virtual void initOccupancy(int32_t, int32_t) { /*8*/ };
    virtual void setFillTimer(int32_t, int16_t) { /*9*/ };
    virtual bool isOnFire() { return bool(); /*10*/ };
    virtual bool isUnpowered() { return bool(); /*11*/ }; /*!< from magma OR machine power */
    virtual bool canCollapse() { return bool(); /*12*/ };
    virtual uint32_t getPassableOccupancy() { return uint32_t(); /*13*/ };
    virtual uint32_t getImpassableOccupancy() { return uint32_t(); /*14*/ };
    virtual bool isPowerSource() { return bool(); /*15*/ };
    virtual void updateFromWeather() { /*16*/ };
    virtual void updateTemperature() { /*17*/ };
    virtual void updateItems() { /*18*/ };
    virtual void updateTempFromTile(uint16_t, bool, bool) { /*19*/ };
    virtual bool isNormalFurniture() { return bool(); /*20*/ };
    virtual bool isFarmPlot() { return bool(); /*21*/ };
    virtual df::workshop_profile* getWorkshopProfile() { return 0; /*22*/ };
    virtual df::machine_info* getMachineInfo() { return 0; /*23*/ };
    virtual void getPowerInfo(df::power_info*) { /*24*/ };
    virtual bool canConnectToMachine(df::machine_tile_set*) { return bool(); /*25*/ };
    virtual df::building_type getType() { return df::building_type(); /*26*/ };
    virtual int16_t getSubtype() { return int16_t(); /*27*/ };
    virtual void setSubtype(int16_t) { /*28*/ };
    virtual bool isActual() { return bool(); /*29*/ };
    virtual bool isCoffin2() { return bool(); /*30*/ };
    virtual void updateAction() { /*31*/ };
    virtual bool isStatueOrRestraint() { return bool(); /*32*/ };
    virtual void setMaterialAmount(int32_t) { /*33*/ };
    virtual void setBuildStage(int16_t) { /*34*/ };
    virtual int32_t getBuildStage() { return int32_t(); /*35*/ };
    virtual int32_t getMaxBuildStage() { return int32_t(); /*36*/ };
    virtual int32_t getArchitectureValue() { return int32_t(); /*37*/ }; /*!< bridge: material*10 rough, material*30 smooth */
    virtual bool isSettingOccupancy() { return bool(); /*38*/ };
    virtual bool isActual2() { return bool(); /*39*/ };
    virtual bool isExtentShaped() { return bool(); /*40*/ };
    virtual void updateOccupancy(int32_t, int32_t) { /*41*/ };
    virtual int32_t getRoomValue(df::unit*) { return int32_t(); /*42*/ };
    virtual int32_t getPersonalValue(df::unit*) { return int32_t(); /*43*/ };
    virtual bool canBeRoom() { return bool(); /*44*/ };
    virtual int32_t getConstructionValue() { return int32_t(); /*45*/ }; /*!< bridge: material*10 */
    virtual void queueDestroy() { /*46*/ }; /*!< same as querying and pressing X */
    virtual bool isImpassableTile(int32_t, int32_t) { return bool(); /*47*/ };
    virtual int32_t getFreeCapacity(bool) { return int32_t(); /*48*/ };
    virtual bool canStoreItem(df::item*, bool) { return bool(); /*49*/ };
    virtual void getName(std::string*) { /*50*/ };
    virtual void getNameColor() { /*51*/ };
    virtual void initFarmSeasons() { /*52*/ };
    virtual void initBurialFlags() { /*53*/ };
    virtual void clearBurialFlags() { /*54*/ };
    virtual void clearBurialFlags2() { /*55*/ };
    virtual int32_t getClutterLevel() { return int32_t(); /*56*/ }; /*!< 1..10 */
    virtual bool needsDesign() { return bool(); /*57*/ };
    virtual bool canUseForMood(df::job_type) { return bool(); /*58*/ };
    virtual bool canBeRoomSubset() { return bool(); /*59*/ };
    virtual bool isCoffin() { return bool(); /*60*/ };
    virtual bool canUseSpouseRoom() { return bool(); /*61*/ };
    virtual bool canMakeRoom() { return bool(); /*62*/ }; /*!< false if already, or cannot be */
    virtual bool isJusticeRestraint() { return bool(); /*63*/ };
    virtual void detachRestrainedUnit(df::unit*) { /*64*/ };
    virtual void write_file(df::file_compressorst*) { /*65*/ };
    virtual void read_file(df::file_compressorst*, int32_t) { /*66*/ };
    virtual bool isImpassableAtCreation() { return bool(); /*67*/ }; /*!< the true set looks like things where the unit should stand aside */
    virtual void categorize(bool) { /*68*/ }; /*!< Add to world.buildings.other.* */
    virtual void uncategorize() { /*69*/ }; /*!< Remove from world.buildings.other.* */
    virtual int32_t getBaseValue() { return int32_t(); /*70*/ };
    virtual void setTriggerState(int32_t) { /*71*/ };
    virtual void checkAdvmodeLocked() { /*72*/ };
    virtual void drawAdvmodeUnlockUI() { /*73*/ };
    virtual void advmodeUnlock(void*) { /*74*/ };
    virtual bool needsMagma() { return bool(); /*75*/ };
    virtual void removeUses(bool, bool) { /*76*/ };
    virtual void deconstructItems(bool, bool) { /*77*/ };
    virtual void cleanupMap() { /*78*/ };
    virtual bool isFireSafe(int8_t) { return bool(); /*79*/ }; /*!< checks contained_items[0] for FIREIMMUNE */
    virtual void fillSidebarMenu() { /*80*/ };
    virtual bool isForbidden() { return bool(); /*81*/ };
  protected:
    virtual void anon_vmethod_82() { /*82*/ };
  public:
    virtual bool isHidden() { return bool(); /*83*/ };
    virtual bool isVisibleInUI() { return bool(); /*84*/ }; /*!< not hidden, or hide/unhide UI mode */
    virtual bool isVisibleInViewport(df::map_viewport*) { return bool(); /*85*/ }; /*!< checks coordinates, calls isVisibleInUI and checks window_xy */
    virtual void getDrawExtents(df::building_drawbuffer*) { /*86*/ };
    virtual void drawBuilding(df::building_drawbuffer*, int16_t) { /*87*/ };
    virtual void setSquadUse(int32_t, uint32_t) { /*88*/ };
    virtual std::vector<df::building_squad_use* >* getSquads() { return 0; /*89*/ };
    virtual int32_t getSpecificSquad() { return int32_t(); /*90*/ };
    virtual int32_t getSpecificPosition() { return int32_t(); /*91*/ };
    virtual void setSpecificSquadPos(int32_t, int32_t) { /*92*/ };
    virtual void clearSpecificSquad() { /*93*/ };
    virtual ~building() { /*94*/ };
  protected:
    building(virtual_identity *_id = &building::_identity);
    friend void *df::allocator_fn<building>(void*,const void*);
  };
}
#endif
