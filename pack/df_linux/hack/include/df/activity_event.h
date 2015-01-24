/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_ACTIVITY_EVENT_H
#define DF_ACTIVITY_EVENT_H
#ifndef DF_ACTIVITY_EVENT_TYPE_H
#include "activity_event_type.h"
#endif
#ifndef DF_JOB_SKILL_H
#include "job_skill.h"
#endif
#ifndef DF_SQUAD_EVENT_TYPE_H
#include "squad_event_type.h"
#endif
namespace df {
  struct activity_event_participants;
  struct file_compressorst;
  struct unit;
  struct DFHACK_EXPORT activity_event : virtual_class {
    int32_t event_id; /*!< mostly, but not always, the index in activity.events */
    int32_t activity_id;
    int32_t parent_event_id;
    union T_flags {
      uint32_t whole;
      struct {
        uint32_t dismissed : 1; /*!< to be removed from squad_position, anyway */
        uint32_t squad : 1; /*!< for all in training session, but not ind.drill */
      } bits;
      enum Shift {
        shift_dismissed = 0,
        shift_squad = 1
      };
      enum Mask : uint32_t {
        mask_dismissed = 0x1U,
        mask_squad = 0x2U
      };
      T_flags(uint32_t whole_ = 0) : whole(whole_) {};
    };
    T_flags flags;
    static virtual_identity _identity;
  public:
    virtual df::activity_event_type getType() { return df::activity_event_type(); /*0*/ };
    virtual void write_file(df::file_compressorst*) { /*1*/ };
    virtual void read_file(df::file_compressorst*, int32_t) { /*2*/ };
    virtual ~activity_event() { /*3*/ };
    virtual bool isEmpty() { return bool(); /*4*/ }; /*!< returns true if hist_figure_ids empty or if various subclass fields are uninitialized */
  protected:
    virtual void anon_vmethod_5() { /*5*/ }; /*!< returns -1 */
    virtual void anon_vmethod_6(void*) { /*6*/ }; /*!< does nothing */
  public:
    virtual df::activity_event_participants* getParticipantInfo() { return 0; /*7*/ };
    virtual void dismiss(bool) { /*8*/ };
  protected:
    virtual void anon_vmethod_9(int32_t, int32_t, int32_t) { /*9*/ };
  public:
    virtual void removeParticipant(int32_t, int32_t, bool) { /*10*/ };
    virtual void process(int32_t, int32_t, df::unit*) { /*11*/ };
    virtual int32_t checkDrillInvalid(int32_t) { return int32_t(); /*12*/ };
    virtual bool decUniformLock(int32_t) { return bool(); /*13*/ };
    virtual df::squad_event_type getSquadEventType() { return df::squad_event_type(); /*14*/ };
    virtual void setDemoSkill(df::job_skill) { /*15*/ };
    virtual void setSkillDemoTimers(int32_t, int32_t, int32_t) { /*16*/ };
    virtual void adjustOrganizeCounter(int32_t) { /*17*/ };
    virtual void getOrganizer(int32_t*, int32_t*) { /*18*/ }; /*!< or perhaps somebody else - only works for combat_training and skill_demonstration */
    virtual int32_t* getBuilding() { return 0; /*19*/ }; /*!< returns pointer to building_id */
    virtual bool isSparring() { return bool(); /*20*/ };
    virtual int16_t getUniformType() { return int16_t(); /*21*/ };
    virtual void getName(int32_t, std::string*) { /*22*/ };
  protected:
    activity_event(virtual_identity *_id = &activity_event::_identity);
    friend void *df::allocator_fn<activity_event>(void*,const void*);
  };
  template<> struct DFHACK_EXPORT bitfield_traits<activity_event::T_flags> {
    typedef uint32_t base_type;
    typedef activity_event::T_flags bitfield_type;
    static const int bit_count = sizeof(base_type)*8;
    static const bitfield_item_info bits[bit_count];
  };
  template<> struct DFHACK_EXPORT identity_traits<activity_event::T_flags> {
    static bitfield_identity identity;
    static bitfield_identity *get() { return &identity; }
  };
}
#endif
