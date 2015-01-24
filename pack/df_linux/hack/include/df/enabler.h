/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_ENABLER_H
#define DF_ENABLER_H
#ifndef DF_ZOOM_COMMANDS_H
#include "zoom_commands.h"
#endif
namespace df {
  struct renderer;
  struct DFHACK_EXPORT enabler {
    bool fullscreen;
    struct DFHACK_EXPORT T_overridden_grid_sizes {
      int32_t anon_1;
      int32_t anon_2;
      static struct_identity _identity;
    public:
      T_overridden_grid_sizes();
    };
    std::deque<T_overridden_grid_sizes > overridden_grid_sizes;
    df::renderer* renderer;
    int32_t calculated_fps;
    int32_t calculated_gfps;
    std::deque<int32_t > frame_timings;
    std::deque<int32_t > gframe_timings;
    int32_t frame_sum;
    int32_t gframe_sum;
    int32_t frame_last;
    int32_t gframe_last;
    float fps;
    float gfps;
    float fps_per_gfps;
    uint32_t last_tick;
    float outstanding_frames;
    float outstanding_gframes;
    uint32_t async_frames;
    bool async_paused;
    struct DFHACK_EXPORT T_async_tobox {
      void* sem;
      struct DFHACK_EXPORT T_queue {
        enum T_cmd : int32_t {
          pause,
          start,
          render,
          inc,
          set_fps
        };
        T_cmd cmd;
        int32_t val;
        static struct_identity _identity;
      public:
        T_queue();
      };
      std::deque<T_queue > queue;
      void* sem_fill;
      static struct_identity _identity;
    public:
      T_async_tobox();
    };
    T_async_tobox async_tobox;
    struct DFHACK_EXPORT T_async_frombox {
      void* sem;
      struct DFHACK_EXPORT T_queue {
        enum T_msg : int32_t {
          quit,
          complete,
          set_fps,
          set_gfps,
          push_resize,
          pop_resize,
          reset_textures
        };
        T_msg msg;
        union DFHACK_EXPORT {
          int32_t fps;
          struct DFHACK_EXPORT {
            int32_t x;
            int32_t y;
          };
        };
        static struct_identity _identity;
      public:
        T_queue();
      };
      std::deque<T_queue > queue;
      void* sem_fill;
      static struct_identity _identity;
    public:
      T_async_frombox();
    };
    T_async_frombox async_frombox;
    struct DFHACK_EXPORT T_async_zoom {
      void* sem;
      std::deque<df::zoom_commands > queue;
      void* sem_fill;
      static struct_identity _identity;
    public:
      T_async_zoom();
    };
    T_async_zoom async_zoom;
    void* async_fromcomplete;
    uint32_t renderer_threadid;
    std::string command_line;
    float ccolor[16][3];
    union T_flag {
      uint32_t whole;
      struct {
        uint32_t render : 1;
        uint32_t maxfps : 1;
      } bits;
      enum Shift {
        shift_render = 0,
        shift_maxfps = 1
      };
      enum Mask : uint32_t {
        mask_render = 0x1U,
        mask_maxfps = 0x2U
      };
      T_flag(uint32_t whole_ = 0) : whole(whole_) {};
    };
    T_flag flag;
    int8_t mouse_lbut;
    int8_t mouse_rbut;
    int8_t mouse_lbut_down;
    int8_t mouse_rbut_down;
    int8_t mouse_lbut_lift;
    int8_t mouse_rbut_lift;
    int8_t tracking_on;
    struct DFHACK_EXPORT T_textures {
      std::vector<void* > raws;
      bool uploaded;
      uint32_t gl_catalog;
      void* gl_texpos;
      static struct_identity _identity;
    public:
      T_textures();
    };
    T_textures textures;
    int32_t sync;
    std::vector<void* > text_system;
    struct DFHACK_EXPORT T_simticks {
      void* sem;
      int32_t value;
      static struct_identity _identity;
    public:
      T_simticks();
    };
    T_simticks simticks;
    struct DFHACK_EXPORT T_gputicks {
      void* sem;
      int32_t value;
      static struct_identity _identity;
    public:
      T_gputicks();
    };
    T_gputicks gputicks;
    uint32_t clock;
    static struct_identity _identity;
  public:
    enabler();
  };
  template<> struct DFHACK_EXPORT identity_traits<enabler::T_async_tobox::T_queue::T_cmd> {
    static enum_identity identity;
    static enum_identity *get() { return &identity; }
  };
  template<> struct DFHACK_EXPORT enum_traits<enabler::T_async_tobox::T_queue::T_cmd> {
    typedef int32_t base_type;
    typedef enabler::T_async_tobox::T_queue::T_cmd enum_type;
    static const base_type first_item_value = 0;
    static const base_type last_item_value = 4;
    static inline bool is_valid(enum_type value) {
      return (base_type(value) >= first_item_value && base_type(value) <= last_item_value);
    }
    static const enum_type first_item = (enum_type)first_item_value;
    static const enum_type last_item = (enum_type)last_item_value;
    static const char *const key_table[5];
  };
  template<> struct DFHACK_EXPORT identity_traits<enabler::T_async_frombox::T_queue::T_msg> {
    static enum_identity identity;
    static enum_identity *get() { return &identity; }
  };
  template<> struct DFHACK_EXPORT enum_traits<enabler::T_async_frombox::T_queue::T_msg> {
    typedef int32_t base_type;
    typedef enabler::T_async_frombox::T_queue::T_msg enum_type;
    static const base_type first_item_value = 0;
    static const base_type last_item_value = 6;
    static inline bool is_valid(enum_type value) {
      return (base_type(value) >= first_item_value && base_type(value) <= last_item_value);
    }
    static const enum_type first_item = (enum_type)first_item_value;
    static const enum_type last_item = (enum_type)last_item_value;
    static const char *const key_table[7];
  };
  template<> struct DFHACK_EXPORT bitfield_traits<enabler::T_flag> {
    typedef uint32_t base_type;
    typedef enabler::T_flag bitfield_type;
    static const int bit_count = sizeof(base_type)*8;
    static const bitfield_item_info bits[bit_count];
  };
  template<> struct DFHACK_EXPORT identity_traits<enabler::T_flag> {
    static bitfield_identity identity;
    static bitfield_identity *get() { return &identity; }
  };
}
#endif
