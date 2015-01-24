/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_PROJECTILE_H
#define DF_PROJECTILE_H
#ifndef DF_COORD_H
#include "coord.h"
#endif
#ifndef DF_PROJECTILE_FLAGS_H
#include "projectile_flags.h"
#endif
#ifndef DF_PROJECTILE_TYPE_H
#include "projectile_type.h"
#endif
namespace df {
  struct file_compressorst;
  struct proj_list_link;
  struct unit;
  struct DFHACK_EXPORT projectile : virtual_class {
    df::proj_list_link* link;
    int32_t id;
    df::unit* firer;
    df::coord origin_pos;
    df::coord target_pos;
    df::coord cur_pos;
    df::coord prev_pos;
    int32_t distance_flown;
    int32_t fall_threshold;
    int32_t min_hit_distance;
    int32_t min_ground_distance;
    df::projectile_flags flags;
    int16_t fall_counter; /*!< counts down from delay to 0, then it moves */
    int16_t fall_delay;
    int32_t hit_rating;
    int32_t unk21;
    int32_t unk22;
    int32_t bow_id;
    int32_t unk_item_id;
    int32_t unk_unit_id;
    char anon_1[4]; /*!< v0.40.01 */
    int32_t pos_x;
    int32_t pos_y;
    int32_t pos_z;
    int32_t speed_x;
    int32_t speed_y;
    int32_t speed_z;
    int32_t accel_x;
    int32_t accel_y;
    int32_t accel_z;
    static virtual_identity _identity;
    typedef projectile* key_pointer_type;
    typedef int32_t key_field_type;
    static int binsearch_index(const std::vector<projectile*> &vec, key_field_type key, bool exact = true);
    static int binsearch_index(const std::vector<projectile*> &vec, key_pointer_type key, bool exact = true);
  public:
    virtual df::projectile_type getType() { return df::projectile_type(); /*0*/ };
    virtual bool checkImpact(bool) { return bool(); /*1*/ };
    virtual bool checkMovement() { return bool(); /*2*/ };
    virtual void read_file(df::file_compressorst*, int32_t) { /*3*/ };
    virtual void write_file(df::file_compressorst*) { /*4*/ };
  protected:
    virtual void anon_vmethod_5(void*) { /*5*/ };
  public:
    virtual bool isObjectLost() { return bool(); /*6*/ };
    virtual ~projectile() { /*7*/ };
  protected:
    projectile(virtual_identity *_id = &projectile::_identity);
    friend void *df::allocator_fn<projectile>(void*,const void*);
  };
}
#endif
