/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_SQUAD_ORDER_H
#define DF_SQUAD_ORDER_H
#ifndef DF_SQUAD_ORDER_CANNOT_REASON_H
#include "squad_order_cannot_reason.h"
#endif
#ifndef DF_SQUAD_ORDER_TYPE_H
#include "squad_order_type.h"
#endif
namespace df {
  struct file_compressorst;
  struct unit;
  struct DFHACK_EXPORT squad_order : virtual_class {
    int32_t unk_v40_1; /*!< v0.40.01 */
    int32_t unk_v40_2; /*!< v0.40.01 */
    int32_t year; /*!< v0.40.01 */
    int32_t year_tick; /*!< v0.40.01 */
    int32_t unk_v40_3; /*!< v0.40.01 */
    static virtual_identity _identity;
  public:
    virtual df::squad_order* clone() { return 0; /*0*/ };
    virtual void write_file(df::file_compressorst*) { /*1*/ };
    virtual void read_file(df::file_compressorst*, int32_t) { /*2*/ };
    virtual df::squad_order_type getType() { return df::squad_order_type(); /*3*/ };
    virtual bool isPatrol() { return bool(); /*4*/ };
    virtual ~squad_order() { /*5*/ };
    virtual void offsetPosition(int16_t, int16_t, int16_t) { /*6*/ };
    virtual bool process(int32_t, int32_t, df::unit*) { return bool(); /*7*/ };
    virtual df::squad_order_cannot_reason reasonCannot(df::unit*) { return df::squad_order_cannot_reason(); /*8*/ };
    virtual bool decUniformLock(df::unit*) { return bool(); /*9*/ };
    virtual bool isFulfilled() { return bool(); /*10*/ }; /*!< v0.34.11; true if all killed */
    virtual std::vector<int32_t >* getTargetUnits() { return 0; /*11*/ };
    virtual int16_t getUniformType(df::unit*) { return int16_t(); /*12*/ };
    virtual void getDescription(std::string*) { /*13*/ };
    virtual bool isInactive(int32_t) { return bool(); /*14*/ }; /*!< always false */
    virtual bool isCombat() { return bool(); /*15*/ }; /*!< not train */
  protected:
    squad_order(virtual_identity *_id = &squad_order::_identity);
    friend void *df::allocator_fn<squad_order>(void*,const void*);
  };
}
#endif
