/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_ITEM_H
#define DF_ITEM_H
#ifndef DF_COORD_H
#include "coord.h"
#endif
#ifndef DF_IMPROVEMENT_TYPE_H
#include "improvement_type.h"
#endif
#ifndef DF_ITEM_FLAGS_H
#include "item_flags.h"
#endif
#ifndef DF_ITEM_FLAGS2_H
#include "item_flags2.h"
#endif
#ifndef DF_ITEM_TYPE_H
#include "item_type.h"
#endif
#ifndef DF_JOB_SKILL_H
#include "job_skill.h"
#endif
#ifndef DF_MATTER_STATE_H
#include "matter_state.h"
#endif
#ifndef DF_SLAB_ENGRAVING_TYPE_H
#include "slab_engraving_type.h"
#endif
namespace df {
  struct caravan_state;
  struct file_compressorst;
  struct general_ref;
  struct historical_entity;
  struct historical_figure;
  struct item_actual;
  struct item_filter_spec;
  struct item_history_info;
  struct item_magicness;
  struct item_stockpile_ref;
  struct itemimprovement;
  struct job;
  struct specific_ref;
  struct squad_uniform_spec;
  struct unit;
  struct unit_wound;
  struct world_site;
  struct DFHACK_EXPORT item : virtual_class {
    df::coord pos;
    df::item_flags flags;
    df::item_flags2 flags2; /*!< v0.34.08 */
    uint32_t age;
    int32_t id;
    std::vector<df::specific_ref* > specific_refs;
    std::vector<df::general_ref* > general_refs;
    int32_t world_data_id; /*!< v0.34.01 */
    int32_t world_data_subid; /*!< v0.34.01 */
    uint8_t stockpile_countdown; /*!< -1 per 50 frames; then check if needs moving */
    uint8_t stockpile_delay; /*!< used to reset countdown; randomly varies */
    int16_t unk2;
    int32_t base_uniform_score;
    int16_t walkable_id; /*!< from map_block.walkable */
    uint16_t spec_heat;
    uint16_t ignite_point;
    uint16_t heatdam_point;
    uint16_t colddam_point;
    uint16_t boiling_point;
    uint16_t melting_point;
    uint16_t fixed_temp;
    int32_t weight; /*!< if flags.weight_computed */
    int32_t weight_fraction; /*!< 1e-6 */
    static virtual_identity _identity;
    typedef item* key_pointer_type;
    typedef int32_t key_field_type;
    static int binsearch_index(const std::vector<item*> &vec, key_field_type key, bool exact = true);
    static int binsearch_index(const std::vector<item*> &vec, key_pointer_type key, bool exact = true);
    static std::vector<item*> &get_vector();
    static item *find(key_field_type id);
  public:
    virtual df::item_type getType() { return df::item_type(); /*0*/ };
    virtual int16_t getSubtype() { return int16_t(); /*1*/ };
    virtual int16_t getMaterial() { return int16_t(); /*2*/ };
    virtual int32_t getMaterialIndex() { return int32_t(); /*3*/ };
    virtual void setSubtype(int16_t) { /*4*/ };
    virtual void setMaterial(int16_t) { /*5*/ };
    virtual void setMaterialIndex(int32_t) { /*6*/ };
    virtual int16_t getActualMaterial() { return int16_t(); /*7*/ }; /*!< returns an actual material type, never a race */
    virtual int32_t getActualMaterialIndex() { return int32_t(); /*8*/ }; /*!< returns an actual material index, never a caste */
    virtual int16_t getRace() { return int16_t(); /*9*/ }; /*!< only if the object is made of a "specific creature mat" */
    virtual int16_t getCaste() { return int16_t(); /*10*/ }; /*!< only if the object is made of a "specific creature mat" */
    virtual int16_t getPlantID() { return int16_t(); /*11*/ }; /*!< only if the object is made of a plant material */
  protected:
    virtual void anon_vmethod_12() { /*12*/ }; /*!< v0.40.01 */
    virtual void anon_vmethod_13(int32_t) { /*13*/ }; /*!< v0.40.01 */
    virtual void anon_vmethod_14() { /*14*/ }; /*!< v0.40.01 */
  public:
    virtual int32_t getTotalDimension() { return int32_t(); /*15*/ };
    virtual void setDimension(int32_t) { /*16*/ };
    virtual bool subtractDimension(int32_t) { return bool(); /*17*/ };
    virtual bool isFoodStorage() { return bool(); /*18*/ };
    virtual bool isTrackCart() { return bool(); /*19*/ };
    virtual bool isWheelbarrow() { return bool(); /*20*/ };
    virtual int32_t getVehicleID() { return int32_t(); /*21*/ };
    virtual df::item_stockpile_ref* getStockpile() { return 0; /*22*/ };
    virtual bool containsPlaster() { return bool(); /*23*/ };
    virtual bool isPlaster() { return bool(); /*24*/ };
    virtual bool getColorOverride(void*) { return bool(); /*25*/ };
    virtual df::item_history_info** getHistoryInfo() { return 0; /*26*/ };
    virtual bool hasToolUse(int16_t) { return bool(); /*27*/ };
  protected:
    virtual bool anon_vmethod_28() { return bool(); /*28*/ };
  public:
    virtual void becomePaste() { /*29*/ };
    virtual void becomePressed() { /*30*/ };
    virtual void calculateWeight() { /*31*/ };
    virtual bool isSharpStone() { return bool(); /*32*/ };
    virtual bool isCrystalGlassable() { return bool(); /*33*/ };
    virtual bool isMetalOre(int16_t) { return bool(); /*34*/ };
    virtual void clearLastTempUpdateTS() { /*35*/ };
    virtual void listNotableKills(std::string*) { /*36*/ };
    virtual uint16_t getSpecHeat() { return uint16_t(); /*37*/ };
    virtual uint16_t getIgnitePoint() { return uint16_t(); /*38*/ };
    virtual uint16_t getHeatdamPoint() { return uint16_t(); /*39*/ };
    virtual uint16_t getColddamPoint() { return uint16_t(); /*40*/ };
    virtual uint16_t getBoilingPoint() { return uint16_t(); /*41*/ };
    virtual uint16_t getMeltingPoint() { return uint16_t(); /*42*/ };
    virtual uint16_t getFixedTemp() { return uint16_t(); /*43*/ };
    virtual int32_t getSolidDensity() { return int32_t(); /*44*/ };
    virtual bool materialRots() { return bool(); /*45*/ };
    virtual uint16_t getTemperature() { return uint16_t(); /*46*/ };
    virtual bool adjustTemperature(uint16_t, int32_t) { return bool(); /*47*/ };
  protected:
    virtual void anon_vmethod_48() { /*48*/ };
  public:
    virtual void extinguish() { /*49*/ };
    virtual int8_t getGloveHandedness() { return int8_t(); /*50*/ };
    virtual void setGloveHandedness(int8_t) { /*51*/ };
    virtual bool isSpike() { return bool(); /*52*/ };
    virtual bool isScrew() { return bool(); /*53*/ };
    virtual bool isBuildMat() { return bool(); /*54*/ };
    virtual bool isTemperatureSafe(int8_t) { return bool(); /*55*/ };
    virtual void setRandSubtype(int32_t) { /*56*/ };
    virtual int8_t getWeaponSize() { return int8_t(); /*57*/ }; /*!< weapon racks have capacity 5 */
    virtual int16_t getWear() { return int16_t(); /*58*/ };
    virtual void setWear(int16_t) { /*59*/ };
    virtual int32_t getMaker() { return int32_t(); /*60*/ };
    virtual void setMaker(int32_t) { /*61*/ };
    virtual void getCorpseInfo(int16_t*, int16_t*, df::historical_figure**, df::unit**) { /*62*/ };
  protected:
    virtual void anon_vmethod_63() { /*63*/ };
  public:
    virtual BitArray<int>* getGloveFlags() { return 0; /*64*/ };
    virtual std::string* getItemShapeDesc() { return 0; /*65*/ }; /*!< a statue/figurine of "string goes here" */
    virtual bool isMatchingAmmoItem(df::item_filter_spec*) { return bool(); /*66*/ };
  protected:
    virtual void anon_vmethod_67(void*, void*) { /*67*/ };
    virtual void anon_vmethod_68(int32_t, int32_t) { /*68*/ };
    virtual void anon_vmethod_69(int32_t, int32_t) { /*69*/ };
  public:
    virtual void setSeedsPlantSkillLevel(int32_t) { /*70*/ };
    virtual int16_t getCorpseSize() { return int16_t(); /*71*/ }; /*!< size_info.size_cur */
    virtual bool ageItem(int32_t) { return bool(); /*72*/ };
    virtual int32_t getCritterAirdrownTimer() { return int32_t(); /*73*/ };
    virtual void setCritterAirdrownTimer(int32_t) { /*74*/ };
    virtual void incrementCritterAirdrownTimer() { /*75*/ };
    virtual int32_t getRotTimer() { return int32_t(); /*76*/ };
    virtual void setRotTimer(int32_t) { /*77*/ };
    virtual void incrementRotTimer() { /*78*/ };
    virtual bool isBogeymanCorpse() { return bool(); /*79*/ };
  protected:
    virtual void anon_vmethod_80(int32_t) { /*80*/ };
  public:
    virtual std::string* getAmmoType(std::string*) { return 0; /*81*/ };
    virtual bool isLiquidPowder() { return bool(); /*82*/ };
    virtual bool isLiquid() { return bool(); /*83*/ };
  protected:
    virtual bool anon_vmethod_84() { return bool(); /*84*/ };
  public:
    virtual int32_t getVolume() { return int32_t(); /*85*/ }; /*!< for putting in containers, building clutter */
    virtual df::itemimprovement* addImprovementFromJob(df::improvement_type, df::job*, df::unit*, int16_t, int32_t, int32_t, df::historical_entity*, df::world_site*, int16_t, bool) { return 0; /*86*/ };
    virtual bool isWeapon() { return bool(); /*87*/ };
    virtual bool isArmorNotClothing() { return bool(); /*88*/ };
    virtual bool isMillable() { return bool(); /*89*/ };
    virtual bool isProcessableThread() { return bool(); /*90*/ };
    virtual bool isProcessableVial() { return bool(); /*91*/ };
    virtual bool isProcessableBarrel() { return bool(); /*92*/ };
    virtual bool isEdiblePlant() { return bool(); /*93*/ };
    virtual bool isEdibleRaw(int32_t) { return bool(); /*94*/ };
    /**
     * In item_foodst, requires MEAT or FISH ingredient.
     */
    virtual bool isEdibleCarnivore(int32_t) { return bool(); /*95*/ };
    /**
     * In item_foodst, requires CORPSEPIECE, MEAT or FISH ingredient.
     */
    virtual bool isEdibleBonecarn(int32_t) { return bool(); /*96*/ };
    virtual bool moveToGround(int16_t, int16_t, int16_t) { return bool(); /*97*/ };
    virtual void categorize(bool) { /*98*/ }; /*!< Add item to world.items.other.* */
    virtual void uncategorize() { /*99*/ }; /*!< Remove item from world.items.other.* */
    virtual bool isFurniture(bool) { return bool(); /*100*/ };
    virtual bool isPressed() { return bool(); /*101*/ };
    virtual bool isAnimal() { return bool(); /*102*/ }; /*!< stored in Animal stockpiles */
    virtual void assignQuality(df::unit*, df::job_skill) { /*103*/ };
  protected:
    virtual void anon_vmethod_104(int32_t) { /*104*/ };
  public:
    virtual void notifyLostMasterwork() { /*105*/ };
    virtual void addMagic(int32_t, int32_t, int32_t) { /*106*/ };
    virtual void magic_unk1(int32_t, int32_t) { /*107*/ };
    virtual void magic_unk2(int32_t, int32_t) { /*108*/ };
    virtual void magic_unk3(int32_t) { /*109*/ };
    virtual void magic_unk4(int32_t, int32_t, int32_t) { /*110*/ };
    virtual void setDisplayColor(void*) { /*111*/ };
    virtual bool isDamagedByHeat() { return bool(); /*112*/ };
    virtual bool needTwoHandedWield(int32_t) { return bool(); /*113*/ };
    virtual df::item* splitStack(int32_t, bool) { return 0; /*114*/ };
    virtual bool isTameableVermin() { return bool(); /*115*/ };
    virtual bool isDye() { return bool(); /*116*/ };
    virtual bool isMilkable(int32_t, int32_t) { return bool(); /*117*/ };
    virtual bool isSandBearing() { return bool(); /*118*/ };
    virtual bool isLyeBearing() { return bool(); /*119*/ };
    virtual bool isAnimalProduct() { return bool(); /*120*/ };
    virtual void getStorageInfo(int16_t*, int16_t*) { /*121*/ };
    virtual bool addWear(int32_t, bool, bool) { return bool(); /*122*/ };
    virtual bool incWearTimer(int32_t) { return bool(); /*123*/ };
    virtual bool checkWearDestroy(bool, bool) { return bool(); /*124*/ };
    virtual void addContaminant(int16_t, int32_t, df::matter_state, uint16_t, int32_t, int16_t, uint16_t) { /*125*/ };
    virtual void removeContaminantByIdx(int32_t, int32_t) { /*126*/ };
    virtual void removeContaminant(int16_t, int32_t, int32_t) { /*127*/ };
    virtual void tradeUnitContaminants(df::unit*, int16_t) { /*128*/ };
    virtual void tradeItemContaminants(df::item*) { /*129*/ }; /*!< calls item.tIC2(this) */
    virtual void tradeItemContaminants2(df::item_actual*) { /*130*/ };
    virtual void contaminateWound(df::unit*, df::unit_wound*, uint8_t, int16_t) { /*131*/ };
    virtual void write_file(df::file_compressorst*) { /*132*/ };
    virtual void read_file(df::file_compressorst*, int32_t) { /*133*/ };
    virtual std::vector<void* >* getWeaponAttacks() { return 0; /*134*/ };
  protected:
    virtual void anon_vmethod_135() { /*135*/ };
  public:
    virtual bool isSplittable() { return bool(); /*136*/ }; /*!< if false, you throw the entire stack at once */
  protected:
    virtual void anon_vmethod_137() { /*137*/ };
    virtual void anon_vmethod_138(int32_t) { /*138*/ };
  public:
    virtual void propagateUnitRefs() { /*139*/ };
    virtual bool isBag() { return bool(); /*140*/ }; /*!< BOX made of cloth */
    virtual bool isSand() { return bool(); /*141*/ };
  protected:
    virtual void anon_vmethod_142() { /*142*/ }; /*!< returns item_actual.anon_1 */
  public:
    virtual int32_t getStackSize() { return int32_t(); /*143*/ };
    virtual void addStackSize(int32_t) { /*144*/ };
    virtual void setStackSize(int32_t) { /*145*/ };
    virtual bool isAmmoClass(std::string*) { return bool(); /*146*/ };
    virtual bool isAutoClean() { return bool(); /*147*/ }; /*!< delete on_ground every season when in ANY_AUTO_CLEAN; default true */
    virtual bool setTemperatureFromMapTile(int32_t, int32_t, int32_t, bool, bool) { return bool(); /*148*/ };
    virtual bool setTemperatureFromMap(bool, bool) { return bool(); /*149*/ };
    virtual bool setTemperature(uint16_t, bool, bool) { return bool(); /*150*/ };
    virtual bool updateTempFromMap(bool, bool, bool, int32_t) { return bool(); /*151*/ };
    virtual bool updateTemperature(uint16_t, bool, bool, bool, int32_t) { return bool(); /*152*/ };
    virtual bool updateFromWeather() { return bool(); /*153*/ };
    virtual bool updateContaminants() { return bool(); /*154*/ };
    virtual bool checkTemperatureDamage() { return bool(); /*155*/ };
    virtual bool checkHeatColdDamage() { return bool(); /*156*/ };
    virtual bool checkMeltBoil() { return bool(); /*157*/ };
    virtual int16_t getMeleeSkill() { return int16_t(); /*158*/ };
    virtual int16_t getRangedSkill() { return int16_t(); /*159*/ };
    virtual void setQuality(int16_t) { /*160*/ };
    virtual int16_t getQuality() { return int16_t(); /*161*/ };
    virtual int16_t getOverallQuality() { return int16_t(); /*162*/ };
    virtual int16_t getImprovementQuality() { return int16_t(); /*163*/ };
    virtual int32_t getProjectileSize() { return int32_t(); /*164*/ };
    virtual bool isImprovable(df::job*, int16_t, int32_t) { return bool(); /*165*/ };
    virtual void setSharpness(int32_t, int32_t) { /*166*/ };
    virtual int32_t getSharpness() { return int32_t(); /*167*/ };
    virtual bool isTotemable() { return bool(); /*168*/ };
    virtual bool isDyeable() { return bool(); /*169*/ };
    virtual bool isNotDyed() { return bool(); /*170*/ };
    virtual bool isDyed() { return bool(); /*171*/ };
    virtual bool canSewImage() { return bool(); /*172*/ };
  protected:
    virtual bool anon_vmethod_173() { return bool(); /*173*/ };
  public:
    virtual bool isProcessableVialAtStill() { return bool(); /*174*/ };
    virtual bool isSimilarToItem(df::item_type, int16_t, int16_t, int32_t) { return bool(); /*175*/ };
    virtual int32_t getBlockChance() { return int32_t(); /*176*/ };
  protected:
    virtual void anon_vmethod_177() { /*177*/ };
  public:
    virtual int16_t getMakerRace() { return int16_t(); /*178*/ };
    virtual void setMakerRace(int16_t) { /*179*/ };
    virtual int8_t getEffectiveArmorLevel() { return int8_t(); /*180*/ }; /*!< adds 1 if it has [METAL_ARMOR_LEVELS] and it's made of an inorganic mat */
  protected:
    virtual void anon_vmethod_181() { /*181*/ };
  public:
    virtual bool isItemOrganicCloth() { return bool(); /*182*/ };
    virtual bool isMadeOfOrganicCloth() { return bool(); /*183*/ };
    virtual void coverWithContaminant(int16_t, int32_t, df::matter_state, uint16_t) { /*184*/ }; /*!< also stops fire; used for rain */
    virtual bool hasImprovements() { return bool(); /*185*/ };
    virtual bool isImproved() { return bool(); /*186*/ };
    virtual std::vector<df::item_magicness* >* getMagic() { return 0; /*187*/ };
    virtual void getItemDescription(std::string*, int8_t) { /*188*/ };
    virtual void getItemDescriptionPrefix(std::string*, int8_t) { /*189*/ }; /*!< "a " or "the " */
    virtual void getItemBasicName(std::string*) { /*190*/ }; /*!< usually just "item" */
    virtual int32_t getImprovementsValue(df::caravan_state*) { return int32_t(); /*191*/ };
    virtual bool isExtractBearingFish() { return bool(); /*192*/ };
    virtual bool isExtractBearingVermin() { return bool(); /*193*/ };
  protected:
    virtual void anon_vmethod_194() { /*194*/ };
  public:
    virtual int32_t getBaseWeight() { return int32_t(); /*195*/ };
    virtual int32_t getWeightShiftBits() { return int32_t(); /*196*/ };
    virtual bool isCollected() { return bool(); /*197*/ };
    virtual bool isEdibleVermin() { return bool(); /*198*/ };
    virtual void drawSelf() { /*199*/ };
    virtual bool isRangedWeapon() { return bool(); /*200*/ };
    virtual bool isClothing() { return bool(); /*201*/ };
    virtual bool isWet() { return bool(); /*202*/ };
    virtual int32_t getCurrencyValue(df::historical_entity*) { return int32_t(); /*203*/ }; /*!< that is, value of coins */
    virtual bool isAssignedToStockpile() { return bool(); /*204*/ };
    virtual bool isAssignedToThisStockpile(int32_t) { return bool(); /*205*/ };
    virtual void detachStockpileAssignment() { /*206*/ }; /*!< also removes links from the pile */
    virtual void removeStockpileAssignment() { /*207*/ }; /*!< just wipes the fields */
    virtual df::item_stockpile_ref* getStockpile2() { return 0; /*208*/ };
  protected:
    virtual void anon_vmethod_209(int32_t, int32_t, int32_t, int32_t) { /*209*/ };
    virtual void anon_vmethod_210(int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t) { /*210*/ };
    virtual void anon_vmethod_211(int32_t) { /*211*/ };
  public:
    virtual int32_t getThreadDyeValue(df::caravan_state*) { return int32_t(); /*212*/ };
    virtual void getColorAndShape(std::vector<int16_t >*, std::vector<int16_t >*) { /*213*/ };
  protected:
    virtual bool anon_vmethod_214() { return bool(); /*214*/ };
  public:
    virtual bool isArmor() { return bool(); /*215*/ }; /*!< for armor user skill encumberance */
    virtual int32_t calcUniformScore(df::squad_uniform_spec*, bool, df::job_skill, df::job_skill, df::job_skill) { return int32_t(); /*216*/ };
    virtual int32_t calcBaseUniformScore() { return int32_t(); /*217*/ };
  protected:
    virtual void anon_vmethod_218(int32_t, int32_t, int32_t) { /*218*/ };
    virtual bool anon_vmethod_219() { return bool(); /*219*/ };
    virtual bool anon_vmethod_220() { return bool(); /*220*/ };
    virtual void anon_vmethod_221(int32_t, int32_t) { /*221*/ };
    virtual void anon_vmethod_222(int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t) { /*222*/ };
    virtual void anon_vmethod_223() { /*223*/ };
    virtual void anon_vmethod_224() { /*224*/ };
  public:
    virtual df::slab_engraving_type getSlabEngravingType() { return df::slab_engraving_type(); /*225*/ };
    virtual int32_t getAbsorption() { return int32_t(); /*226*/ };
  protected:
    virtual bool anon_vmethod_227() { return bool(); /*227*/ };
  public:
    virtual bool isGemMaterial() { return bool(); /*228*/ };
    virtual void setGemShape(int32_t) { /*229*/ };
    virtual bool hasGemShape() { return bool(); /*230*/ };
    virtual int32_t getGemShape() { return int32_t(); /*231*/ };
  protected:
    virtual bool anon_vmethod_232() { return bool(); /*232*/ }; /*!< v0.40.01 */
  public:
    virtual ~item() { /*233*/ };
  protected:
    item(virtual_identity *_id = &item::_identity);
    friend void *df::allocator_fn<item>(void*,const void*);
  };
}
#endif
